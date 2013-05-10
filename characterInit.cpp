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
    string raceCorrect;
    race chooseARace;
    
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
    do {
        chooseARace = raceList(1);
        cout<< "(1)" <<chooseARace.name<< " - " <<chooseARace.description<<endl;
        chooseARace = raceList(2);
        cout<< "(2)" <<chooseARace.name<< " - " <<chooseARace.description<<endl;
        chooseARace = raceList(3);
        cout<< "(3)" <<chooseARace.name<< " - " <<chooseARace.description<<endl;
        chooseARace = raceList(4);
        cout<< "(4)" <<chooseARace.name<< " - " <<chooseARace.description<<endl;
        chooseARace = raceList(5);
        cout<< "(5)" <<chooseARace.name<< " - " <<chooseARace.description<<endl;
        slowPrint("Please choose a race to view its details: ");
        cin>>playerInit.playerRace.raceId;
        playerInit = updateRace(playerInit);
        switch(playerInit.playerRace.raceId) {
            case 1:
                cout<< "Human                                                   " <<endl;
                cout<< "A basic race, reccomended for begginers                 " <<endl; 
                cout<< "Attributes:                                             " <<endl;
                cout<< "  -Small health bonus           : +10 base health       " <<endl;
                cout<< "  -Small mana bonus             : +10 base mana         " <<endl;
                break;
            case 2:
                cout<< "Orc                                                     " <<endl;
                cout<< "A ruthless and bloodthirsty race                        " <<endl;
                cout<< "Attributes:                                             " <<endl;
                cout<< "  -Medium damage bonus          : +10% base damage      " <<endl;
                cout<< "  -Medium health bonus          : +20 base health       " <<endl;
                cout<< "  -Medium magic damage reduction: -5% base magic damage " <<endl;
                cout<< "  -Medium dodge skill reduction : -5% base dodge skill  " <<endl;
                break;
            case 3:
                cout<< "Arcanian                                                " <<endl;
                cout<< "An arcane and magically attuned race                    " <<endl;
                cout<< "Attributes:                                             " <<endl;
                cout<< " -Increased mana regeneration   : +10% mana regeneration" <<endl;
                cout<< " -Medium mana bonus             : +20 base mana         " <<endl;
                cout<< " -Medium magic damage increase  : +10% base magic damage" <<endl;
                cout<< " -Medium damage reduction       : -5% base damage       " <<endl;
                break;
            case 4:
                cout<< "Reptillian                                              " <<endl;
                cout<< "A devious and rougish race                              " <<endl;
                cout<< "Attributes:                                             " <<endl;
                cout<< " -Health regeneration           : +2 health every turn  " <<endl;
                cout<< " -Large dodge skill increase    : +10 dodge skill       " <<endl;
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
                break;*/
        }
        slowPrint("Do you wish to be a " + playerInit.playerRace.name + "(y/n)? ");
        cin>>raceCorrect;
        system("cls");
    } while(raceCorrect != "y");
    
    playerInit = updateRace(playerInit);
    
    return playerInit;
    
    //
    
}
