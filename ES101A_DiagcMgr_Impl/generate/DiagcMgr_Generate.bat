setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set SWCNAME=%3

del %GENDATADIR%\%SWCNAME%_Cfg.c
del %GENDATADIR%\%SWCNAME%_Cfg.h
del %GENDATADIR%\%SWCNAME%_GenErrors.log

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg.h.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg.c.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% EQU 10 goto error1
if %ERRORLEVEL% EQU 11 goto error2
if %ERRORLEVEL% EQU 12 goto error3
goto end

:error1
ECHO.>>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
ECHO CONFIGURATION ERROR: More than one Dem DTC is configured under same enable conditions >>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
goto end

:error2
ECHO.>>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
ECHO CONFIGURATION ERROR: Number of Dem DTCs and DiagcMgr Enable conditions don't match >>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
goto end

:error3
ECHO.>>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
ECHO CONFIGURATION ERROR: DTC Idx configured is non sequential >>"%GENDATADIR%\%SWCNAME%_GenErrors.log"
goto end

:end
exit %ERRORLEVEL%
endlocal
