@echo off
setlocal enabledelayedexpansion

for /L %%i in (1,10,3000) do (
    echo Frequency: %%i
    beep %%i 200
)

endlocal