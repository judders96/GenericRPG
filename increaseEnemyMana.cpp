#include "functions.h"

int increaseEnemyMana(enemyInfo enemy, int mana) {
    
    //
    
    if(enemy.mana + mana <= enemy.totalMana) {
        
        enemy.mana = enemy.mana + mana;
    
    } else {
        
        enemy.mana = enemy.totalMana;
        
    }
    
    return enemy.mana;
    
    //
    
}
