#include <iostream> 
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    srand (time(NULL));
    int arma, escudo, dano;
    int vida=100;
    
    while(vida>0){
        arma = rand()%6+1;
        arma +=rand()%6+1;
        arma += 3;

        escudo = rand()%4+1;
        escudo +=rand()%4+1; 

        dano = arma - escudo;
        if (dano> 0) {
            vida-=dano;
            cout << " El dano es " << dano << " vida restante " << vida << endl;
        } else {
            cout << " Sin dano " << endl;
        }
    }
}