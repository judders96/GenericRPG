#include "functions.h"

race raceList(int raceId) {
    
    race updatedRace;
    
    //
    
    switch(raceId) {
        case 1:
            updatedRace.name = "Human";
            updatedRace.description = "A basic race, reccomended for begginers"; 
            updatedRace.healthRegen = false;
            updatedRace.manaRegen = false;
            updatedRace.autoRes = false;
            updatedRace.damageBonus = 0;
            updatedRace.magicDamageBonus = 0;
            updatedRace.healthBonus = 10;
            updatedRace.manaBonus = 10;
            updatedRace.dodgeBonus = 0;
            break;
        case 2:
            updatedRace.name = "Orc";
            updatedRace.description = "A ruthless and bloodthirsty race";
            updatedRace.healthRegen = false;
            updatedRace.manaRegen = false;
            updatedRace.autoRes = false;
            updatedRace.damageBonus = 10;
            updatedRace.magicDamageBonus = -5;
            updatedRace.healthBonus = 20;
            updatedRace.manaBonus = 0;
            updatedRace.dodgeBonus = -5;
            break;
        case 3:
            updatedRace.name = "Arcanian";
            updatedRace.description = "A mystical and magically attuned race";
            updatedRace.healthRegen = false;
            updatedRace.manaRegen = true;
            updatedRace.autoRes = false;
            updatedRace.damageBonus = -5;
            updatedRace.magicDamageBonus = 10;
            updatedRace.healthBonus = 0;
            updatedRace.manaBonus = 20;
            updatedRace.dodgeBonus = 0;
            break;
        case 4:
            updatedRace.name = "Reptilian";
            updatedRace.description = "A devious and rougish race";
            updatedRace.healthRegen = true;
            updatedRace.manaRegen = false;
            updatedRace.autoRes = false;
            updatedRace.damageBonus = 0;
            updatedRace.magicDamageBonus = 0;
            updatedRace.healthBonus = 0;
            updatedRace.manaBonus = 0;
            updatedRace.dodgeBonus = 10;
            break;
        case 5:
            updatedRace.name = "Constructiod";
            updatedRace.description = "An automatonic race, whose origin is unknown";
            updatedRace.healthRegen = true;
            updatedRace.manaRegen = true;
            updatedRace.autoRes = true;
            updatedRace.damageBonus = 0;
            updatedRace.magicDamageBonus = 0;
            updatedRace.healthBonus = 0;
            updatedRace.manaBonus = 0;
            updatedRace.dodgeBonus = 0;
            break;
        default:
            updatedRace.name = "Hispanic";
            updatedRace.description = "Excessively good at gardening";
            updatedRace.healthRegen = false;
            updatedRace.manaRegen = false;
            updatedRace.autoRes = true;
            updatedRace.damageBonus = 0;
            updatedRace.magicDamageBonus = 0;
            updatedRace.healthBonus = 0;
            updatedRace.manaBonus = 0;
            updatedRace.dodgeBonus = 0;
    }
    
    return updatedRace;
    
    //
}
