%% Simulation Setup Script
%   SF101A - Motor Quadrant Detection
clear,clc

run SF101A_MotQuadDetn_DataDict

Ts = 0.002;
%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF101A_MotQuadDetn','NxtrMBDConfig')