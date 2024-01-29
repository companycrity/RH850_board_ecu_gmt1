setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set APPSWCDIR=%3
set SWCNAME=%4

del %GENDATADIR%\%SWCNAME%_Cfg.h
del %GENDATADIR%\%SWCNAME%_GenErrors.log

..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg.h.tt -i=..\..\TL105A_Artt\tools\include -u="http://autosar.org/schema/r4.0" -o=%GENDATADIR% >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1

:end
exit %ERRORLEVEL%
endlocal
