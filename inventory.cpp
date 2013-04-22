#include "functions.h"

characterInfo inventory(characterInfo player) {
    
    //
    
    system("cls");
    
    player.playerInv.slot1.id = 1;
    player.playerInv.slot2.id = 2;
    
    player = updateItems(player);
    
    inventoryDisplay(player);
    
    system("pause");
    
    return player;
    
    //
    
}
