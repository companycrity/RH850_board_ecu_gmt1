setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set EXECUTEDDSCRIPTS=%3
set SWCNAME=%4

del %GENDATADIR%\CDD_%SWCNAME%.c
del %GENDATADIR%\CDD_%SWCNAME%_Irq.c
del %GENDATADIR%\CDD_%SWCNAME%_Data.c
del %GENDATADIR%\CDD_%SWCNAME%_Data.h
del %GENDATADIR%\AR300A_%SWCNAME%_DataDict.m
del %GENDATADIR%\%SWCNAME%_GenErrors.log
del %GENDATADIR%\AR300A_%SWCNAME%_DDReport.txt

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%.c.tt			-i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Irq.c.tt			-i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Data.c.tt			-i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Data.h.tt			-i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\AR300A_%SWCNAME%_DataDict.m.tt			-i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

if NOT "%EXECUTEDDSCRIPTS%" == "TRUE" goto end

matlab.exe -r "cd %GENDATADIR%; run ('AR300A_%SWCNAME%_DataDict.m'); CreateDD('EA4'); VerifyDD('EA4', 'AR300A_%SWCNAME%_DataDict'); quit" -nosplash -nojvm

:loop1
tasklist /fi "imagename eq MATLAB.exe" |find ":" > nul
if errorlevel 1 goto loop1

:end
exit %ERRORLEVEL%
endlocal
