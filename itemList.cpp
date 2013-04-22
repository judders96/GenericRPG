#include "functions.h"

item itemList(int itemId) {
    
    item updatedItem;
    
    //
    
    switch(itemId) {
        case 1:
            updatedItem.name = "Stick";
            updatedItem.description = "A small stick";
            updatedItem.damageType = "prodding";
            updatedItem.damage = 1;
            break;
        case 2:
            updatedItem.name = "Rock";
            updatedItem.description = "A small rock";
            updatedItem.damageType = "bludgeoning";
            updatedItem.damage = 1;
            break;
        default:
            updatedItem.name = "";
            updatedItem.description = "";
    }
    
    return updatedItem;
    
    //
}
