# LIGGGHTS Flexible Fibers-EP

## The old version
The previous version was developed by Matt Scramm including breakable elastic bonds between the particles. The application includes the modeling of elastic fibers. <br />
Link to the old code: https://github.com/schrummy14/LIGGGHTS_Flexible_Fibers.git <br />
Documentation: https://htmlpreview.github.io/?https://raw.githubusercontent.com/schrummy14/LIGGGHTS_Flexible_Fibers/master/doc/Manual.html

## What is new in this version
This extended version of the the Matt Scramm's (MS's) version includes: <br />
(a) Bi-linear elastoplastic bond model (plasticity) <br />
(b) Cohesive zone based bond model <br/>

In this version the axial, shear, bending and twisting springs are coupled in yielding, i.e, yielding in one mode will affect the stiffnesses of the other modes. However, user can also adjust the yielding crtiteria for each spring individually. The restart files from the MS's version will also be compatible with this one. To see more details about the above included models please refer the paper below:

If you find this work helpful, please cite the above papers below along with the LIGGGHTS and  Matt Schramm's papers.
