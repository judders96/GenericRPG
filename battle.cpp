#include "functions.h"


characterInfo battle(characterInfo player) {
    
    //
    
    enemyInfo enemy = enemyInit();
    
    //
    
    system("cls");
    cout<< "================================================================================";
    cout<< "|Player name   :                                                               |";
    cout<< "|Player health :                                                               |";
    cout<< "|Player mana   :                                                               |";
    cout<< "|==============================================================================|";
    cout<< "|Enemy name    :                                                               |";
    cout<< "|Enemy health  :                                                               |";
    cout<< "|Enemy mana    :                                                               |";
    cout<< "|==============================================================================|";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "|                                                                              |";
    cout<< "================================================================================";
    battleDisplay(player, enemy);
    
    while(player.health > 0 && enemy.health > 0) {
    
        cout<< "|Battle!" <<endl<<"|";
        
        player.health = deductHealth(player.health, enemy.baseDamage);
        enemy.health = deductHealth(enemy.health, player.baseDamage + player.playerRace.damageBonus);
        
        system("pause");
        
        battleDisplay(player, enemy);
        
    }
    
    cout<< "|Battle over" <<endl<< "|";
    
    if(player.health > 0 && enemy.health == 0) {
        
        cout<< "You win!" <<endl<< "|";
        
    } else {
        
        cout<< "You lose!" <<endl<< "|";
        
    }
    
    return player;
    
    system("cls");
    
    //
    
}
