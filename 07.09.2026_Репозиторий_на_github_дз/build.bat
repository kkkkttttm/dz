@echo off
chcp 1251 > nul

set MAIN=main.cpp
set EXE=1.exe

if exist %EXE% del %EXE%

g++ -finput-charset=utf-8 -fexec-charset=windows-1251 %MAIN% -o %EXE%

%EXE%
