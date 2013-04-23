#include "functions.h"

void slowPrint(string text) {
    
    //
    
    int arrSize = text.length();
    
    for(int i = 0; i < arrSize; i++) {
        
        cout<<text[i];
        Sleep(50);
        
    }
    
    //
}
