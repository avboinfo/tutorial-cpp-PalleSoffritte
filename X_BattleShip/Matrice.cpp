/*
Mauro Marinelli 13/04/24
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int DIM= 6;

class Matrice {

  private:
    char m[DIM][DIM];

  public:
    Matrice() {
        for (int i=0; i<DIM; i++)
            for (int j=0; j<DIM; j++)
                m[i][j] = 97 + rand()%26;        
    }

    Matrice( char c ) {
        for (int i=0; i<DIM; i++)
            for (int j=0; j<DIM; j++)
                m[i][j] = c;
    }

    char get( int x, int y ) {
        return m[x][y];
    }

    void put( int x, int y, char c ) {
        m[x][y] = c;
    }

    void stampa() {
        cout << endl << " ------------------------------------------------------ " << endl;
        for (int i=0; i<DIM; i++) {
            for (int j=0; j<DIM; j++) {
                printf("%c ", m[i][j]);
            }
            cout << endl;
        }
        cout << endl << " ------------------------------------------------------ " << endl;
    }

    void bomb() {
        int x = rand() % DIM;
        int y = rand() % DIM;
        m[x][y] = '*';
    }

    void placeHorizontalShip(int len) {
        if (len<=0 || len>=DIM) return;
        int x = rand() % (DIM);
        int y = rand() % (DIM-len);
        for (int i=0; i<len; i++) m[x][y+i] = 'O';
    }

    void placeVerticalShip(int len) {
        if (len<=0 || len>=DIM) return;
        int x = rand() % (DIM-len);
        int y = rand() % (DIM);
        for (int i=0; i<len; i++) m[x+i][y] = 'O';
    }

};

int main() {
    srand(time(NULL));
    Matrice mappa = Matrice( '-' );
    Matrice campo = Matrice( '.' );
    campo.placeHorizontalShip(3);
    campo.placeVerticalShip(4);
    campo.placeVerticalShip(2);
    campo.placeHorizontalShip(5);

    // lancia 20 bombe a caso
    for (int i=0; i<20; i++) {
        int x = rand() % DIM;
        int y = rand() % DIM;
        if (campo.get(x,y)=='O') mappa.put(x,y,'*');
    }

    mappa.stampa();

}
