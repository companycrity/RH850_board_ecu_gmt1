@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\SyncCrc /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\SyncCrc /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\SyncCrc /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\SyncCrc
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\SyncCrc\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\SyncCrc
xcopy ..\autosar\SyncCrc_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\SyncCrc\bswmd /s
xcopy ..\autosar\SyncCrc_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\SyncCrc /s
rem xcopy ..\tools\IntegrationCopy\InternalBehavior     %INTPJTDIR%\autosar\Config\InternalBehavior /s /y
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\SyncCrc /s /y

pause
:end

endlocal
