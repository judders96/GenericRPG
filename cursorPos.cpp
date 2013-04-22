#include <iostream>
#include <windows.h>
#include "functions.h"

using namespace std;

void cursorPos(int x, int y) {
    
    x--;
    y--;
    
    COORD p = {x, y};
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
    
}
