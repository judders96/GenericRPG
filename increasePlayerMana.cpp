#include "functions.h"

int increasePlayerMana(characterInfo player, int mana) {
    
    //
    
    if(player.mana + mana <= player.totalMana) {
        
        player.mana = player.mana + mana;
    
    } else {
        
        player.mana = player.totalMana;
        
    }
    
    return player.mana;
    
    //
    
}
