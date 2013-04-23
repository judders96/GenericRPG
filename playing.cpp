#include "functions.h"

bool playing() {
    
    characterInfo player;
    
    int menuSelect;
    
    system("cls");
    
    cout<< "(1)New game" <<endl;
    cout<< "(2)Load game" <<endl;
    cout<< "(3)Exit" <<endl;
    cout<< "What would you like to do? ";
    cin>>menuSelect;
    
    switch(menuSelect) {
        case 1:
            system("cls");
            player = characterInit(1);
            playGame(player);
            break;
        case 2:
            system("cls");
            player = characterInit(2);
            playGame(player);
            break;
        case 3:
            return false;
            break;
        default:
            return true;
            break;
    }
}
