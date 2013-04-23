#include "functions.h"

characterInfo updateRace(characterInfo player) {
    
    player.playerRace = raceList(player.playerRace.raceId);
    
    return player;
    
}
