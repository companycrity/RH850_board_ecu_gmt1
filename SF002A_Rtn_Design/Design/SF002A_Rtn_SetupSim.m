%% Simulation Setup Script for SF002A Return
clear,clc
run SF002A_Rtn_DataDict 
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF002A_Rtn','NxtrMBDConfig.mat')