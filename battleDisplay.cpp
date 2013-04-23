#include "functions.h"

void battleDisplay(characterInfo player, enemyInfo enemy) {
    
    //
    
    cursorPos(17, 2);
    cout<<player.name;
    cursorPos(17, 6);
    cout<<enemy.name;
    
    battleDisplayPlayerHealth(player);
    battleDisplayPlayerMana(player);
    battleDisplayEnemyHealth(enemy);
    battleDisplayEnemyMana(enemy);
    
    cursorPos(1, 10);
    
    //
    
}

void battleDisplayEnemyHealth(enemyInfo enemy) {
    
    //
    
    cursorPos(17, 7);
    
    setColour(1, 16);
    
    if(enemy.health >= 100) {
        
        cout<<enemy.health << "/" <<enemy.totalHealth;
        
    } else if(enemy.health > 0) {
        
        cout<<enemy.health << "/" <<enemy.totalHealth<< " ";
        
    } else {
        
        cout<<enemy.health << "/" <<enemy.totalHealth<< "  ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    setColour(5, 16);
    int healthBar1 = enemy.totalHealth / 10;
    
    for(int i = 0; i < healthBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    cursorPos(25, 7);
    
    setColour(13, 16);
    int healthBar2 = enemy.health / 10;
    
    for(int i = 0; i < healthBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}

void battleDisplayEnemyMana(enemyInfo enemy) {
    
    //
    
    cursorPos(17, 8);
    
    setColour(1, 16);
    
    if(enemy.mana >= 100) {
        
        cout<<enemy.mana << "/" <<enemy.totalMana;
        
    } else if(enemy.mana > 0) {
        
        cout<<enemy.mana << "/" <<enemy.totalMana<< " ";
        
    } else {
        
        cout<<enemy.mana << "/" <<enemy.totalMana<< "  ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
        
    setColour(2, 16);
    int manaBar1 = enemy.totalMana / 10;
    
    for(int i = 0; i < manaBar1; i++) {
        
        cout<< " ";
        
    }
    
    setColour(15, 1);
    cout<< ":";
    
    cursorPos(25, 8);
    
    setColour(10, 16);
    int manaBar2 = enemy.mana / 10;
    
    for(int i = 0; i < manaBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}

void battleDisplayPlayerHealth(characterInfo player) {
    
    //
    
    cursorPos(17, 3);
    
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
    
    cursorPos(25, 3);
    
    setColour(13, 16);
    int healthBar2 = player.health / 10;
    
    for(int i = 0; i < healthBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}

void battleDisplayPlayerMana(characterInfo player) {
    
    //
    
    cursorPos(17, 4);
    
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
    
    cursorPos(25, 4);
    
    setColour(10, 16);
    int manaBar2 = player.mana / 10;
    
    for(int i = 0; i < manaBar2; i++) {
        
        cout<< " ";
        
    }
    
    setColour(1, 8);
    
    //
    
}
