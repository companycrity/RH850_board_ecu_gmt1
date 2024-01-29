%% Simulation Setup Script for SF108A Motor Current Peak Estimation
clear,clc

run SF108A_MotCurrPeakEstimn_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF108A_MotCurrPeakEstimn','NxtrMBDConfig.mat')