/* ----------------------------------------------------------------------
    This is the

    ██╗     ██╗ ██████╗  ██████╗  ██████╗ ██╗  ██╗████████╗███████╗
    ██║     ██║██╔════╝ ██╔════╝ ██╔════╝ ██║  ██║╚══██╔══╝██╔════╝
    ██║     ██║██║  ███╗██║  ███╗██║  ███╗███████║   ██║   ███████╗
    ██║     ██║██║   ██║██║   ██║██║   ██║██╔══██║   ██║   ╚════██║
    ███████╗██║╚██████╔╝╚██████╔╝╚██████╔╝██║  ██║   ██║   ███████║
    ╚══════╝╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝®

    DEM simulation engine, released by
    DCS Computing Gmbh, Linz, Austria
    http://www.dcs-computing.com, office@dcs-computing.com

    LIGGGHTS® is part of CFDEM®project:
    http://www.liggghts.com | http://www.cfdem.com

    Core developer and main author:
    Christoph Kloss, christoph.kloss@dcs-computing.com

    LIGGGHTS® is open-source, distributed under the terms of the GNU Public
    License, version 2 or later. It is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. You should have
    received a copy of the GNU General Public License along with LIGGGHTS®.
    If not, see http://www.gnu.org/licenses . See also top-level README
    and LICENSE files.

    LIGGGHTS® and CFDEM® are registered trade marks of DCS Computing GmbH,
    the producer of the LIGGGHTS® software and the CFDEM®coupling software
    See http://www.cfdem.com/terms-trademark-policy for details.

-------------------------------------------------------------------------
    Contributing author and copyright for this file:
    This file is from LAMMPS
    LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
    http://lammps.sandia.gov, Sandia National Laboratories
    Steve Plimpton, sjplimp@sandia.gov

    Copyright (2003) Sandia Corporation.  Under the terms of Contract
    DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
    certain rights in this software.  This software is distributed under
    the GNU General Public License.
------------------------------------------------------------------------- */

#ifdef COMPUTE_CLASS

ComputeStyle(property/local,ComputePropertyLocal)

#else

#ifndef LMP_COMPUTE_PROPERTY_LOCAL_H
#define LMP_COMPUTE_PROPERTY_LOCAL_H

#include "compute.h"

namespace LAMMPS_NS {

class ComputePropertyLocal : public Compute {
 public:
  ComputePropertyLocal(class LAMMPS *, int &iarg, int, char **);
  ~ComputePropertyLocal();
  void init();
  void init_list(int, class NeighList *);
  void compute_local();
  double memory_usage();

 private:
  int nvalues,kindflag;

  int nmax;
  double *vector;
  double **array;
  double *buf;

  class NeighList *list;

  int ncount;
  int **indices;

  int count_pairs(int, int);
  int count_bonds(int);
  int count_angles(int);
  int count_dihedrals(int);
  int count_impropers(int);
  void reallocate(int);

  typedef void (ComputePropertyLocal::*FnPtrPack)(int);
  FnPtrPack *pack_choice;              // ptrs to pack functions

  void pack_patom1(int);
  void pack_patom2(int);
  void pack_ptype1(int);
  void pack_ptype2(int);

  void pack_batom1(int);
  void pack_batom2(int);
  void pack_batom1x(int);
  void pack_batom1y(int);
  void pack_batom1z(int);
  void pack_batom2x(int);
  void pack_batom2y(int);
  void pack_batom2z(int);
  void pack_bforceX(int);
  void pack_bforceY(int);
  void pack_bforceZ(int);
  void pack_btorqueX(int);
  void pack_btorqueY(int);
  void pack_btorqueZ(int);
  void pack_beqdist(int);
  void pack_btype(int);
  void pack_bondbroken(int);
  
  void pack_bEfn(int);  // Added by Shubham Agarwal, The University of British Columbia
  void pack_bEft(int);  // Added by Shubham Agarwal, The University of British Columbia
  void pack_bEtn(int);  // Added by Shubham Agarwal, The University of British Columbia
  void pack_bEtt(int);  // Added by Shubham Agarwal, The University of British Columbia
  
  void pack_aatom1(int);
  void pack_aatom2(int);
  void pack_aatom3(int);
  void pack_atype(int);

  void pack_datom1(int);
  void pack_datom2(int);
  void pack_datom3(int);
  void pack_datom4(int);
  void pack_dtype(int);

  void pack_iatom1(int);
  void pack_iatom2(int);
  void pack_iatom3(int);
  void pack_iatom4(int);
  void pack_itype(int);
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

E: Compute property/local cannot use these inputs together

Only inputs that generate the same number of datums can be used
togther.  E.g. bond and angle quantities cannot be mixed.

E: Invalid keyword in compute property/local command

Self-explanatory.

E: Compute property/local for property that isn't allocated

Self-explanatory.

E: No pair style is defined for compute property/local

Self-explanatory.

E: Pair style does not support compute property/local

The pair style does not have a single() function, so it can
not be invoked by fix bond/swap.

*/
