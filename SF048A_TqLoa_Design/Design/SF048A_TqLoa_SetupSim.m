%% Simulation Setup Script for SF048A Torque LOA
clear,clc


run SF048A_TqLoa_DataDict
Ts = 0.002; 

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF048A_TqLoa','NxtrMBDConfig.mat')