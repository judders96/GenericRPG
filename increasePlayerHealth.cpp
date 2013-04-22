#include "functions.h"

int increasePlayerHealth(characterInfo player, int health) {
    
    //
    
    if(player.health + health <= player.totalHealth) {
        
        player.health = player.health + health;
    
    } else {
        
        player.health = player.totalHealth;
        
    }
    
    return player.health;
    
    //
    
}
