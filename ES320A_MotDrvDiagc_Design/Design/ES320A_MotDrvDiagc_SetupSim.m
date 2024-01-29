%% Simulation Setup Script for ES320A Motor Drive Diagnostic
clear,clc
run ES320A_MotDrvDiagc_DataDict.m
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('ES320A_MotDrvDiagc','NxtrMBDConfig.mat')