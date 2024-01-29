
%% Simulation Setup Script for SF020A Handwheel Angle Tracking Servo
clear,clc
run SF020A_HwAgTrakgServo_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF020A_HwAgTrakgServo','NxtrMBDConfig.mat')