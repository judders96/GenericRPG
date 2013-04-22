#include "functions.h"

void battleDisplay(characterInfo player, enemyInfo enemy) {
    
    //
    
    cursorPos(17, 2);
    cout<<player.name;
    cursorPos(17, 6);
    cout<<enemy.name;
    
    battleDisplayPlayerHealth(player);
    battleDisplayPlayerMana(player);
    battleDisplayEnemyHealth(enemy);
    battleDisplayEnemyMana(enemy);
    
    cursorPos(1, 10);
    
    //
    
}
