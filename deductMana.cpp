#include "functions.h"

int deductMana(int mana, int manaUsed) {
    
    //
    
    if(mana - manaUsed > 0) {
        
        mana -= manaUsed;
    
    } else {
        
        mana = 0;
        
    }
    
    return mana;
    
    //
    
}
