
#include "Numero_Analisis.h"
#include <iostream>
using namespace std;

void Numero_Analisis(int numero){

if (numero > 0) {
        cout << "El numero es positivo"<< endl;
    }
    else if (numero < 0) {
        cout <<"El numero es negativo."<< endl;
    }
    else {
        cout << "El numero es 0."<< endl;
    }
}
