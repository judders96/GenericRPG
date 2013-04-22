#include "functions.h"

int deductPlayerMana(characterInfo player, int mana) {
    
    //
    
    if(player.mana - mana >= 0) {
        
        player.mana = player.mana - mana;
    
    } else {
        
        player.mana = 0;
        
    }
    
    return player.mana;
    
    //
    
}
