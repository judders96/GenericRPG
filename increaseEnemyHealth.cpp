#include "functions.h"

int increaseEnemyHealth(enemyInfo enemy, int health) {
    
    //
    
    if(enemy.health + health <= enemy.totalHealth) {
        
        enemy.health = enemy.health + health;
    
    } else {
        
        enemy.health = enemy.totalHealth;
        
    }
    
    return enemy.health;
    
    //
    
}
