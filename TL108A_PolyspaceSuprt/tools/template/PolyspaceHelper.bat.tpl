## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   UpdatePolyspace.bat.tpl
## * Module Description: Template for launching the update script.  To be processed by the mako template engine.
## * Project:            CBD
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *-----------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                       SCR #
## * --------  -------  --------  -----------------------------------------------------------------------  ---------
## * 10/04/16   1       OT        Initial version                                                          EA4#632
## ********************************************************************************************************************
##
##  Expected template variables:
##      year - number
##      gpj_file_name - string
##
@ECHO off

REM *******************************************************************************************************************
REM * Copyright ${year} Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   PolyspaceHelper.bat
REM * Module Description: Launches the Polyspace Support tool to update Polyspace files
REM * Project:            Generated from TL108A_PolyspaceSuprt
REM * Author:             Owen Tosh
REM *******************************************************************************************************************


SETLOCAL

REM set paths
SET PYTHON_EXE=TL112A_Python\tools\pythonw.exe
SET SCRIPT_FILE=TL108A_PolyspaceSuprt\tools\polyspacesuprt.py

REM get parent of current project folder
FOR /D %%G in ("%CD%\..\..\..\.") DO SET PARENT_PATH=%%~fG

REM get current project folder
FOR /D %%G in ("%CD%\..\${gpj_file_name}") DO SET PROJECT_PATH=%%~fG

REM set path to python binary
SET PYTHON_FULL_PATH=%PARENT_PATH%\%PYTHON_EXE%
IF NOT EXIST "%PYTHON_FULL_PATH%" GOTO python_error

REM set path to swcsupport script
SET SCRIPT_FULL_PATH=%PARENT_PATH%\%SCRIPT_FILE%
IF NOT EXIST "%SCRIPT_FULL_PATH%" GOTO script_error

REM execute command
START "Polyspace Support" "%PYTHON_FULL_PATH%" "%SCRIPT_FULL_PATH%" "%PROJECT_PATH%"

REM end script
GOTO :end


:python_error
ECHO.
ECHO The Python binary was not found at the expected location:
ECHO %PYTHON_FULL_PATH%
ECHO.
ECHO Download the python component, or run the Polyspace Helper script manually.
ECHO.

IF [%1]==[] PAUSE
GOTO :end


:script_error
ECHO.
ECHO The Polyspace Support script was not found at the expected location:
ECHO %SCRIPT_FULL_PATH%
ECHO.
ECHO Download the Polyspace Support component, or run the script manually.
ECHO.

IF [%1]==[] PAUSE
GOTO :end


:end
ENDLOCAL