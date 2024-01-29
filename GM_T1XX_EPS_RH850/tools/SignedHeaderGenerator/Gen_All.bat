:: Author: Pradeep Srinivasa
:: Nexteer Automotive
:: Version: 01.00.00

@echo off
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Configuration
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

::Path to HexView tool and external files
set HEXVIEW_EXE="..\..\TL106A_HexView\tools\hexview.exe"
set XML_MOD_DEF=SignedHeaderGenerator\GmHeader.xml
set PRIVATE_KEY_SOURCE=SignedHeaderGenerator\rsakeys_2048.txt

:: file format and file name extensions for generated files (added to module name)
set OUTFORMAT=hex
set PLAIN_FOLDER=..\output\GeneratedAndToBeSignedByGM
set PEXT=_plain
set SIGN_FOLDER=..\output\GeneratedAndSignedByDummyKey
set SEXT=_sign

:: Hexview configuration parameters (check hexview tool documentation):
:: - Fill all ( /FA )
:: - alignment (address /Ad<val> and length /Al)
:: - checksum param ("Cs5" for B. endian / "Cs6" for l. endian ECU)
:: - Call Hexview silently ("-s") or not (leave empty)
set ALIGN=/Ad:0x100 /Al /Af:0xFF
set ALIGN_CAL_PLAIN=/Ad:0x20 /Al /Af:0xFF
set CS=/Cs6
set FILL=/FA
set SILENT=-s

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Check input file existence
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
IF NOT EXIST %PRIVATE_KEY_SOURCE% call :Error %PRIVATE_KEY_SOURCE%
IF NOT EXIST %HEXVIEW_EXE% call :Error %HEXVIEW_EXE%
IF NOT EXIST %XML_MOD_DEF% call :Error %XML_MOD_DEF%

IF EXIST %PLAIN_FOLDER% RMDIR /S /Q %PLAIN_FOLDER%
MKDIR %PLAIN_FOLDER%

IF EXIST %SIGN_FOLDER% RMDIR /S /Q %SIGN_FOLDER%
MKDIR %SIGN_FOLDER%

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Generation calls for different Standard download modules.
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Required Function Parameters for GenAppHeaders (Application files), GenCalHeaders (calibration files):
:: - <module name> : "Module Name" - Needs to match configured module name (XML_MOD_DEF file)
:: - <file name>   : "File name" - File name of raw input file
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: call :<func name>   "<module name>" "<file name>"
%HEXVIEW_EXE% ../output/T1xx.hex %SILENT%  /AR:0x18000-0xB7DFF /XI:16 -o T1xx_Appl%PEXT%.hex
%HEXVIEW_EXE% ../output/T1xx.hex %SILENT%  /AR:0xC0000-0xDFDFF /XI:16 -o T1xx_Cal1%PEXT%.hex
%HEXVIEW_EXE% ../output/T1xx.hex %SILENT%  /AR:0xB8000-0xBFDFF /XI:16 -o T1xx_Cal2%PEXT%.hex
%HEXVIEW_EXE% ../output/T1xx.hex %SILENT%  /AR:0xE0000-0xFFDFF /XI:16 -o T1xx_Cal3%PEXT%.hex

call :GenCalHeaders "T1xx_Cal1"
call :GenCalHeaders "T1xx_Cal2"
call :GenCalHeaders "T1xx_Cal3"

call :GenAppHeaders "T1xx_Appl"

:: Move formats not required for test download, but only for later signing by GM to defined folder
@echo on
:: convert output to Intel hex format
%HEXVIEW_EXE% %SILENT% T1xx_Appl%SEXT%.hex /XI:16 –o T1xx_Appl%SEXT%.hex
%HEXVIEW_EXE% %SILENT% T1xx_Cal1%SEXT%.hex /XI:16 –o T1xx_Cal1%SEXT%.hex
%HEXVIEW_EXE% %SILENT% T1xx_Cal2%SEXT%.hex /XI:16 –o T1xx_Cal2%SEXT%.hex
%HEXVIEW_EXE% %SILENT% T1xx_Cal3%SEXT%.hex /XI:16 –o T1xx_Cal3%SEXT%.hex

move *%SEXT%.%OUTFORMAT% %SIGN_FOLDER%
IF EXIST *%SEXT%.err move *%SEXT%.err %SIGN_FOLDER%
IF EXIST *.RSA move *.RSA %SIGN_FOLDER%

move *%PEXT%.hex %PLAIN_FOLDER%
IF EXIST *%PEXT%.err move *.err %PLAIN_FOLDER%
@echo off

goto :EOF

:Error
echo "Input file %~1 not found."
goto :end
goto :EOF

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Functions to be used to generate files - !! Usually not required to be edited !!
::
:: In case of problems:
:: - check generated error files
:: - check hexview.exe parameters used when calling the below functions in batch and compare to Hexview manual for plausibility
:: - check GENy file module configuration (configuration base for XML_MOD_DEF) and XML_MOD_DEF output for plausibility
:: - Please contact our support in case of questions
::
:: Required Function Parameters are same as for above described for GenAppHeaders, GenCalHeaders.
:: ( GenSignAppFunc and GenSignCalFunc require only the "Module Name" parameter (%~1) )
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:GenAppHeaders
@echo on
:: Generate Signed Application
%HEXVIEW_EXE% %~1%PEXT%.hex %SILENT% -xgc_app_sign -xml=%XML_MOD_DEF% %ALIGN% /cs20 /dp32:%PRIVATE_KEY_SOURCE% /E:%~1%SEXT%.err -o %~1%SEXT%.%OUTFORMAT%
@echo off
goto :EOF

:GenCalHeaders
@echo on
:: Generate Signed Calibration
%HEXVIEW_EXE% %~1%PEXT%.hex %SILENT% -xgc_cal_sign -xml=%XML_MOD_DEF% %ALIGN% /cs20 /dp32:%PRIVATE_KEY_SOURCE% /E:%~1%SEXT%.err -o %~1%SEXT%.%OUTFORMAT%
@echo off
goto :EOF

goto :EOF

:end
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
