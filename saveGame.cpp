#include "functions.h"

void saveGame(characterInfo player) {
    //
    ifstream inFile;
    string saveGame;
    string name;
    string fileName;
    int fileSelect;
    //
    cout<< "Would you like to save your game(y/n)? ";
    cin>>saveGame;
    if(saveGame == "y") {
        inFile.open("Save1.txt");
        cout<< "Save 1: ";
        inFile.ignore(256, ' ');
        inFile>>name;
        if(name != "") {
            cout<<name<<endl;
        } else {
            cout<< "Empty" <<endl;
        }
        inFile.close();
        inFile.open("Save2.txt");
        cout<< "Save 2: ";
        inFile.ignore(256, ' ');
        inFile>>name;
        if(name != "") {
            cout<<name<<endl;
        } else {
            cout<< "Empty" <<endl;
        }
        inFile.close();
        inFile.open("Save3.txt");
        cout<< "Save 3: ";
        inFile.ignore(256, ' ');
        inFile>>name;
        if(name != "") {
            cout<<name<<endl;
        } else {
            cout<< "Empty" <<endl;
        }
        inFile.close();
        
        cout<< "Which file would you like to save to? ";
        cin>>fileSelect;
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
        inFile>>name;
        if(name != "") {
            string overwrite;
            cout<< "This file already has a save in it, are you sure you want to overwrite(y/n)? ";
            cin>>overwrite;
            if(overwrite == "y") {
                writeToFile(player, fileSelect);
            } else {
                return;
            }
        }
    }
    //
}

void writeToFile(characterInfo player, int fileSelect) {
    //
    ofstream outFile;
    //
    switch(fileSelect) {
                    case 1:
                        outFile.open("Save1.txt");
                        break;
                    case 2:
                        outFile.open("Save2.txt");
                        break;
                    case 3:
                        outFile.open("Save3.txt");
                        break;
        }
    outFile<< "Name: " <<player.name;
    //
}
