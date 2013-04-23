#include "functions.h"

characterInfo updateItems(characterInfo player) {
    
    player.playerInv.slot1 = itemList(player.playerInv.slot1.id);
    player.playerInv.slot2 = itemList(player.playerInv.slot2.id);
    player.playerInv.slot3 = itemList(player.playerInv.slot3.id);
    player.playerInv.slot4 = itemList(player.playerInv.slot4.id);
    player.playerInv.slot5 = itemList(player.playerInv.slot5.id);
    
    return player;
    
}
