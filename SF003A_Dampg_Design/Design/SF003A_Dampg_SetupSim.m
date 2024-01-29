%% Simulation Setup Script for SF003A Damping
clear,clc

run SF003A_Dampg_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF003A_Dampg','NxtrMBDConfig.mat')