#include <iostream>
using namespace std;
class Orario{
        public:
        int Ora ;
        int Minuti;
        int Secondi;
        Orario(int H, int M ,int S){
            Ora = H;
            Minuti = M;
            Secondi = S;
        
        }
        void ora(){
            cout<<Ora<<endl;
            cout<<"l'orario è "<< Ora <<" ore "<< Minuti <<" minuti "<<Secondi<<" secondi"<<endl;
        }   
        int Mezzanotte(){
            int Secondistrani=Ora*3600+Minuti*60+Secondi;
            cout<<"dalla  Mezzanotte sono passati "<<Secondistrani<<endl;
            return Secondistrani;}
        void Differenza(int Ora, int Minuti, int Secondi){
            int Secondistrani = Mezzanotte();
            int Secondistrani2=Ora*3600+Minuti*60+Secondi;
            int burro = Secondistrani-Secondistrani2;
            cout<<burro<<endl;
    
        }
          
    };
    
    
int main()
{
    Orario Ora1(4,23,45);
    Ora1.ora();
    Ora1.Differenza(2,20,30);

    return 0;
}