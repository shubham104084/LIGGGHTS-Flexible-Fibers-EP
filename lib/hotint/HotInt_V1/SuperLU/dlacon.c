//#include "stdafx.h"


/*
 * -- SuperLU routine (version 2.0) --
 * Univ. of California Berkeley, Xerox Palo Alto Research Center,
 * and Lawrence Berkeley National Lab.
 * November 15, 1997
 *
 */
#include <math.h>
#include "slu_Cnames.h"

int
dlacon_(int *n, double *v, double *x, int *isgn, double *est, int *kase)

{
/*
    Purpose   
    =======   

    DLACON estimates the 1-norm of a square matrix A.   
    Reverse communication is used for evaluating matrix-vector products. 
  

    Arguments   
    =========   

    N      (input) INT
           The order of the matrix.  N >= 1.   

    V      (workspace) DOUBLE PRECISION array, dimension (N)   
           On the final return, V = A*W,  where  EST = norm(V)/norm(W)   
           (W is not returned).   

    X      (input/output) DOUBLE PRECISION array, dimension (N)   
           On an intermediate return, X should be overwritten by   
                 A * X,   if KASE=1,   
                 A' * X,  if KASE=2,
           and DLACON must be re-called with all the other parameters   
           unchanged.   

    ISGN   (workspace) INT array, dimension (N)

    EST    (output) DOUBLE PRECISION   
           An estimate (a lower bound) for norm(A).   

    KASE   (input/output) INT
           On the initial call to DLACON, KASE should be 0.   
           On an intermediate return, KASE will be 1 or 2, indicating   
           whether X should be overwritten by A * X  or A' * X.   
           On the final return from DLACON, KASE will again be 0.   

    Further Details   
    ======= =======   

    Contributed by Nick Higham, University of Manchester.   
    Originally named CONEST, dated March 16, 1988.   

    Reference: N.J. Higham, "FORTRAN codes for estimating the one-norm of 
    a real or complex matrix, with applications to condition estimation", 
    ACM Trans. Math. Soft., vol. 14, no. 4, pp. 381-396, December 1988.   
    ===================================================================== 
*/

    /* Table of constant values */
    int c__1 = 1;
    double      zero = 0.0;
    double      one = 1.0;
    
    /* Local variables */
    static int iter;
    static int jump, jlast;
    static double altsgn, estold;
    static int i, j;
    double temp;
#ifdef _CRAY
    extern int ISAMAX(int *, double *, int *);
    extern double SASUM(int *, double *, int *);
    extern int SCOPY(int *, double *, int *, double *, int *);
#else
    extern int idamax_(int *, double *, int *);
    extern double dasum_(int *, double *, int *);
    extern int dcopy_(int *, double *, int *, double *, int *);
#endif
#define d_sign(a, b) (b >= 0 ? fabs(a) : -fabs(a))    /* Copy sign */
#define i_dnnt(a) \
	( a>=0 ? floor(a+.5) : -floor(.5-a) ) /* Round to nearest integer */

    if ( *kase == 0 ) {
	for (i = 0; i < *n; ++i) {
	    x[i] = 1. / (double) (*n);
	}
	*kase = 1;
	jump = 1;
	return 0;
    }

    switch (jump) {
	case 1:  goto L20;
	case 2:  goto L40;
	case 3:  goto L70;
	case 4:  goto L110;
	case 5:  goto L140;
    }

    /*     ................ ENTRY   (JUMP = 1)   
	   FIRST ITERATION.  X HAS BEEN OVERWRITTEN BY A*X. */
  L20:
    if (*n == 1) {
	v[0] = x[0];
	*est = fabs(v[0]);
	/*        ... QUIT */
	goto L150;
    }
#ifdef _CRAY
    *est = SASUM(n, x, &c__1);
#else
    *est = dasum_(n, x, &c__1);
#endif

    for (i = 0; i < *n; ++i) {
	x[i] = d_sign(one, x[i]);
	isgn[i] = i_dnnt(x[i]);
    }
    *kase = 2;
    jump = 2;
    return 0;

    /*     ................ ENTRY   (JUMP = 2)   
	   FIRST ITERATION.  X HAS BEEN OVERWRITTEN BY TRANSPOSE(A)*X. */
L40:
#ifdef _CRAY
    j = ISAMAX(n, &x[0], &c__1);
#else
    j = idamax_(n, &x[0], &c__1);
#endif
    --j;
    iter = 2;

    /*     MAIN LOOP - ITERATIONS 2,3,...,ITMAX. */
L50:
    for (i = 0; i < *n; ++i) x[i] = zero;
    x[j] = one;
    *kase = 1;
    jump = 3;
    return 0;

    /*     ................ ENTRY   (JUMP = 3)   
	   X HAS BEEN OVERWRITTEN BY A*X. */
L70:
#ifdef _CRAY
    SCOPY(n, x, &c__1, v, &c__1);
#else
    dcopy_(n, x, &c__1, v, &c__1);
#endif
    estold = *est;
#ifdef _CRAY
    *est = SASUM(n, v, &c__1);
#else
    *est = dasum_(n, v, &c__1);
#endif

    for (i = 0; i < *n; ++i)
	if (i_dnnt(d_sign(one, x[i])) != isgn[i])
	    goto L90;

    /*     REPEATED SIGN VECTOR DETECTED, HENCE ALGORITHM HAS CONVERGED. */
    goto L120;

L90:
    /*     TEST FOR CYCLING. */
    if (*est <= estold) goto L120;

    for (i = 0; i < *n; ++i) {
	x[i] = d_sign(one, x[i]);
	isgn[i] = i_dnnt(x[i]);
    }
    *kase = 2;
    jump = 4;
    return 0;

    /*     ................ ENTRY   (JUMP = 4)   
	   X HAS BEEN OVERWRITTEN BY TRANDPOSE(A)*X. */
L110:
    jlast = j;
#ifdef _CRAY
    j = ISAMAX(n, &x[0], &c__1);
#else
    j = idamax_(n, &x[0], &c__1);
#endif
    --j;
    if (x[jlast] != fabs(x[j]) && iter < 5) {
	++iter;
	goto L50;
    }

    /*     ITERATION COMPLETE.  FINAL STAGE. */
L120:
    altsgn = 1.;
    for (i = 1; i <= *n; ++i) {
	x[i-1] = altsgn * ((double)(i - 1) / (double)(*n - 1) + 1.);
	altsgn = -altsgn;
    }
    *kase = 1;
    jump = 5;
    return 0;
    
    /*     ................ ENTRY   (JUMP = 5)   
	   X HAS BEEN OVERWRITTEN BY A*X. */
L140:
#ifdef _CRAY
    temp = SASUM(n, x, &c__1) / (double)(*n * 3) * 2.;
#else
    temp = dasum_(n, x, &c__1) / (double)(*n * 3) * 2.;
#endif
    if (temp > *est) {
#ifdef _CRAY
	SCOPY(n, &x[0], &c__1, &v[0], &c__1);
#else
	dcopy_(n, &x[0], &c__1, &v[0], &c__1);
#endif
	*est = temp;
    }

L150:
    *kase = 0;
    return 0;

} /* dlacon_ */
