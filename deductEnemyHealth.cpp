#include "functions.h"

int deductEnemyHealth(enemyInfo enemy, int damage) {
    
    //
    
    if(enemy.health - damage >= 0) {
        
        enemy.health = enemy.health - damage;
    
    } else {
        
        enemy.health = 0;
        
    }
    
    return enemy.health;
    
    //
    
}
