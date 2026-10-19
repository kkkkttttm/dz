@echo off
chcp 1251 > nul

set EXE=obuchayka.exe

if exist %EXE% del %EXE%

g++ -std=c++17 -Wall -finput-charset=utf-8 -fexec-charset=windows-1251 main.cpp functions.cpp menu_items.cpp -o %EXE%
if errorlevel 1 exit /b 1

%EXE%
