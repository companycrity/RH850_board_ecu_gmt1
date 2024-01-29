%% Simulation Setup Script for SF045A Handwheel Angle System Arbitration
%clear,clc
 
run SF045A_HwAgSysArbn_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF045A_HwAgSysArbn','NxtrMBDConfig.mat')