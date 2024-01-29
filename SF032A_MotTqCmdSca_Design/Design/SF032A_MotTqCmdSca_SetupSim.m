%% Simulation Setup Script for SF032A  Motor Torque Command Scale
clear,clc
 
run SF032A_MotTqCmdSca_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF032A_MotTqCmdSca','NxtrMBDConfig.mat')