#include "functions.h"

void inventoryDisplay(characterInfo player) {
    
    //
    
    cout<< "================================================================================";
    cout<< "|Health :                                                                      |";
    cout<< "|Mana   :                                                                      |";
    cout<< "|Gold   :                                                                      |";
    cout<< "|==============================================================================|";
    cout<< "|Slot 1:                                                                       |";
    cout<< "|Slot 2:                                                                       |";
    cout<< "|Slot 3:                                                                       |";
    cout<< "|Slot 4:                                                                       |";
    cout<< "|Slot 5:                                                                       |";
    cout<< "|==============================================================================|";
    cout<< "|Helmet    :                                                                   |";
    cout<< "|Chestplate:                                                                   |";
    cout<< "|Leggings  :                                                                   |";
    cout<< "|Boots     :                                                                   |";
    cout<< "|Weapon    :                                                                   |";
    cout<< "================================================================================";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "================================================================================";
    
    cursorPos(11, 4);
    cout<<player.gold;
    
    inventoryDisplayHealth(player);
    inventoryDisplayMana(player);
    inventoryDisplaySlots(player);
    inventoryDisplayArmor(player);
    
    if(player.hasBackpack = true) {
        
        inventoryDisplayBackpack(player);
        
    }
    
    cursorPos(2, 18);
    
    //
    
}
