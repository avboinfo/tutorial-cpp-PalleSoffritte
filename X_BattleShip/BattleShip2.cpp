#include <iostream>
using namespace std;
#include "BattleField2.cpp"
class BattleShip{
    private:
    BattleField mappa;
    BattleField campo;
    public:
    BattleShip(){
    mappa= BattleField(VOID);
    campo=BattleField(VOID);
    campo.placeHorizontalShip(3);
    campo.placeVerticalShip(4);
    campo.placeVerticalShip(2);
    campo.placeHorizontalShip(5);
    }
    void play(){
        for (int i=0; i<20; i++) {
        int x = rand() % DIM;
        int y = rand() % DIM;
        if(campo.get(x,y)==HIT) continue;
        if (campo.get(x,y)==SHIP) {mappa.put(x,y,HIT); campo.put(x,y,HIT);}{
        }else mappa.put(x,y,MISS);
        mappa.stampa();
        ask();
        mappa.stampa();
        campo.stampa();
    }
    
    void ask(){
        cout<<"inserisci le cordinate di riga e colonna dove sganciare la bomba"
        int x,y;
        cin>>x;
        cin>>y;
        if(campo.get(x,y)==HIT) continue;
        if (campo.get(x,y)==SHIP) {mappa.put(x,y,HIT); campo.put(x,y,HIT);}
        }else mappa.put(x,y,MISS);
    }
