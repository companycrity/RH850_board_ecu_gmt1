%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Nov-2016 10:55:42       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 6 %           %
%                                  Derived by: %derived_by: nz2883 %          %
%%-----------------------------------------------------------------------%

SF053A = DataDict.FDD;
SF053A.Version = '1.5.X';
SF053A.LongName = 'Handwheel Angle Vehicle Center Trim';
SF053A.ShoName  = 'HwAgVehCentrTrim';
SF053A.DesignASIL = 'D';
SF053A.Description = [...
  'This function stores a measured handwheel angle and applies the stored' ...
  ' value as an offset to the inputted handwheel angles.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgVehCentrTrimInit1 = DataDict.Runnable;
HwAgVehCentrTrimInit1.Context = 'Rte';
HwAgVehCentrTrimInit1.TimeStep = 0;
HwAgVehCentrTrimInit1.Description = [...
  'Check whether the data in the NVM is available.'];

HwAgVehCentrTrimPer1 = DataDict.Runnable;
HwAgVehCentrTrimPer1.Context = 'Rte';
HwAgVehCentrTrimPer1.TimeStep = 0.002;
HwAgVehCentrTrimPer1.Description = [...
  'It applies the stored value as an offset to the inputted handwheel ang' ...
  'les.'];

ClrHwAgTrimVal = DataDict.SrvRunnable;
ClrHwAgTrimVal.Context = 'Rte';
ClrHwAgTrimVal.Description = [...
  'It clears the data stored in the NVM and set a NTC to Failed.'];
ClrHwAgTrimVal.Return = DataDict.CSReturn;
ClrHwAgTrimVal.Return.Type = 'None';
ClrHwAgTrimVal.Return.Min = [];
ClrHwAgTrimVal.Return.Max = [];
ClrHwAgTrimVal.Return.TestTolerance = [];

GetHwAgTrimVal = DataDict.SrvRunnable;
GetHwAgTrimVal.Context = 'Rte';
GetHwAgTrimVal.Description = [...
  'It reads the data stored in the NVM.'];
GetHwAgTrimVal.Return = DataDict.CSReturn;
GetHwAgTrimVal.Return.Type = 'None';
GetHwAgTrimVal.Return.Min = [];
GetHwAgTrimVal.Return.Max = [];
GetHwAgTrimVal.Return.TestTolerance = [];
GetHwAgTrimVal.Arguments(1) = DataDict.CSArguments;
GetHwAgTrimVal.Arguments(1).Name = 'HwAgTrimVal';
GetHwAgTrimVal.Arguments(1).EngDT = dt.float32;
GetHwAgTrimVal.Arguments(1).EngMin = -50;
GetHwAgTrimVal.Arguments(1).EngMax = 50;
GetHwAgTrimVal.Arguments(1).TestTolerance = 0.05;
GetHwAgTrimVal.Arguments(1).Units = 'HwDeg';
GetHwAgTrimVal.Arguments(1).Direction = 'Out';
GetHwAgTrimVal.Arguments(1).InitRowCol = [1  1];
GetHwAgTrimVal.Arguments(1).Description = [...
  'It shows the valid value of trimmed handwheel angle stored in the NVM.' ...
  ''];
GetHwAgTrimVal.Arguments(2) = DataDict.CSArguments;
GetHwAgTrimVal.Arguments(2).Name = 'HwAgTrimPrfmd';
GetHwAgTrimVal.Arguments(2).EngDT = dt.lgc;
GetHwAgTrimVal.Arguments(2).EngMin = 0;
GetHwAgTrimVal.Arguments(2).EngMax = 1;
GetHwAgTrimVal.Arguments(2).TestTolerance = 0;
GetHwAgTrimVal.Arguments(2).Units = 'Cnt';
GetHwAgTrimVal.Arguments(2).Direction = 'Out';
GetHwAgTrimVal.Arguments(2).InitRowCol = [1  1];
GetHwAgTrimVal.Arguments(2).Description = [...
  'It shows the status when it is true, the NVM has a valid value of trim' ...
  'med handwheel angle; otherwise, the NVM does not have a valid value.'];

SetHwAgTrimVal = DataDict.SrvRunnable;
SetHwAgTrimVal.Context = 'Rte';
SetHwAgTrimVal.Description = 'It writes the data to the NVM.';
SetHwAgTrimVal.Return = DataDict.CSReturn;
SetHwAgTrimVal.Return.Type = 'None';
SetHwAgTrimVal.Return.Min = [];
SetHwAgTrimVal.Return.Max = [];
SetHwAgTrimVal.Return.TestTolerance = [];
SetHwAgTrimVal.Arguments(1) = DataDict.CSArguments;
SetHwAgTrimVal.Arguments(1).Name = 'HwAgTrimVal';
SetHwAgTrimVal.Arguments(1).EngDT = dt.float32;
SetHwAgTrimVal.Arguments(1).EngMin = -50;
SetHwAgTrimVal.Arguments(1).EngMax = 50;
SetHwAgTrimVal.Arguments(1).Units = 'HwDeg';
SetHwAgTrimVal.Arguments(1).Direction = 'In';
SetHwAgTrimVal.Arguments(1).InitRowCol = [1  1];
SetHwAgTrimVal.Arguments(1).Description = [...
  'It shows the valid value of trimmed handwheel angle stored in the NVM.' ...
  ''];
SetHwAgTrimVal.Arguments(2) = DataDict.CSArguments;
SetHwAgTrimVal.Arguments(2).Name = 'HwAgTrimPrfmd';
SetHwAgTrimVal.Arguments(2).EngDT = dt.lgc;
SetHwAgTrimVal.Arguments(2).EngMin = 0;
SetHwAgTrimVal.Arguments(2).EngMax = 1;
SetHwAgTrimVal.Arguments(2).Units = 'Cnt';
SetHwAgTrimVal.Arguments(2).Direction = 'In';
SetHwAgTrimVal.Arguments(2).InitRowCol = [1  1];
SetHwAgTrimVal.Arguments(2).Description = [...
  'It shows the status when it is true, the NVM has a valid value of trim' ...
  'med handwheel angle; otherwise, the NVM does not have a valid value.'];

UpdHwAgTrimVal = DataDict.SrvRunnable;
UpdHwAgTrimVal.Context = 'Rte';
UpdHwAgTrimVal.Description = [...
  'It updates the value stored in the NVM with handwheel angle when condi' ...
  'tions are met.'];
UpdHwAgTrimVal.Return = DataDict.CSReturn;
UpdHwAgTrimVal.Return.Type = 'None';
UpdHwAgTrimVal.Return.Min = [];
UpdHwAgTrimVal.Return.Max = [];
UpdHwAgTrimVal.Return.TestTolerance = [];
UpdHwAgTrimVal.Arguments(1) = DataDict.CSArguments;
UpdHwAgTrimVal.Arguments(1).Name = 'UpdHwAgTrimValSrvResp';
UpdHwAgTrimVal.Arguments(1).EngDT = dt.u08;
UpdHwAgTrimVal.Arguments(1).EngMin = 0;
UpdHwAgTrimVal.Arguments(1).EngMax = 5;
UpdHwAgTrimVal.Arguments(1).TestTolerance = 1;
UpdHwAgTrimVal.Arguments(1).Units = 'Cnt';
UpdHwAgTrimVal.Arguments(1).Direction = 'Out';
UpdHwAgTrimVal.Arguments(1).InitRowCol = [1  1];
UpdHwAgTrimVal.Arguments(1).Description = [...
  'If it is 0, the update service has been performed; If it is not 0, the' ...
  ' update service has not been performed and its value indicates the rea' ...
  'sons of the failure.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
HwAgTrimData_SetRamBlockStatus = DataDict.Client;
HwAgTrimData_SetRamBlockStatus.CallLocation = {'HwAgVehCentrTrimInit1','UpdHwAgTrimVal','ClrHwAgTrimVal','SetHwAgTrimVal'};
HwAgTrimData_SetRamBlockStatus.Description = [...
  'It is used to determine if the data in the RAM shadow for a NVM block ' ...
  'is valid.'];
HwAgTrimData_SetRamBlockStatus.Return = DataDict.CSReturn;
HwAgTrimData_SetRamBlockStatus.Return.Type = 'Standard';
HwAgTrimData_SetRamBlockStatus.Return.Min = 0;
HwAgTrimData_SetRamBlockStatus.Return.Max = 1;
HwAgTrimData_SetRamBlockStatus.Return.TestTolerance = 0;
HwAgTrimData_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
HwAgTrimData_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwAgTrimData_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwAgTrimData_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwAgTrimData_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwAgTrimData_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwAgTrimData_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwAgTrimData_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwAgTrimData_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwAgTrimData_SetRamBlockStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwAgVehCentrTrimPer1','UpdHwAgTrimVal','ClrHwAgTrimVal'};
SetNtcSts.Description = [...
  'Client definition to set NTC status'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Standard Return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Enum to define NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Info regarding the bits to be set in the NTC'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = [...
  'Enum indicating the status the NTC to be set to'];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Debounce step indicating the delay time before settingNTC to either PA' ...
  'SSED or FAILED'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EngRunActv = DataDict.IpSignal;
EngRunActv.LongName = 'Engine Run Active';
EngRunActv.Description = [...
  'The update service would be failed if it is true.'];
EngRunActv.DocUnits = 'Cnt';
EngRunActv.EngDT = dt.lgc;
EngRunActv.EngInit = 0;
EngRunActv.EngMin = 0;
EngRunActv.EngMax = 1;
EngRunActv.ReadIn = {'UpdHwAgTrimVal'};
EngRunActv.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = [...
  'It calculates the Handwheel Trimmed Value by the stored Trimmed Handwh' ...
  'eel Angle and updates the stored Trimmed Handwheel Angle when conditio' ...
  'ns are met.'];
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'HwAgVehCentrTrimPer1','UpdHwAgTrimVal'};
HwAg.ReadType = 'Rte';


HwAgCcwDetd = DataDict.IpSignal;
HwAgCcwDetd.LongName = 'Handwheel Angle End of Travel Counter Clockwise Detected';
HwAgCcwDetd.Description = [...
  'The update service would be failed if it is true.'];
HwAgCcwDetd.DocUnits = 'Cnt';
HwAgCcwDetd.EngDT = dt.lgc;
HwAgCcwDetd.EngInit = 0;
HwAgCcwDetd.EngMin = 0;
HwAgCcwDetd.EngMax = 1;
HwAgCcwDetd.ReadIn = {'UpdHwAgTrimVal'};
HwAgCcwDetd.ReadType = 'Rte';


HwAgCwDetd = DataDict.IpSignal;
HwAgCwDetd.LongName = 'Handwheel Angle End of Travel ClockWise Detected';
HwAgCwDetd.Description = [...
  'The update service would be failed if it is true.'];
HwAgCwDetd.DocUnits = 'Cnt';
HwAgCwDetd.EngDT = dt.lgc;
HwAgCwDetd.EngInit = 0;
HwAgCwDetd.EngMin = 0;
HwAgCwDetd.EngMax = 1;
HwAgCwDetd.ReadIn = {'UpdHwAgTrimVal'};
HwAgCwDetd.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle End of Travel Counter Clockwise';
HwAgEotCcw.Description = [...
  'It is used to calculate the mechanical rack center.'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'UpdHwAgTrimVal'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Handwheel Angle End of Travel ClockWise';
HwAgEotCw.Description = [...
  'It is used to calculate the mechanical rack center.'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.ReadIn = {'UpdHwAgTrimVal'};
HwAgEotCw.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'The update service would be failed if it is not zero.'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'UpdHwAgTrimVal'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgTrimPrfmd = DataDict.OpSignal;
HwAgTrimPrfmd.LongName = 'Handwheel Angle Trim Performed status';
HwAgTrimPrfmd.Description = [...
  'Handwheel Angle Trim Performed Status'];
HwAgTrimPrfmd.DocUnits = 'Cnt';
HwAgTrimPrfmd.SwcShoName = 'HwAgVehCentrTrim';
HwAgTrimPrfmd.EngDT = dt.lgc;
HwAgTrimPrfmd.EngInit = 0;
HwAgTrimPrfmd.EngMin = 0;
HwAgTrimPrfmd.EngMax = 1;
HwAgTrimPrfmd.TestTolerance = 0;
HwAgTrimPrfmd.WrittenIn = {'HwAgVehCentrTrimPer1','UpdHwAgTrimVal'};
HwAgTrimPrfmd.WriteType = 'Rte';


HwAgVehTrimOffs = DataDict.OpSignal;
HwAgVehTrimOffs.LongName = 'Handwheel Angle Vehicle Trim Offset';
HwAgVehTrimOffs.Description = [...
  'Handwheel Angle offset by the Vehicle Trim Value'];
HwAgVehTrimOffs.DocUnits = 'HwDeg';
HwAgVehTrimOffs.SwcShoName = 'HwAgVehCentrTrim';
HwAgVehTrimOffs.EngDT = dt.float32;
HwAgVehTrimOffs.EngInit = 0;
HwAgVehTrimOffs.EngMin = -1440;
HwAgVehTrimOffs.EngMax = 1440;
HwAgVehTrimOffs.TestTolerance = 0.05;
HwAgVehTrimOffs.WrittenIn = {'HwAgVehCentrTrimPer1'};
HwAgVehTrimOffs.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgVehCentrTrimHwAgLim = DataDict.Calibration;
HwAgVehCentrTrimHwAgLim.LongName = 'Handwheel Angle Vehicle Center Trim Handwheel Angle Limit';
HwAgVehCentrTrimHwAgLim.Description = [...
  'This calibration is the limit that Handwheel Angle must smaller than o' ...
  'r equal to before the HwAgTrimVal will be updated.'];
HwAgVehCentrTrimHwAgLim.DocUnits = 'HwDeg';
HwAgVehCentrTrimHwAgLim.EngDT = dt.float32;
HwAgVehCentrTrimHwAgLim.EngVal = 30;
HwAgVehCentrTrimHwAgLim.EngMin = 0;
HwAgVehCentrTrimHwAgLim.EngMax = 50;
HwAgVehCentrTrimHwAgLim.Cardinality = 'Cmn';
HwAgVehCentrTrimHwAgLim.CustomerVisible = true;
HwAgVehCentrTrimHwAgLim.Online = true;
HwAgVehCentrTrimHwAgLim.Impact = 'H';
HwAgVehCentrTrimHwAgLim.TuningOwner = 'CSE';
HwAgVehCentrTrimHwAgLim.GraphLink = {''};
HwAgVehCentrTrimHwAgLim.Monotony = 'None';
HwAgVehCentrTrimHwAgLim.MaxGrad = 0;
HwAgVehCentrTrimHwAgLim.PortName = 'HwAgVehCentrTrimHwAgLim';


HwAgVehCentrTrimVehSpdMaxThd = DataDict.Calibration;
HwAgVehCentrTrimVehSpdMaxThd.LongName = 'Vehicle Speed Maximum Threshold';
HwAgVehCentrTrimVehSpdMaxThd.Description = [...
  'This calibration is the limit that Vehicle Speed must be  lesser than ' ...
  'or equal to update the Handwheel Angle Trim Value .'];
HwAgVehCentrTrimVehSpdMaxThd.DocUnits = 'Kph';
HwAgVehCentrTrimVehSpdMaxThd.EngDT = dt.float32;
HwAgVehCentrTrimVehSpdMaxThd.EngVal = 0;
HwAgVehCentrTrimVehSpdMaxThd.EngMin = 0;
HwAgVehCentrTrimVehSpdMaxThd.EngMax = 10;
HwAgVehCentrTrimVehSpdMaxThd.Cardinality = 'Cmn';
HwAgVehCentrTrimVehSpdMaxThd.CustomerVisible = true;
HwAgVehCentrTrimVehSpdMaxThd.Online = true;
HwAgVehCentrTrimVehSpdMaxThd.Impact = 'L';
HwAgVehCentrTrimVehSpdMaxThd.TuningOwner = 'CSE';
HwAgVehCentrTrimVehSpdMaxThd.GraphLink = {''};
HwAgVehCentrTrimVehSpdMaxThd.Monotony = 'None';
HwAgVehCentrTrimVehSpdMaxThd.MaxGrad = 0;
HwAgVehCentrTrimVehSpdMaxThd.PortName = 'HwAgVehCentrTrimVehSpdMaxThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwAgTrimData = DataDict.NVM;
HwAgTrimData.LongName = 'Handwheel Angle Trim Data';
HwAgTrimData.Description = [...
  'Handwheel Angle Trim Value and Status is stored.'];
HwAgTrimData.DocUnits = 'Uls';
HwAgTrimData.EngDT = struct.HwAgSnsrTrimRec1;
HwAgTrimData.EngInit = [struct('TrimVal',0,'TrimPrfmd',0)];
HwAgTrimData.EngMin = [struct('TrimVal',-50,'TrimPrfmd',0)];
HwAgTrimData.EngMax = [struct('TrimVal',50,'TrimPrfmd',1)];
HwAgTrimData.CustomerVisible = false;
HwAgTrimData.Impact = 'H';
HwAgTrimData.TuningOwner = 'CSE';
HwAgTrimData.CoderInfo.Alias = '';
HwAgTrimData.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ENGRUNACTVTRUE_CNT_U08 = DataDict.Constant;
ENGRUNACTVTRUE_CNT_U08.LongName = 'Engine Run Active True';
ENGRUNACTVTRUE_CNT_U08.Description = [...
  'Constant number to communicate failure due to the Engine Run Active si' ...
  'gnal being true.'];
ENGRUNACTVTRUE_CNT_U08.DocUnits = 'Cnt';
ENGRUNACTVTRUE_CNT_U08.EngDT = dt.u08;
ENGRUNACTVTRUE_CNT_U08.EngVal = 2;
ENGRUNACTVTRUE_CNT_U08.Define = 'Local';


HWAGCLRTRIMPRFMD_CNT_LGC = DataDict.Constant;
HWAGCLRTRIMPRFMD_CNT_LGC.LongName = 'Handwheel Angle Clear Trim Performed';
HWAGCLRTRIMPRFMD_CNT_LGC.Description = [...
  'Constant number that the Handwheel Angle Trim Performed is cleared whe' ...
  'nthe ClrHwAgTrimVal service is called.'];
HWAGCLRTRIMPRFMD_CNT_LGC.DocUnits = 'Cnt';
HWAGCLRTRIMPRFMD_CNT_LGC.EngDT = dt.lgc;
HWAGCLRTRIMPRFMD_CNT_LGC.EngVal = 0;
HWAGCLRTRIMPRFMD_CNT_LGC.Define = 'Local';


HWAGCLRVAL_HWDEG_F32 = DataDict.Constant;
HWAGCLRVAL_HWDEG_F32.LongName = 'Handwheel Angle Clear Value';
HWAGCLRVAL_HWDEG_F32.Description = [...
  'Constant number that the Handwheel Angle Trim Value is cleared to when' ...
  ' the ClrHwAgTrimVal service is called.'];
HWAGCLRVAL_HWDEG_F32.DocUnits = 'HwDeg';
HWAGCLRVAL_HWDEG_F32.EngDT = dt.float32;
HWAGCLRVAL_HWDEG_F32.EngVal = 0;
HWAGCLRVAL_HWDEG_F32.Define = 'Local';


HWAGEOTCCWNOTDETD_CNT_U08 = DataDict.Constant;
HWAGEOTCCWNOTDETD_CNT_U08.LongName = 'Handwheel Angle Counter Clock Wise Not Detected';
HWAGEOTCCWNOTDETD_CNT_U08.Description = [...
  'Constant number to communicate failure due to the Handwheel Angle Coun' ...
  'ter Clock Wise Detected signal being false.'];
HWAGEOTCCWNOTDETD_CNT_U08.DocUnits = 'Cnt';
HWAGEOTCCWNOTDETD_CNT_U08.EngDT = dt.u08;
HWAGEOTCCWNOTDETD_CNT_U08.EngVal = 4;
HWAGEOTCCWNOTDETD_CNT_U08.Define = 'Local';


HWAGEOTCWNOTDETD_CNT_U08 = DataDict.Constant;
HWAGEOTCWNOTDETD_CNT_U08.LongName = 'Handwheel Angle Clock Wise Not Detected';
HWAGEOTCWNOTDETD_CNT_U08.Description = [...
  'Constant number to communicate failure due to the Handwheel Angle Cloc' ...
  'k Wise Detected signal being false.'];
HWAGEOTCWNOTDETD_CNT_U08.DocUnits = 'Cnt';
HWAGEOTCWNOTDETD_CNT_U08.EngDT = dt.u08;
HWAGEOTCWNOTDETD_CNT_U08.EngVal = 3;
HWAGEOTCWNOTDETD_CNT_U08.Define = 'Local';


HWAGMAGTHDEXCDD_CNT_U08 = DataDict.Constant;
HWAGMAGTHDEXCDD_CNT_U08.LongName = 'Handwheel Angle Threshold Exceeded';
HWAGMAGTHDEXCDD_CNT_U08.Description = [...
  'Constant number to communicate failure due to the Handwheel Angle sign' ...
  'al being greater than the allowed limit.'];
HWAGMAGTHDEXCDD_CNT_U08.DocUnits = 'Cnt';
HWAGMAGTHDEXCDD_CNT_U08.EngDT = dt.u08;
HWAGMAGTHDEXCDD_CNT_U08.EngVal = 5;
HWAGMAGTHDEXCDD_CNT_U08.Define = 'Local';


HWAGTRIMPRFMD_CNT_LGC = DataDict.Constant;
HWAGTRIMPRFMD_CNT_LGC.LongName = 'Handwheel Angle Trim Performed';
HWAGTRIMPRFMD_CNT_LGC.Description = [...
  'Constant number that the Handwheel Angle Trim Performed is SET when th' ...
  'eUpdHwAgTrimPrfmd service is called.'];
HWAGTRIMPRFMD_CNT_LGC.DocUnits = 'Cnt';
HWAGTRIMPRFMD_CNT_LGC.EngDT = dt.lgc;
HWAGTRIMPRFMD_CNT_LGC.EngVal = 1;
HWAGTRIMPRFMD_CNT_LGC.Define = 'Local';


HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.LongName = 'Handwheel Angle Vehicle Center Trim Valid NTC Number';
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.Description = [...
  'Constant for NTC number configurable in a range.'];
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.IsBuildPrm = false;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E0;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X1E0;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X1FF;
HWAGVEHCENTRTRIM_HWAGVEHCENTRTRIMVLDNTCNR_CNT_ENUM.Define = 'Global';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


SYSGLBPRM_HWAGHILIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Description = [...
  'Limit on the maximum value allowed for Handwheel Angle.'];
SYSGLBPRM_HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngVal = 1440;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Define = 'Global';


SYSGLBPRM_HWAGLOLIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.LongName = 'Handwheel Angle Low Limit';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Description = [...
  'Limit on the minimum value allowed for Handwheel Angle'];
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngVal = -1440;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Define = 'Global';


UPDHWAGTRIMPRFMD_CNT_U08 = DataDict.Constant;
UPDHWAGTRIMPRFMD_CNT_U08.LongName = 'Updated Handwheel Angle Trim Performed';
UPDHWAGTRIMPRFMD_CNT_U08.Description = [...
  'Constant number to communicate that the service was performed.'];
UPDHWAGTRIMPRFMD_CNT_U08.DocUnits = 'Cnt';
UPDHWAGTRIMPRFMD_CNT_U08.EngDT = dt.u08;
UPDHWAGTRIMPRFMD_CNT_U08.EngVal = 0;
UPDHWAGTRIMPRFMD_CNT_U08.Define = 'Local';


VEHSPDTHDEXCDD_CNT_U08 = DataDict.Constant;
VEHSPDTHDEXCDD_CNT_U08.LongName = 'Vehicle Speed Threshold Exceeded';
VEHSPDTHDEXCDD_CNT_U08.Description = [...
  'Constant number to communicate failure due to the Vehicle Speed signal' ...
  ' being greater than the allowed limit.'];
VEHSPDTHDEXCDD_CNT_U08.DocUnits = 'Cnt';
VEHSPDTHDEXCDD_CNT_U08.EngDT = dt.u08;
VEHSPDTHDEXCDD_CNT_U08.EngVal = 1;
VEHSPDTHDEXCDD_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwAgVehCentrTrimVld = DataDict.NTC;
HwAgVehCentrTrimVld.NtcNr = NtcNr1.NTCNR_0X1E4;
HwAgVehCentrTrimVld.NtcTyp = 'None';
HwAgVehCentrTrimVld.LongName = 'Handwheel Angle Vehicle Center Trim Valid';
HwAgVehCentrTrimVld.Description = 'When there is not a valid value for Vehicle Center Trim, a non-debounced diagnostic is set.';
HwAgVehCentrTrimVld.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAgVehCentrTrimVld.NtcStInfo.Bit0Descr = 'No valid Handwheel Angle Vehicle Center Trim value fault.';
HwAgVehCentrTrimVld.NtcStInfo.Bit1Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit2Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit3Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit4Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit5Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit6Descr = 'Unused';
HwAgVehCentrTrimVld.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
