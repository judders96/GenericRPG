#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

/* Records */

struct item {
    
    int id;
    
    string name;
    string description;
    
    string damageType;
    int damage;
    float damageModifier;
        
};

//

struct inventory {
    
    item slot1;
    item slot2;
    item slot3;
    item slot4;
    item slot5;
    
};

//

struct race {
    
    int raceId;
    
    string name;
    string description;
    
    bool healthRegen;
    bool manaRegen;
    bool autoRes;
    
    int damageBonus;
    int magicDamageBonus;
    int healthBonus;
    int manaBonus;
    int dodgeBonus;
    
};

//

struct characterInfo {
    
    inventory playerInv;
    inventory playerBackpack;
    inventory playerArmor;
    
    race playerRace;
    
    bool hasBackpack;
    
    string name;
    
    int revivesLeft;
    
    int maxHealth;
    int totalHealth;
    int health;
    
    int maxMana;
    int totalMana;
    int mana;
    
    int baseDamage;
    int baseMagicDamage;
    
    int gold;
    
};

//

struct enemyInfo {
    
    race enemyRace;
    
    string name;
    
    int maxHealth;
    int totalHealth;
    int health;
    
    int maxMana;
    int totalMana;
    int mana;
    
    int baseDamage;
    
};

//

/* Function prototypes */

void playGame(characterInfo player);

bool mainMenu();

void cursorPos(int x, int y);
void setColour(int background, int text);
void slowPrint(string text);

//

characterInfo newGame(characterInfo playerInit);
characterInfo characterInit(int newLoad);
void saveGame(characterInfo player);
void writeToFile(characterInfo player, int fileSelect);

characterInfo updateRace(characterInfo player);
race raceList(int raceId);

enemyInfo enemyInit();

//

characterInfo updateItems(characterInfo player);
item itemList(int slotId);

characterInfo inventory(characterInfo player);

void inventoryDisplay(characterInfo player);
void inventoryDisplayHealth(characterInfo player);
void inventoryDisplayMana(characterInfo player);
void inventoryDisplaySlots(characterInfo player);
void inventoryDisplayArmor(characterInfo player);
void inventoryDisplayBackpack(characterInfo player);

//

characterInfo battle(characterInfo player);

void battleDisplay(characterInfo player, enemyInfo enemy);
void battleDisplayPlayerHealth(characterInfo player);
void battleDisplayPlayerMana(characterInfo player);
void battleDisplayEnemyHealth(enemyInfo enemy);
void battleDisplayEnemyMana(enemyInfo enemy);

int deductHealth(int health, int damage);
int deductMana(int mana, int manaUsed);

//
