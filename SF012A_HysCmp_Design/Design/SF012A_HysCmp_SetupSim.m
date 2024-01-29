%% Simulation Setup Script for SF012A Hysteresis Compensation
clear,clc
run SF012A_HysCmp_DataDict.m
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF012A_Hys_Cmp','NxtrMBDConfig.mat')