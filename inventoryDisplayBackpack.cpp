#include "functions.h"

void inventoryDisplayBackpack(characterInfo player) {
    
    //
    
    cursorPos(10, 6);
    cout<<player.playerBackpack.slot1.name;
    cursorPos(10, 7);
    cout<<player.playerBackpack.slot2.name;
    cursorPos(10, 8);
    cout<<player.playerBackpack.slot3.name;
    cursorPos(10, 9);
    cout<<player.playerBackpack.slot4.name;
    cursorPos(10, 10);
    cout<<player.playerBackpack.slot5.name;
    
    //
    
}
