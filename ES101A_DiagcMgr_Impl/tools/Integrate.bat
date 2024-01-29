@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\DiagcMgr /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\DiagcMgr /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\DiagcMgr /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\DiagcMgr
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\DiagcMgr\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\DiagcMgr
xcopy ..\autosar\DiagcMgr_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\DiagcMgr\bswmd /s
xcopy ..\autosar\DiagcMgr_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\DiagcMgr /s
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\DiagcMgr /s /y

pause
:end

endlocal
