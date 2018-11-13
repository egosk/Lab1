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
    }
    else if (answer == 'q') {
        exit(0);
    }

};

    tuple<Character, World> Menu::action(Character ch, World w){
        char answer;
        cout << "What would you like to do with your character?" << endl;
        cout << "Collect item -  insert c and press enter." << endl;
        cout << "Fight monsters - insert f and press enter. " << endl;
        cout << "Check your inventory - insert i and press enter." << endl;
        cout << "Exit the program - insert q and press enter" << endl;
        cin >> answer;
        answer = tolower(answer);

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

                    ch.addToInventory(w.pickItem(number-1));
                }

            }
            else {
                cout << "No items to collect." <<endl;
            }

        }
        else if (answer == 'f'){
            cout << "Choose your weapon. Available weapons: " <<endl;
            //int k = 2;

            for(int i =0; i < (ch.getInventory().weapons.size()); i++){
                cout << i+1 << ". " << ch.getInventory().weapons[i].getName() << " - damage: " << endl ;
            }
            cout << "To quit - insert 'q' and press enter"<< endl;
            cin >> answer ;
            answer = tolower(answer);
            string options1 = "q";

            for(int g = 0; g < ch.getInventory().weapons.size(); g++){
                options1.append(std::to_string(g+1));
            }

            while (checkIfCorrectInput(options1, answer)== false) {
                cout << "Please choose correct option!" << endl;
                cin >> answer;
                answer = tolower(answer);
            }

            if (answer=='q'){
                finish = true;
            }
            else{
                int number = answer - '0';
                cout << "You have chosen: " << ch.getInventory().weapons[number-1].getName() << endl;
                cout << w.getMonstersInWorld().size() << endl;
                if ((w.getMonstersInWorld().size()) > 0){
                    cout << "Choose a monster you want fight with. Available monsters: " << endl;
                    for (int i = 0; i < (w.getMonstersInWorld().size()); i++){
                        cout << i+1 << ". " << w.getMonstersInWorld()[i].getName() << endl ; //dodaj obrazenie
                    }
                    cout << "To quit - insert 'q' and press enter"<< endl;
                    cin >> answer ;
                    answer = tolower(answer);
                    string options = "q";
                    for(int j = 0; j < w.getMonstersInWorld().size(); j++){
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
                        int nb = answer - '0';
                        cout << "Your are fighting with: " << w.getMonstersInWorld()[nb-1].getName() <<endl;
                        bool moveBack = false;
                        while(moveBack == false) {
                            cout << "Monster HP: " << w.getMonstersInWorld()[nb - 1].getHP() << "." << endl;
                            cout << "To attack - insert 'a' and press enter." << endl
                                 << "To move to menu insert 'z' and press enter" <<endl
                                 << "To exit insert 'q' and press enter" << endl;
                            cin >> answer;
                            answer = tolower(answer);
                            string options1 = "qaz";

                            while (checkIfCorrectInput(options1, answer) == false) {
                                cout << "Please choose correct option!" << endl;
                                cin >> answer;
                                answer = tolower(answer);
                            }

                            if (answer == 'q') {
                                exit(0);
                            } else if (answer == 'a') {
                                Monster temp_mon = ch.attack(w.getMonstersInWorld()[nb - 1],
                                                             ch.getInventory().weapons[number - 1]);
                                w.updateMonsterInWorld(temp_mon, nb - 1);

                            } else if (answer == 'z') {
                                moveBack = true;
                            }
                        }
                    }
                }
                else {
                    cout << "No Monsters to fight" <<endl;
                }
            }
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
        return result(ch, w);
    };

bool Menu::checkIfCorrectInput(string in, char an){
    for (int i=0; i < in.length(); i++){
        if( in[i] == an){
            return true;
        }
    }
    return false;
};




bool Menu::getFinish(){
    return Menu::finish;
};




tuple<Character, World> Menu::result(Character characte, World worl){
    return make_tuple(characte, worl);
};
