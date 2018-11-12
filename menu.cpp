//
// Created by emila on 11/3/2018.
//
#include <iostream>
using namespace std;

#include "character.h"
#include "menu.h"


Character Menu::createCharacter() {
    char answer;
    string nm = "1";
    int hp;

    cout << "What would you like to do? " << std::endl;
    cout << "create character with your parameters - insert a and press enter" << endl;
    cout << "create character with basic parameters - insert b and press enter" << endl;
    cout << "exit the program - insert q and press enter" << endl;
    cin >> answer;
    answer = tolower(answer);

    while (checkIfCorrectInput("abq", answer)== false) {
        cout << "Please choose correct letter : a, b or q" << endl;
        cin >> answer;
        answer = tolower(answer);

    }

   // switch (answer){
  //      case 'a':
   // };


    if (answer == 'a') {
        cout << "Creating character with your parameters..." << endl;
        cout << "Insert the name of your character: " << endl;
        cin >> nm;
        cout << endl << "Insert HP for your character: " << endl;
        cin >> hp;
        Character *char1 = new Character(nm, hp);
        cout << "This is your character: " << endl << "Name: " << char1->getName() << endl << "HP: " << char1->getHP()
             << endl;
        return *char1;

    } else if (answer == 'b') {
        cout << "Creating basic character... " << endl;
        Character *char1 = new Character();
        cout << "This is your character: " << endl << "Name: " << char1->getName() << endl << "HP: " << char1->getHP()
             << endl;
        return *char1;

    } else if (answer == 'q') {
        //break;
        //Character *char1 = new Character();
        //setFinish(true);
        //return *char1;
        exit(0);
    }


};

    void Menu::action(Character ch, World w){
        char answer;
        cout << "What would you like to do with your character?" << endl;
        cout << "Collect item -  insert c and press enter." << endl;
        cout << "Fight monsters - insert f and press enter. " << endl;
        cout << "Check your inventory - insert i and press enter." << endl;
        cout << "Exit the program - insert q and press enter" << endl;
        cin >> answer;
        answer = tolower(answer);

        g++;
        cout << "Wartosc g: " << g << endl;




        while (checkIfCorrectInput("cfiq", answer)== false){
            cout << "Please choose correct letter : c, f, i or q" <<endl;
            cin >> answer;
            answer = tolower(answer);

        }

        if (answer == 'c'){
            if ((w.getAvailableItems().size()) > 0){
                cout << "Available items: " << endl;
                for (int i = 0; i < (w.getAvailableItems().size()); i++){
                    cout << i+1 << ". " << w.getAvailableItems()[i].getName() << endl ;
                }
                cout << "What would you like to collect? - insert correct number end press enter." << endl;
                //cout << "To move back to action menu - insert 'z' and press enter"<< endl;
                cout << "To quit - insert 'q' and press enter"<< endl;
                cin >> answer ;
                answer = tolower(answer);
                string options = "q";

                for(int j = 0; j < w.getAvailableItems().size(); j++){
                    options.append(std::to_string(j+1));
                }


                while (checkIfCorrectInput(options, answer)== false) {
                    cout << "Please choose correct option!" << endl;
                    cin >> answer;
                    answer = tolower(answer);
                }

                if (answer=='q'){
                    finish = true;
                }
                else{
                    int number = answer - '0';


                    ch.addToInventory(w.pickItem(number));
                    //ch.addToInventory(w.pickItem(number));

                    //cout << "Items in your inventory: " << endl;
                    //for (int i = 0; i < (ch.getInventory().stock.size()); i++){
                    //    cout << i+1 << ". " << ch.getInventory().stock[i].getName() << endl ;
                    //}

                    //ch.addToInventory(w.pickItem(number));
                }

            }
            else {
                cout << "No items to collect." <<endl;
            }

        }
        else if (answer == 'f'){
            cout << "Opponents to fight are : 0" << endl;
        }
        else if (answer == 'i'){
            if ((ch.getInventory().stock.size()) > 0){
                cout << "Items in your inventory: " << endl;
                for (int i = 0; i < (ch.getInventory().stock.size()); i++){
                    cout << i+1 << ". " << ch.getInventory().stock[i].getName() << endl ;
                }
            }
            else {
                cout << "Your inventory is empty." <<endl;
            }

        }
        else if (answer == 'q'){
            exit(0);
        }



    };

bool Menu::checkIfCorrectInput(string in, char an){
    for (int i=0; i < in.length(); i++){
        if( in[i] == an){
            return true;
        }
    }
    return false;
};


void Menu::setFinish(bool f){
    Menu::finish = f;
};

bool Menu::getFinish(){
    return Menu::finish;
};

 bool Menu::wantToQuit(char ch){
    if (ch == 'q'){
        return true;
    }
    else {
        return false;
    }
}


