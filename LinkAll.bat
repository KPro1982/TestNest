echo linking P:\scripts to dayz
mklink /J  "S:\Steam\steamapps\common\DayZ\scripts\" "P:\scripts\"

echo linking dayz\addons to workbench -- this link is needed if you use CF
mklink /J "S:\Steam\steamapps\common\DayZ Tools\Bin\Workbench\addons" "S:\Steam\steamapps\common\DayZ\addons"

echo linking source code
mklink /J "P:\TestNest\" "S:\Mod-Source\TestNest\" 
mklink /J "S:\Steam\steamapps\common\DayZ\TestNest\" "S:\Mod-Source\TestNest\" 

echo linking packed pbos
mklink /J "P:\@TestNest" "S:\Mod-Packed\@TestNest" 


