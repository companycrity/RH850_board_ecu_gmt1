ECHO #!gbuild > generate.gpj
ECHO [Subproject] >> generate.gpj
for %%F in (../generate/*.c) do ECHO ..\generate\%%F >> generate.gpj
for %%F in (../generate/GENy/*.c) do ECHO ..\generate\GENy\%%F >> generate.gpj
for %%F in (../generate/Dio/src/*.c) do ECHO ..\generate\Dio\src\%%F >> generate.gpj
for %%F in (../generate/Fls/src/*.c) do ECHO ..\generate\Fls\src\%%F >> generate.gpj
for %%F in (../generate/Mcu/src/*.c) do ECHO ..\generate\Mcu\src\%%F >> generate.gpj
for %%F in (../generate/Port/src/*.c) do ECHO ..\generate\Port\src\%%F >> generate.gpj
for %%F in (../generate/Spi/src/*.c) do ECHO ..\generate\Spi\src\%%F >> generate.gpj
for %%F in (../generate/Wdg/src/*.c) do ECHO ..\generate\Wdg\src\%%F >> generate.gpj
for %%F in (../generate/*.h) do ECHO ..\generate\%%F >> generate.gpj
for %%F in (../generate/GENy/*.h) do ECHO ..\generate\GENy\%%F >> generate.gpj
for %%F in (../generate/Components/*.h) do ECHO ..\generate\Components\%%F >> generate.gpj
for %%F in (../generate/Dio/include/*.h) do ECHO ..\generate\Dio\include\%%F >> generate.gpj
for %%F in (../generate/Fls/include/*.h) do ECHO ..\generate\Fls\include\%%F >> generate.gpj
for %%F in (../generate/Mcu/include/*.h) do ECHO ..\generate\Mcu\include\%%F >> generate.gpj
for %%F in (../generate/Port/include/*.h) do ECHO ..\generate\Port\include\%%F >> generate.gpj
for %%F in (../generate/Spi/include/*.h) do ECHO ..\generate\Spi\include\%%F >> generate.gpj
for %%F in (../generate/Wdg/include/*.h) do ECHO ..\generate\Wdg\include\%%F >> generate.gpj
for %%F in (../generate/*.dld) do ECHO ..\generate\%%F >> generate.gpj