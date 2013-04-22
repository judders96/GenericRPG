#include "functions.h"

int deductPlayerHealth(characterInfo player, int damage) {
    
    //
    
    if(player.health - damage >= 0) {
        
        player.health = player.health - damage;
    
    } else {
        
        player.health = 0;
        
    }
    
    return player.health;
    
    //
    
}
