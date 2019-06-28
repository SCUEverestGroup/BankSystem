#include<bits/stdc++.h>
#include <windows.h>
#include "uitool.h"
using namespace std;

void setBackgroundColor(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                            FOREGROUND_BLUE |
                            BACKGROUND_BLUE |
                            BACKGROUND_GREEN |
                            BACKGROUND_RED );
}

void setTextColor(int colorid){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
                            colorid);
}

void setwindowsize(int cols,int lines){
    system("title BankManager");
    char cmd[30];
    sprintf(cmd,"mode con cols=%d lines=%d", cols * 2, lines);
    system(cmd);
}

void setCursorLocation(int x,int y){
    COORD loc;
	loc.X = x; loc.Y = y;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, loc);
}