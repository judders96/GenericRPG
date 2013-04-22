#include "functions.h"

void battleDisplayPlayerHealthUpdate(characterInfo player) {
    
    //
    
    cursorPos(17, 3);
    
    setColour(1, 16);
    
    if(player.health >= 100) {
        
        cout<<player.health << "/" <<player.totalHealth;
        
    } else if(player.health > 0) {
        
        cout<<player.health << "/" <<player.totalHealth<< " ";
        
    } else {
        
        cout<<player.health << "/" <<player.totalHealth<< "  ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    setColour(5, 16);
    int healthBar1 = player.totalHealth / 10;
    
    for(int i = 0; i < healthBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    cursorPos(25, 3);
    
    setColour(13, 16);
    int healthBar2 = player.health / 10;
    
    for(int i = 0; i < healthBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}
