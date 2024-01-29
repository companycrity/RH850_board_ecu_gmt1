@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\FlashBlockCRC /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\FlashBlockCRC /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\FlashBlockCRC /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\FlashBlockCRC
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\FlashBlockCRC\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\FlashBlockCRC
xcopy ..\autosar\FlsMem_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\FlashBlockCRC\bswmd /s
xcopy ..\autosar\FlsMem_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\FlashBlockCRC /s
rem xcopy ..\tools\IntegrationCopy\InternalBehavior     %INTPJTDIR%\autosar\Config\InternalBehavior /s /y
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\FlashBlockCRC /s /y

pause
:end

endlocal
