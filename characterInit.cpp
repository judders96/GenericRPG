#include "functions.h"

characterInfo characterInit(int newLoad) {
    
    //
    
    ifstream inFile;
    
    characterInfo playerInit;
    
    playerInit.maxHealth = 500;
    playerInit.maxMana = 500;
    playerInit.hasBackpack = false;
    
    
    switch(newLoad) {
        case 1:
            playerInit = newGame(playerInit);
            break;
        case 2:
            int fileSelect;
            string name;
            
            inFile.open("Save1.txt");
            cout<< "Save 1: ";
            inFile.ignore(256, ' ');
            inFile>>name;
            cout<<name<<endl;
            inFile.close();
            
            inFile.open("Save2.txt");
            cout<< "Save 2: ";
            inFile.ignore(256, ' ');
            inFile>>name;
            cout<<name<<endl;
            inFile.close();
            
            inFile.open("Save3.txt");
            cout<< "Save 3: ";
            inFile.ignore(256, ' ');
            inFile>>name;
            cout<<name<<endl;
            inFile.close();
            
            cout<< "Which save file would you like to choose? " <<endl;
            cin>>fileSelect;
            
            cout<< "Loading file..." <<endl;
            Sleep(750);
            
            switch(fileSelect) {
                case 1:
                    inFile.open("Save1.txt");
                    break;
                case 2:
                    inFile.open("Save2.txt");
                    break;
                case 3:
                    inFile.open("Save3.txt");
                    break;
            }
            inFile.ignore(256, ' ');
            inFile>>playerInit.name;
            inFile.ignore(256, ' ');
            inFile>>playerInit.revivesLeft;
            inFile.ignore(256, ' ');
            inFile>>playerInit.totalHealth;
            playerInit.health = playerInit.totalHealth;
            inFile.ignore(256, ' ');
            inFile>>playerInit.totalMana;
            playerInit.mana = playerInit.totalMana;
            inFile.ignore(256, ' ');
            inFile>>playerInit.baseDamage;
            inFile.ignore(256, ' ');
            inFile>>playerInit.gold;
            
            inFile.close();
            break;
    }
    
    return playerInit;
    
    system("cls");
    
    //
    
}

characterInfo newGame(characterInfo playerInit) {
    
    //
    
    string nameCorrect;
    
    playerInit.revivesLeft = 3;
    playerInit.totalHealth = 100;
    playerInit.health = playerInit.totalHealth;
    playerInit.totalMana = 100;
    playerInit.mana = playerInit.totalMana;
    playerInit.baseDamage = 30;
    playerInit.gold = 50;
    
    do {
        slowPrint("Please enter your name, Traveller: ");
        cin>>playerInit.name;
        slowPrint("Your name is, " + playerInit.name + ", correct(y/n)? ");
        cin>>nameCorrect;
        system("cls");
    } while(nameCorrect != "y");
    
    slowPrint("Welcome, to the world of Genericia, " + playerInit.name);
    cout<<endl;
    cout<< "(1)Human" <<endl;
    cout<< "(2)Orc" <<endl;
    cout<< "(3)Arcanian" <<endl;
    cout<< "(4)Reptilian" <<endl;
    cout<< "(5)Constructiod" <<endl;
    slowPrint("Please choose a race: ");
    cin>>playerInit.playerRace.raceId;
    
    playerInit = updateRace(playerInit);
    
    return playerInit;
    
    //
    
}
