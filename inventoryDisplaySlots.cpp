#include "functions.h"

void inventoryDisplaySlots(characterInfo player) {
    
    //
    
    cursorPos(10, 6);
    cout<<player.playerInv.slot1.name;
    cursorPos(10, 7);
    cout<<player.playerInv.slot2.name;
    cursorPos(10, 8);
    cout<<player.playerInv.slot3.name;
    cursorPos(10, 9);
    cout<<player.playerInv.slot4.name;
    cursorPos(10, 10);
    cout<<player.playerInv.slot5.name;
    
    //
    
}
