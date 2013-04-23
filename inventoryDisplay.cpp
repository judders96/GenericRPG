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

void inventoryDisplayHealth(characterInfo player) {
    //
    cursorPos(11, 2);
    setColour(1, 16);
    if(player.health >= 100) {
        cout<<player.health << "/" <<player.totalHealth;
    } else if(player.health > 0) {
        cout<<player.health << "/" <<player.totalHealth<< " ";
    } else {
        cout<<player.health << "/" <<player.totalHealth<< "  ";
    }
    
    setColour(15, 1);
    cout<< ":";
    setColour(5, 16);
    int healthBar1 = player.totalHealth / 10;
    for(int i = 0; i < healthBar1; i++) {
        cout<< " ";
    }
    setColour(15, 1);
    cout<< ":";
    cursorPos(19, 2);
    setColour(13, 16);
    int healthBar2 = player.health / 10;
    for(int i = 0; i < healthBar2; i++) {
        cout<< " ";
    }
    setColour(1, 8);
    //
}

void inventoryDisplayMana(characterInfo player) {
    //
    cursorPos(11, 3);
    setColour(1, 16);
    if(player.mana >= 100) {
        cout<<player.mana << "/" <<player.totalMana;
    } else if(player.mana > 0) {
        cout<<player.mana << "/" <<player.totalMana<< " ";
    } else {
        cout<<player.mana << "/" <<player.totalMana<< "  ";
    }
    
    setColour(15, 1);
    cout<< ":";
    setColour(2, 16);
    int manaBar1 = player.totalMana / 10;
    for(int i = 0; i < manaBar1; i++) {
        cout<< " ";
    }
    setColour(15, 1);
    cout<< ":";
    cursorPos(19, 3);
    setColour(10, 16);
    int manaBar2 = player.mana / 10;
    for(int i = 0; i < manaBar2; i++) {
        cout<< " ";
    }
    setColour(1, 8);
    //
}
