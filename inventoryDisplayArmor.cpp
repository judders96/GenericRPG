#include "functions.h"

void inventoryDisplayArmor(characterInfo player) {
    
    //
    
    cursorPos(14, 12);
    cout<<player.playerArmor.slot1.name;
    cursorPos(14, 13);
    cout<<player.playerArmor.slot2.name;
    cursorPos(14, 14);
    cout<<player.playerArmor.slot3.name;
    cursorPos(14, 15);
    cout<<player.playerArmor.slot4.name;
    cursorPos(14, 16);
    cout<<player.playerArmor.slot5.name;
    
    //
    
}
