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

bool playing();

void cursorPos(int x, int y);
void setColour(int background, int text);
void slowPrint(string text);

void playerData(characterInfo player);

//

characterInfo newGame(characterInfo playerInit);
characterInfo characterInit(int newLoad);
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

int deductPlayerHealth(characterInfo player, int damage);
int deductPlayerMana(characterInfo player, int mana);
int deductEnemyHealth(enemyInfo enemy, int damage);
int deductEnemyMana(enemyInfo enemy, int mana);
int increasePlayerHealth(characterInfo player, int health);
int increasePlayerMana(characterInfo player, int mana);
int increaseEnemyHealth(enemyInfo enemy, int health);
int increaseEnemyMana(enemyInfo enemy, int mana);

//
