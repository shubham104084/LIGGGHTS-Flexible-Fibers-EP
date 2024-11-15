//#**************************************************************
//# filename:             BEBeamGetDKappa2.h
//#
//# author:               Gruber, Nachbagauer
//#
//# generated:						
//# description:          
//# comments:
//#
//# Copyright (c) 2003-2013 Johannes Gerstmayr, Linz Center of Mechatronics GmbH, Austrian
//# Center of Competence in Mechatronics GmbH, Institute of Technical Mechanics at the 
//# Johannes Kepler Universitaet Linz, Austria. All rights reserved.
//#
//# This file is part of HotInt.
//# HotInt is free software: you can redistribute it and/or modify it under the terms of 
//# the HOTINT license. See folder 'licenses' for more details.
//#
//# bug reports are welcome!!!
//# WWW:		www.hotint.org
//# email:	bug_reports@hotint.org or support@hotint.org
//#***************************************************************************************
 

Vector3D GetDKappa2DPosx(double dR1,double dR2,double dR3,double ddR1,double ddR2,double ddR3,double Ang,double dAng,double D1,double D2,double D3,double dD1,double dD2,double dD3) const
{
 return Vector3D(((D2*ddR2*Power(dR1,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*Power(dR1,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR1*Power(dR1,2)*dR2*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR2*Power(dR1,2)*dR2*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*dR1*Power(dR2,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*dR1*Power(dR2,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR1*Power(dR1,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR3*Power(dR1,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR2*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR3*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*dR1*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D2*ddR2*dR1*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + 2*D2*ddR2*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + 2*D3*ddR3*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (-(D3*ddR2) + D2*ddR3)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + 2*dR1*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))) - ((2*Power(D2,2)*dR1 + 2*Power(D3,2)*dR1 - 2*D1*D2*dR2 - 2*D1*D3*dR3)*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(2.*Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Power(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)),1.5)) - (3*dR1*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),2.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))),((D2*ddR2*Power(dR1,2)*dR2*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*Power(dR1,2)*dR2*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR1*dR1*Power(dR2,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR2*dR1*Power(dR2,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*Power(dR2,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*Power(dR2,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR1*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR3*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR2*Power(dR2,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR3*Power(dR2,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*dR2*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D2*ddR2*dR2*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - D2*ddR1*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + 2*D1*ddR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + 2*D3*ddR3*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (D3*ddR1 - D1*ddR3)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + 2*dR2*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))) - ((-2*D1*D2*dR1 + 2*Power(D1,2)*dR2 + 2*Power(D3,2)*dR2 - 2*D2*D3*dR3)*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(2.*Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Power(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)),1.5)) - (3*dR2*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),2.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))),((D2*ddR2*Power(dR1,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*Power(dR1,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR1*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR2*dR1*dR2*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*Power(dR2,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D3*ddR3*Power(dR2,2)*dR3*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR1*dR1*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D1*ddR3*dR1*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D3*ddR2*dR2*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - (D2*ddR3*dR2*Power(dR3,2)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D1*ddR1*Power(dR3,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) + (D2*ddR2*Power(dR3,3)*Cos(Ang))/Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2)) - D3*ddR1*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + 2*D1*ddR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + 2*D2*ddR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (-(D2*ddR1) + D1*ddR2)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + 2*dR3*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))) - ((-2*D3*(D1*dR1 + D2*dR2) + 2*Power(D1,2)*dR3 + 2*Power(D2,2)*dR3)*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(2.*Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Power(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)),1.5)) - (3*dR3*(D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Sin(Ang)))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),2.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2))))); 
} 
Vector3D GetDKappa2DPosxx(double dR1,double dR2,double dR3,double ddR1,double ddR2,double ddR3,double Ang,double dAng,double D1,double D2,double D3,double dD1,double dD2,double dD3) const
{
 return Vector3D((-(D2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang)) + D1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (D3*dR2 - D2*dR3)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))),(D2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (-(D3*dR1) + D1*dR3)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))),(D3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + D3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) - D2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Cos(Ang) + (D2*dR1 - D1*dR2)*(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2))))); 
} 
double GetDKappa2DAng(double dR1,double dR2,double dR3,double ddR1,double ddR2,double ddR3,double Ang,double dAng,double D1,double D2,double D3,double dD1,double dD2,double dD3) const
{
 return ((Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*(-((D3*ddR2 - D2*ddR3)*dR1) + ddR1*(D3*dR2 - D2*dR3) + D1*(-(ddR3*dR2) + ddR2*dR3))*Cos(Ang) - D2*ddR2*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) - D3*ddR3*Power(dR1,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D2*ddR1*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D1*ddR2*dR1*dR2*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) - D1*ddR1*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) - D3*ddR3*Power(dR2,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D3*ddR1*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D1*ddR3*dR1*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D3*ddR2*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) + D2*ddR3*dR2*dR3*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) - D1*ddR1*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang) - D2*ddR2*Power(dR3,2)*Sqrt(Power(dR1,2) + Power(dR2,2) + Power(dR3,2))*Sin(Ang))/(Power(Power(dR1,2) + Power(dR2,2) + Power(dR3,2),1.5)*Sqrt(-2*D1*D2*dR1*dR2 + Power(D3,2)*(Power(dR1,2) + Power(dR2,2)) - 2*D3*(D1*dR1 + D2*dR2)*dR3 + Power(D2,2)*(Power(dR1,2) + Power(dR3,2)) + Power(D1,2)*(Power(dR2,2) + Power(dR3,2)))); 
} 
double GetDKappa2DAngx(double dR1,double dR2,double dR3,double ddR1,double ddR2,double ddR3,double Ang,double dAng,double D1,double D2,double D3,double dD1,double dD2,double dD3) const
{
 return 0; 
}