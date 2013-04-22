#include "functions.h"

int deductEnemyMana(enemyInfo enemy, int mana) {
    
    //
    
    if(enemy.mana - mana >= 0) {
        
        enemy.mana = enemy.mana - mana;
    
    } else {
        
        enemy.mana = 0;
        
    }
    
    return enemy.mana;
    
    //
    
}
