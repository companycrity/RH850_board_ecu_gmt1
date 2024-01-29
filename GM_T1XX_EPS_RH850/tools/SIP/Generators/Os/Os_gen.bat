@echo off
rem *******************************************************************************************************************
rem *  COPYRIGHT
rem *  --------------------------------------------------------------------------------------------------------------
rem *  Copyright (c) 2016 by Vector Informatik GmbH. All rights reserved.
rem *
rem *                This software is copyright protected and proprietary to Vector Informatik GmbH.
rem *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
rem *                All other rights remain with Vector Informatik GmbH.
rem *  --------------------------------------------------------------------------------------------------------------
rem *  DESCRIPTION
rem *  --------------------------------------------------------------------------------------------------------------
rem *  Version:   OS_NEXT_GENERATION_GENERATOR
rem *    Input:   Param    |  %1  |       %2      |  %3  |  %4  |   %5   |   %6
rem *             Validate |  -d  |  OUTPUT_PATH  |  -x  |  -e  |  ECUC  |
rem *             Generate |  -d  |  OUTPUT_PATH  |  -g  |  -x  |   -e   |  ECUC
rem *******************************************************************************************************************

set OS_VALIDATION=true

rem #######################################################################
rem Parameter %3 is -g if an output shall be generated
rem #######################################################################
if "%3"=="-g" set OS_VALIDATION=false

rem #######################################################################
rem parameters
rem %5 XML file to be converted
rem %2 output path
rem #######################################################################
rem Which parameter is the input configuration depends on phase the generator is started
if %OS_VALIDATION%== true set XML_FILE=%5
if %OS_VALIDATION%== false set XML_FILE=%6
rem delete all "
set XML_FILE=%XML_FILE:"=%
echo [Info] Os - ECUC file = %XML_FILE%.

set OUTPUT_PATH=%2
rem delete all "
set OUTPUT_PATH=%OUTPUT_PATH:"=%
rem if last character is a \ remove last character
if "%OUTPUT_PATH:~-1,1%" == "\" set OUTPUT_PATH=%OUTPUT_PATH:~0,-1%
rem add current working dir as base if output path only contains relative path
if not "%OUTPUT_PATH:~1,2%" == ":\" set OUTPUT_PATH=%CD%\%OUTPUT_PATH%
echo [Info] Os - Target path = %OUTPUT_PATH%.

rem #######################################################################
rem generator and converter path are local to this batch file
rem change to directory this batch file is contained in
rem #######################################################################
cd /d %0\..
set GEN_PATH=.
set CONV_PATH=.
rem generator and converter name
set GEN_NAME=genRH850.exe

rem #######################################################################
rem       Actions to do in validation phase
rem #######################################################################
if %OS_VALIDATION% == true (
   echo "%GEN_PATH%\%GEN_NAME%" %1 %2 %3 %4 %5
   "%GEN_PATH%\%GEN_NAME%" %1 %2 %3 %4 %5

   if errorlevel 1 (
      echo [Warning] Os - Finished validation with warnings.
      goto end
   )
   if errorlevel 0 (
      echo [Info] Os - Finished validation successfully.
      goto end
   )
   if errorlevel -1 (
      echo [Error] Os - Finished validation with errors.
      goto end
   )
   echo [Error] Os - Finished validation with unknown return value.
   goto end
)

rem #######################################################################
rem       Actions to do in generation phase
rem #######################################################################
if %OS_VALIDATION% == false (
   echo "%GEN_PATH%\%GEN_NAME%" %1 %2 %3 %4 %5 %6
   "%GEN_PATH%\%GEN_NAME%" %1 %2 %3 %4 %5 %6

   if not exist "%OUTPUT_PATH%\tcb.c" goto generationerror

   if errorlevel 1 (
      echo [Warning] Os - Finished generation with warnings.
      goto end
   )
   if errorlevel 0 (
      echo [Info] Os - Finished generation successfully.
      goto end
   )
   if errorlevel -1 (
      echo [Error] Os - Finished generation with errors.
      goto generationerror
   )
   echo [Error] Os - Finished generation with unknown return value.
   goto generationerror
)

:generationerror
  echo [Error] Os - generation failed.
  exit 2

:end

