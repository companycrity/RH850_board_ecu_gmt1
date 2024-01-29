@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer 
REM * Nexteer Confidential
REM *
REM * Module File Name:   Launch.bat
REM * Module Description: Launcher for the Polyspace Support script
REM * Project:            CBD
REM * Author:             Owen Tosh
REM *******************************************************************************************************************
REM * Version Control:
REM *-----------------------------------------------------------------------------------------------------------------
REM * Date      Rev      Author    Change Description                                                       SCR #
REM * --------  -------  --------  -----------------------------------------------------------------------  ---------
REM * 10/04/16   1       OT        Initial version                                                          EA4#632
REM *******************************************************************************************************************


REM configuration
SET PYTHON_EXE=TL112A_Python\tools\pythonw.exe
SET SCRIPT_FILE=polyspacesuprt.py

REM get parent of current component folder
FOR /D %%G in ("%CD%\..\..\.") DO SET PARENT_PATH=%%~fG

REM set path to python binary
SET PYTHON_FULL_PATH=%PARENT_PATH%\%PYTHON_EXE%
IF NOT EXIST "%PYTHON_FULL_PATH%" GOTO python_error

REM execute command
START "Polyspace Support" "%PYTHON_FULL_PATH%" "%SCRIPT_FILE%"

REM end script
GOTO :eof


:python_error
ECHO.
ECHO The Python binary was not found at the expected location:
ECHO %PYTHON_FULL_PATH%
ECHO.
ECHO Download the python component, or run the Polyspace Support script manually.
ECHO.

PAUSE
GOTO :eof
