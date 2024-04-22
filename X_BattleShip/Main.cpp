/*
    Mauro Marinelli - 22/04/2024
*/

#include <iostream>
#include "BattleShip.cpp"
using namespace std;

int main() {

    cout << "iniziazione programma" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER!" << endl;

}
