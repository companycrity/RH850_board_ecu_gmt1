%% Simulation Setup Script for ES241A sensor interface of the Analog Motor Position
clear,clc
open_system('ES241A_MotAg2Meas.slx')
run ES241A_MotAg2Meas_DataDict.m
set_param('ES241A_MotAg2Meas', 'SimGenImportedTypeDefs', 'On')
Ts =0.002;
clear ans;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('ES241A_MotAg2Meas','NxtrMBDConfig.mat')