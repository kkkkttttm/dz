@echo off
chcp 1251 > nul

set MAIN=alg.cpp
set EXE=refactor.exe

if exist %EXE% del %EXE%

g++ -finput-charset=utf-8 -fexec-charset=windows-1251 %MAIN% -o %EXE%

%EXE%