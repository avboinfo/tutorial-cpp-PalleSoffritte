/*
    Vettore.cpp
    Classe Vettore di interi- Mauro Marinelli

*/

#include <iostream>
using namespace std;

class Vettore {
    protected:

    int dim, delta, len;
    int *v;
    
    public:

    Vettore(int d){
        this->dim= dim;
        len = 0;
        this->delta= delta;
        v = new int[dim];
    }

    void add(int n){
        if (len==dim){ 
            cout << "Estendo da "<< dim << " a "<< dim+delta<<endl;
            int *nuovov = new int[dim+delta];
            for (int i = 0; i < dim; i++) nuovov[i] = v[i];
            dim += delta;
            delete[] v;
            v = nuovov;
        }
        v[len]=n;
        len++;
    }

    void print(){
        cout<<"contenuto del vettore: ";
        for (int i = 0; i < len; i++) cout<<v[i]<<" ";
        cout<<endl;
        
    }

};

int main(int argc, char * argv[]){

    Vettore vett(10);
    for (int i = 0; i < 100; i++)vett.add(33*i);
    vett.print();
}