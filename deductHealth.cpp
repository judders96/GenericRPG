#include "functions.h"

int deductHealth(int health, int damage) {
    
    //
    
    if(health - damage > 0) {
        
        health -= damage;
    
    } else {
        
        health = 0;
        
    }
    
    return health;
    
    //
    
}
