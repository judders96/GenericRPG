#include "functions.h"

void battleDisplayUpdate(characterInfo player, enemyInfo enemy) {
    
    //
    
    battleDisplayPlayerHealth(player);
    battleDisplayPlayerMana(player);
    battleDisplayEnemyHealth(enemy);
    battleDisplayEnemyMana(enemy);
    
    cursorPos(1, 10);
    
    //
    
}
