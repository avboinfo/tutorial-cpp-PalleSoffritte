/*
    Pila.cpp
    Classe Pila di interi- Mauro Marinelli

*/

#include <iostream>
using namespace std;

class Pila {
    protected:

    int dim, delta, len;
    int *v;
    
    public:
    Pila(int d){
        this->dim= dim;
        len = 0;
        this->delta= delta;
        v = new int[dim];
    }

    void push(int n){
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
    int pop(){
        if(len==0) {cout<<"\n ERRORE Pila Vuota\n"; return 0;}
        int result = v[len-1];
        return v[--len];
    }
    int getElement(int index){
        return v[index];
    }
    void setElement(int index, int newvalue){
        v[index] = newvalue;
    }
    void print(){
        cout<<"contenuto della Pila: ";
        for (int i = 0; i < len; i++) cout<<v[i]<<" ";
        cout<<endl;
        
    }

};

int main(int argc, char * argv[]){

    Pila vett(10);
    for (int i = 0; i < 100; i++)vett.push(i);
    for (int i = 0; i < 100; i++)cout << vett.pop()<< " ";
    cout<< endl;
    //vett.print();
}