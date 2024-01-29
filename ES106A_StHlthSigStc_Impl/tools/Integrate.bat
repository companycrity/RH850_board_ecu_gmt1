@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\StHlthSigStc /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\StHlthSigStc /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\StHlthSigStc /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\StHlthSigStc
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\StHlthSigStc\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\StHlthSigStc
xcopy ..\autosar\StHlthSigStc_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\StHlthSigStc\bswmd /s
xcopy ..\autosar\StHlthSigStc_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\StHlthSigStc /s
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\StHlthSigStc /s /y

pause
:end

endlocal
