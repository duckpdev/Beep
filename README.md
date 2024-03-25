# Beep
Simple beep wrapper for windows, language is C++

## Syntax example
#### Beep [Frequency] 
### or
#### beep [Frequency] [Time]

## Examples
### Simple example
```bat
echo beep
beep 450
```

### Example with cycle
```bat
@echo off
setlocal enabledelayedexpansion

for /L %%i in (0,10,3000) do (
    echo Frequency: %%i
    beep %%i 200
)

endlocal
```

## Setup to ur Windows
```bat
copy "beep.exe" "C:\Windows\System32\"
```

## Then you can use beep command in cmd


