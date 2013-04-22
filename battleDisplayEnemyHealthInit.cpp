#include "functions.h"

void battleDisplayEnemyHealthInit(enemyInfo enemy) {
    
    //
    
    cursorPos(17, 7);
    
    setColour(1, 16);
    
    if(enemy.health >= 100) {
        
        cout<<enemy.health << "/" <<enemy.totalHealth;
        
    } else if(enemy.health > 0) {
        
        cout<<enemy.health << "/" <<enemy.totalHealth<< " ";
        
    } else {
        
        cout<<enemy.health << "/" <<enemy.totalHealth<< "  ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    setColour(5, 16);
    int healthBar1 = enemy.totalHealth / 10;
    
    for(int i = 0; i < healthBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    cursorPos(25, 7);
    
    setColour(13, 16);
    int healthBar2 = enemy.health / 10;
    
    for(int i = 0; i < healthBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}
