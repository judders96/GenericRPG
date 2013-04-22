#include "functions.h"

void battleDisplayEnemyManaInit(enemyInfo enemy) {
    
    //
    
    cursorPos(17, 8);
    
    setColour(10, 16);
    
    if(enemy.mana >= 100) {
        
        cout<< enemy.mana << "/" << enemy.totalMana;
        
    } else if(enemy.mana > 0) {
        
        cout<< " " << enemy.mana << "/" << enemy.totalMana;
        
    } else {
        
        cout<< "  " << enemy.mana << "/" << enemy.totalMana;
        
    }
    
    setColour(15, 16);
    cout<< ":";
        
    setColour(2, 16);
    int manaBar1 = enemy.totalMana / 10;
    
    for(int i = 0; i < manaBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 16);
    cout<< ":";
    
    cursorPos(25, 8);
    
    setColour(10, 16);
    int manaBar2 = enemy.mana / 10;
    
    for(int i = 0; i < manaBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}
