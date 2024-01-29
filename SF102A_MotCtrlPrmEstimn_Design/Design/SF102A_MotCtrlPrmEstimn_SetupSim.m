%% Simulation Setup Script for SF102A Motor Control Parameter Estimation
clear,clc

run SF102A_MotCtrlPrmEstimn_DataDict
Ts =0.002;

%  Simulink.BlockDiagram.loadActiveConfigSet('SF102A_MotCtrlPrmEstimn','NxtrMBDConfig')