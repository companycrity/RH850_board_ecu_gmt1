setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set SWCNAME=%3

del %GENDATADIR%\%SWCNAME%_Cfg.c
del %GENDATADIR%\%SWCNAME%_Cfg.h
del %GENDATADIR%\%SWCNAME%_GenErrors.log

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg.c.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg.h.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end



:end
exit %ERRORLEVEL%
endlocal
