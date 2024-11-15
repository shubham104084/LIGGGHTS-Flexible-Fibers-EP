//#**************************************************************
//#
//# filename:             solversettings_auto.h 
//#
//# author:               Gerstmayr, Reischl, Saxinger
//#
//# generated:	
//# description: 
//# remarks:		
//#
//# Copyright (c) 2003-2013 Johannes Gerstmayr, Linz Center of Mechatronics GmbH, Austrian
//# Center of Competence in Mechatronics GmbH, Institute of Technical Mechanics at the 
//# Johannes Kepler Universitaet Linz, Austria. All rights reserved.
//#
//# This file is part of HotInt.
//# HotInt is free software: you can redistribute it and/or modify it under the terms of 
//# the HOTINT license. See folder "licenses" for more details.
//#
//# bug reports are welcome!!!
//# WWW:		www.hotint.org
//# email:	bug_reports@hotint.org or support@hotint.org
//#***************************************************************************************

//File automatically generated by Octave/Matlab script "documentation/autogeneration/generate_mbssolset_fn"!
//Do not manually change this file, because it will be overwritten
//Changes of the SolverSettings structure and initial values can be made in the tabular file "documentation/autogeneration/mbssolset_auto.txt"!

#ifndef SOLVERSETTINGS_AUTO__H
#define SOLVERSETTINGS_AUTO__H

class SolverSettings
{
  public:
  SolverSettings() {Init();};

  virtual void Init()
  {
    starttime = 0;
    endtime = 10;
    dostaticcomputation = 0;
    maxstepsize = 1e-3;
    minstepsize = 1e-4;
    maxindex = 2;
    tableauname = "LobattoIIIA";
    maxstages = 2;
    minstages = 1;
    fulladaptive = 0;
    initstepsize = 1e-2;
    absaccuracy = 1e-2;
    relaccuracy = 1;
    variable_order = 0;
    doimplicitintegration = 1;
    reset_after_simulation = 1;
    assume_constant_mass_matrix = 0;
    static_minloadinc = 1e-12;
    static_maxloadinc = 1;
    static_initloadinc = 1;
    static_loadinc_up = 2;
    static_loadinc_down = 2;
    static_incloadinc = 1;
    static_spring_type_reg_param = 0.;
    static_use_tol_relax_factor = 0;
    static_maxtol_relax_factor = 10;
    static_experimental_sparse_jacobian = 1;
    nls_relativeaccuracy = 1e-8;
    nls_absoluteaccuracy = 1e2;
    nls_numdiffepsi = 1e-7;
    nls_symmetricjacobian = 1;
    nls_modifiednewton = 1;
    nls_maxmodnewtonsteps = 12;
    nls_maxrestartnewtonsteps = 15;
    nls_maxfullnewtonsteps = 25;
    nls_trustregion = 0;
    nls_trustregiondiv = 0.1;
    do_eigenmode_comp = 0;
    eigsolv_reuse_last_eigvec = 0;
    eigsolv_n_eigvals = 3;
    eigsolv_maxiterations = 1000;
    eigsolv_solvertype = 0;
    eigsolv_nzeromodes = 0;
    eigsolv_use_nzeromodes = 0;
    eigsolv_use_preconditioning = 0;
    eigsolv_accuracy = 1e-10;
    eigsolv_precond_lambda = 1;
    eigsolv_eigenmodes_scaling_factor = 1;
    eigsolv_normalization_mode = 0;
    eigsolv_linearize_about_act_sol = 0;
    eigsolv_gyro = 0;
    eigval_outp_format_flag = 3;
    nls_usesparsesolver = 0;
    nls_solve_undetermined_system = 0;
    nls_estimated_condition_number = 1e12;
    discontinuousaccuracy = 1e-4;
    maxdiscontinuousit = 8;
    ignore_maxdiscontinuousit = 0;
    writeresults = 1;
    writesolstep = 1;
    storedata = 0.01;
    sol_data_to_files = 0;
    sol_immediately_write = 1;
    sol_replace_files = 0;
    sol_write_sol_file_header = 1;
    sol_file_header_comment = "";
    sol_directory = "..\\..\\output\\";
    sol_filename = "sol.txt";
    sol_parfilename = "solpar.txt";
    sol_parfile_write_final_sensor_values = 1;
    sol_parfile_write_cost_function = 1;
    sol_parfile_write_second_order_size = 0;
    sol_parfile_write_CPU_time = 0;
    storesolution_state = 0;
    storesolution_statename = "";
    loadsolution_state = 0;
    loadsolution_statename = "";
    postproc_compute_eigenvalues = 0;
    store_FE_matrices = 1;
    element_wise_jacobian = 1;
    parvar_activate = 0;
    parvar_geometric = 0;
    parvar_start_value = 0.;
    parvar_end_value = 0.;
    parvar_step_lin = 1.;
    parvar_step_geom = 2.;
    parvar_EDCvarname = "";
    parvar2_activate = 0;
    parvar2_geometric = 0;
    parvar2_start_value = 0.;
    parvar2_end_value = 0.;
    parvar2_step_lin = 1.;
    parvar2_step_geom = 2.;
    parvar2_EDCvarname = "";
    paropt_activate = 0;
    paropt_run_with_nominal_parameters = 0;
    paropt_sensors = 0;
    paropt_restart = 0;
    paropt_method = "Genetic";
    par_opt_N_population = 20;
    par_opt_N_survivors = 10;
    par_opt_N_children = 10;
    par_opt_N_generations = 15;
    par_opt_range_reduction_factor = 0.5;
    par_opt_randomizer_initialization = 0;
    par_opt_min_distance_factor = 0.5;
    par_opt_N_pars = 0;
    par_opt_name1 = "";
    par_opt_minval1 = 0.;
    par_opt_maxval1 = 0.;
    par_opt_name2 = "";
    par_opt_minval2 = 0.;
    par_opt_maxval2 = 0.;
    par_opt_name3 = "";
    par_opt_minval3 = 0.;
    par_opt_maxval3 = 0.;
    par_sens_activate = 0;
    par_sens_method = "Forward";
    par_sens_abs_diff_val = 1e-4;
    par_sens_rel_diff_val = 1e-4;
    par_sens_use_final_sensor_values = 0;
    par_sens_use_opt_params = 0;
    par_sens_N_pars = 0;
    par_sens_name1 = "";
    par_sens_name2 = "";
    par_sens_name3 = "";
    parallel_activate = 0;
    parallel_number_of_threads = 2;
    withgraphics = 5;
    usestoredsolversettings = 0;
    default_model_data_file = "";
  }

