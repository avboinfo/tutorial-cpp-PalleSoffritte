#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BattleShip2.cpp"
using namespace std;
int main(){
    cout<<"Gioco della battaglia navale buon divertimento"<<endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout<<"Game Over"<<endl;
}