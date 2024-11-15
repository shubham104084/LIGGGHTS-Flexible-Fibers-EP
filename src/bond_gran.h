/* ----------------------------------------------------------------------
   LIGGGHTS - LAMMPS Improved for General Granular and Granular Heat
   Transfer Simulations

   LIGGGHTS is part of the CFDEMproject
   www.liggghts.com | www.cfdem.com

   Christoph Kloss, christoph.kloss@cfdem.com
   Copyright 2009-2012 JKU Linz
   Copyright 2012-     DCS Computing GmbH, Linz

   LIGGGHTS is based on LAMMPS
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   This software is distributed under the GNU General Public License.

   See the README file in the top-level directory.
------------------------------------------------------------------------- */

#ifdef BOND_CLASS

BondStyle(gran,BondGran)

#else

#ifndef LMP_BOND_GRAN_H
#define LMP_BOND_GRAN_H

#include "stdio.h"
#include "bond.h"

namespace LAMMPS_NS {

class BondGran : public Bond {
   public:
      BondGran(class LAMMPS *);
      ~BondGran();
      void init_style();
      void compute(int, int);
      void coeff(int, char **);
      double equilibrium_distance(int);
      void write_restart(FILE *);
      void read_restart(FILE *);
      double single(int, double, int, int, double &);
      double getMinDt(); // Used to calculate the critical time step

   protected:
      int dampmode;
      int breakmode;
      int damagemode;
      double *Sn,*St;
      double *r_break,*sigma_break,*tau_break,*T_break;

      // Added by Matt Schramm, Iowa State University
      double *damp, *beta0, *beta1; // dampening coeffinient
      double *ro, *ri; // Outside and Inside bond radius scale
      // Added by Shubham Agarwal, The University of British Columbia
      double *etan, *etat, *yieldn, *yieldt;
      double *Gcn, *Gct;
      int *breaktype, *damptype;

      void allocate();

      class FixPropertyAtom *fix_Temp;
      double *Temp;

};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Incorrect args for bond coefficients

Self-explanatory.  Check the input script or data file.

*/
