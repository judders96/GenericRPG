#include "functions.h"

void battleDisplayPlayerManaInit(characterInfo player) {
    
    //
    
    cursorPos(17, 4);
    
    setColour(1, 16);
    
    if(player.mana >= 100) {
        
        cout<<player.mana << "/" <<player.totalMana;
        
    } else if(player.mana > 0) {
        
        cout<<player.mana << "/" <<player.totalMana<< " ";
        
    } else {
        
        cout<<player.mana << "/" <<player.totalMana<< "  ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
        
    setColour(2, 16);
    int manaBar1 = player.totalMana / 10;
    
    for(int i = 0; i < manaBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    cursorPos(25, 4);
    
    setColour(10, 16);
    int manaBar2 = player.mana / 10;
    
    for(int i = 0; i < manaBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}
