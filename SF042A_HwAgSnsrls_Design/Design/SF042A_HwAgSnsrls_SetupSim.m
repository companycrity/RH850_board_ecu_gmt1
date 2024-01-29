
%% Simulation Setup Script for SF042A Handwheel Angle Sensorless
clear,clc
run SF042A_HwAgSnsrls_DataDict.m
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF042A_HwAgSnsrls','NxtrMBDConfig.mat')