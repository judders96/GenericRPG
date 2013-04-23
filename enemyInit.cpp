#include "functions.h"

enemyInfo enemyInit() {
    
    //
    
    srand(rand());
    
    ifstream inFile;
    enemyInfo enemyInit;
    
    enemyInit.maxHealth = 500;
    enemyInit.maxMana = 500;
    
    int nameSize = 0;
    string nameSizeCheck;
    inFile.open("randNameList.txt");
    
    while(inFile>>nameSizeCheck) {
        
        nameSize++;
        
    }
    
    inFile.clear();
    inFile.seekg(0);
    
    string randName[nameSize];
    
    for(int i = 0; i < nameSize; i++) {
        
        inFile>>randName[i];
        
    }
    
    inFile.close();
    
    int randNameChoice = rand() %nameSize;
    
    enemyInit.name = randName[randNameChoice];
    
    enemyInit.totalHealth = 100;
    enemyInit.health = enemyInit.totalHealth;
    
    enemyInit.totalMana = 100;
    enemyInit.mana = enemyInit.totalMana;
    
    enemyInit.baseDamage = 20;
    
    return enemyInit;
    
    //
    
}
