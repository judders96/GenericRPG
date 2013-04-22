#include "functions.h"

void playGame(characterInfo player) {
    
    //
    
    system("cls");
    
    int menuSelect;
    
    do {
        cout<< "(1)Battle" <<endl;
        cout<< "(2)Inventory" <<endl;
        cout<< "(3)Go to town" <<endl;
        cout<< "(4)Save and Quit" <<endl;
        cout<< "What would you like to do, " <<player.name<< "? ";
        cin>>menuSelect;
        
        switch(menuSelect) {
            case 1:
                cout<< "To battle!" <<endl;
                Sleep(500);
                player = battle(player);
                system("pause");
                break;
            case 2:
                cout<< "Inventory!" <<endl;
                Sleep(500);
                player = inventory(player);
                system("cls");
                break;
            case 3:
                cout<< "Going to town!" <<endl;
                Sleep(500);
                system("cls");
                break;
            case 4:
                cout<< "Saving..." <<endl;
                Sleep(500);
                system("cls");
                break;
            default:
                cout<< "That is not an option, " <<player.name<<endl;
                system("pause");
                system("cls");
                break;
        }
        system("cls");
        if(player.health == 0) {
            
            break;
            
        }
    }
    while(menuSelect != 4);
    
    if(player.health == 0) {
        
        char deathDecision;
        
        cout<< "You have died!" <<endl;
        
        if(player.revivesLeft != 0) {
            
            cout<< "Revives left: " <<player.revivesLeft<<endl;
            cout<< "Would you like to try again(y/n)?";
            cin>>deathDecision;
            
            if(deathDecision == 'y') {
                
                cout<< "Reviving!" <<endl;
                player.revivesLeft--;
                player.health = player.totalHealth;
                Sleep(500);
                system("cls");
                playGame(player);
                
            } else {
                
                cout<< "Game over!" <<endl;
                Sleep(1000);
                
            }
        } else {
            
            cout<< "You are out of ressurections" <<endl;
            cout<< "Game over!" <<endl;
            system("pause");
            
        }
    }
    
    //
    
}
