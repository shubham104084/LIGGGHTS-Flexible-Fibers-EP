# LIGGGHTS Flexible Fibers

[Home](Home)

[Commands](commands)

## Atom Modify Command

### Syntax

```text
atom_modify keyword values ...
```

* one or more keyword/value pairs may be appended
* keyword = *map* or *first* or *sort*

```text
map value = array or hash
first value = group-ID = group whose atoms will appear first in internal atom lists
sort values = Nfreq binsize
  Nfreq = sort atoms spatially every this many time steps
  binsize = bin size for spatial sorting (distance units)
```

### Examples

```text
atom_modify map hash
atom_modify map array sort 10000 2.0
atom_modify first colloid
```

### Description

Modify properties of the atom style selected within LIGGGHTS(R)-PUBLIC.

The map keyword determines how atom ID lookup is done for molecular problems.
Lookups are performed by bond (angle, etc) routines in LIGGGHTS(R)-PUBLIC to
find the local atom index associated with a global atom ID. When the array
value is used, each processor stores a lookup table of length N, where N is
the total # of atoms in the system. This is the fastest method for most
simulations, but a processor can run out of memory to store the table for very
large simulations. The hash value uses a hash table to perform the lookups.
This method can be slightly slower than the array method, but its memory cost
is proportional to N/P on each processor, where P is the total number of
processors running the simulation.

The first keyword allows a group to be specified whose atoms will be
maintained as the first atoms in each processor’s list of owned atoms. This in
only useful when the specified group is a small fraction of all the atoms, and
there are other operations LIGGGHTS(R)-PUBLIC is performing that will be
sped-up significantly by being able to loop over the smaller set of atoms.
Otherwise the reordering required by this option will be a net slow-down. The
neigh_modify include and communicate group commands are two examples of
commands that require this setting to work efficiently. Several fixes, most
notably time integration fixes like fix nve, also take advantage of this
setting if the group they operate on is the group specified by this command.
Note that specifying “all” as the group-ID effectively turns off the first
option.

It is OK to use the first keyword with a group that has not yet been defined,
e.g. to use the atom_modify first command at the beginning of your input
script. LIGGGHTS(R)-PUBLIC does not use the group until a simulation is run.

The sort keyword turns on a spatial sorting or reordering of atoms within each
processor’s sub-domain every Nfreq timesteps. If Nfreq is set to 0, then
sorting is turned off. Sorting can improve cache performance and thus speed-up
a LIGGGHTS(R)-PUBLIC simulation, as discussed in a paper by (Meloni). Its
efficiency depends on the problem size (atoms/processor), how quickly the
system becomes disordered, and various other factors. As a general rule,
sorting is typically more effective at speeding up simulations of liquids as
opposed to solids. In tests we have done, the speed-up can range from zero to
3-4x.

Reordering is performed every Nfreq timesteps during a dynamics run or
iterations during a minimization. More precisely, reordering occurs at the
first reneighboring that occurs after the target timestep. The reordering is
performed locally by each processor, using bins of the specified binsize. If
binsize is set to 0.0, then a binsize equal to half the neighbor cutoff
distance (force cutoff plus skin distance) is used, which is a reasonable
value. After the atoms have been binned, they are reordered so that atoms in
the same bin are adjacent to each other in the processor’s 1d list of atoms.

The goal of this procedure is for atoms to put atoms close to each other in
the processor’s one-dimensional list of atoms that are also near to each other
spatially. This can improve cache performance when pairwise interactions and
neighbor lists are computed. Note that if bins are too small, there will be
few atoms/bin. Likewise if bins are too large, there will be many atoms/bin.
In both cases, the goal of cache locality will be undermined.

#### Warning

Running a simulation with sorting on versus off should not change the
simulation results in a statistical sense. However, a different ordering will
induce round-off differences, which will lead to diverging trajectories over
time when comparing two simulations. Various commands, particularly those
which use random numbers, may generate (statistically identical) results which
depend on the order in which atoms are processed. The order of atoms in a dump
file will also typically change if sorting is enabled.

### Restrictions

The map keyword can only be used before the simulation box is defined by a
[read_data](read_data) or [create_box](create_box) command.

The *first* and *sort* options cannot be used together. Since sorting is on by
default, it will be turned off if the *first* keyword is used with a group-ID
that is not “all”.

### Defaults

By default, non-molecular problems do not allocate maps. For molecular
problems, the option default is map = array. By default, a “first” group is
not defined. By default, sorting is enabled with a frequency of 1000 and a
binsize of 0.0, which means the neighbor cutoff will be used to set the bin
size.

#### References

(Meloni) Meloni, Rosati and Colombo, J Chem Phys, 126, 121102 (2007).

##### © Copyright 2016, DCS Computing GmbH, JKU Linz and Sandia Corporation
