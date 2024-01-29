
%% Simulation Setup Script for SF053A_Handwheel Angle Vehicle Centre Trim
clear,clc
run SF053A_HwAgVehCentrTrim_DataDict.m
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF053A_HwAgVehCentrTrim','NxtrMBDConfig.mat')