  double starttime;
  double endtime;
  int dostaticcomputation;
  double maxstepsize;
  double minstepsize;
  int maxindex;
  mystr tableauname;
  int maxstages;
  int minstages;
  int fulladaptive;
  double initstepsize;
  double absaccuracy;
  double relaccuracy;
  int variable_order;
  int doimplicitintegration;
  int reset_after_simulation;
  int assume_constant_mass_matrix;
  double static_minloadinc;
  double static_maxloadinc;
  double static_initloadinc;
  double static_loadinc_up;
  double static_loadinc_down;
  int static_incloadinc;
  double static_spring_type_reg_param;
  int static_use_tol_relax_factor;
  double static_maxtol_relax_factor;
  int static_experimental_sparse_jacobian;
  double nls_relativeaccuracy;
  double nls_absoluteaccuracy;
  double nls_numdiffepsi;
  int nls_symmetricjacobian;
  int nls_modifiednewton;
  int nls_maxmodnewtonsteps;
  int nls_maxrestartnewtonsteps;
  int nls_maxfullnewtonsteps;
  int nls_trustregion;
  double nls_trustregiondiv;
  int do_eigenmode_comp;
  int eigsolv_reuse_last_eigvec;
  int eigsolv_n_eigvals;
  int eigsolv_maxiterations;
  int eigsolv_solvertype;
  int eigsolv_nzeromodes;
  int eigsolv_use_nzeromodes;
  int eigsolv_use_preconditioning;
  double eigsolv_accuracy;
  double eigsolv_precond_lambda;
  double eigsolv_eigenmodes_scaling_factor;
  int eigsolv_normalization_mode;
  int eigsolv_linearize_about_act_sol;
  int eigsolv_gyro;
  int eigval_outp_format_flag;
  int nls_usesparsesolver;
  int nls_solve_undetermined_system;
  double nls_estimated_condition_number;
  double discontinuousaccuracy;
  int maxdiscontinuousit;
  int ignore_maxdiscontinuousit;
  int writeresults;
  int writesolstep;
  double storedata;
  int sol_data_to_files;
  int sol_immediately_write;
  int sol_replace_files;
  int sol_write_sol_file_header;
  mystr sol_file_header_comment;
  mystr sol_directory;
  mystr sol_filename;
  mystr sol_parfilename;
  int sol_parfile_write_final_sensor_values;
  int sol_parfile_write_cost_function;
  int sol_parfile_write_second_order_size;
  int sol_parfile_write_CPU_time;
  int storesolution_state;
  mystr storesolution_statename;
  int loadsolution_state;
  mystr loadsolution_statename;
  int postproc_compute_eigenvalues;
  int store_FE_matrices;
  int element_wise_jacobian;
  int parvar_activate;
  int parvar_geometric;
  double parvar_start_value;
  double parvar_end_value;
  double parvar_step_lin;
  double parvar_step_geom;
  mystr parvar_EDCvarname;
  int parvar2_activate;
  int parvar2_geometric;
  double parvar2_start_value;
  double parvar2_end_value;
  double parvar2_step_lin;
  double parvar2_step_geom;
  mystr parvar2_EDCvarname;
  int paropt_activate;
  int paropt_run_with_nominal_parameters;
  int paropt_sensors;
  int paropt_restart;
  mystr paropt_method;
  int par_opt_N_population;
  int par_opt_N_survivors;
  int par_opt_N_children;
  int par_opt_N_generations;
  double par_opt_range_reduction_factor;
  double par_opt_randomizer_initialization;
  double par_opt_min_distance_factor;
  int par_opt_N_pars;
  mystr par_opt_name1;
  double par_opt_minval1;
  double par_opt_maxval1;
  mystr par_opt_name2;
  double par_opt_minval2;
  double par_opt_maxval2;
  mystr par_opt_name3;
  double par_opt_minval3;
  double par_opt_maxval3;
  int par_sens_activate;
  mystr par_sens_method;
  double par_sens_abs_diff_val;
  double par_sens_rel_diff_val;
  int par_sens_use_final_sensor_values;
  int par_sens_use_opt_params;
  int par_sens_N_pars;
  mystr par_sens_name1;
  mystr par_sens_name2;
  mystr par_sens_name3;
  int parallel_activate;
  int parallel_number_of_threads;
  double withgraphics;
  int usestoredsolversettings;
  mystr default_model_data_file;
};

#endif

