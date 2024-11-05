#include <iostream>
#include "Numero_Analisis.h"
#include "Dia_Semana.h"
#include "Promedio.h"
#include "Promocion.h"
using namespace std;
int main() {
    //Problema 1
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
int dia;
    cout << " Ingrese un numero del 1 al 7:";
    cin >> dia;
    dia_semana(dia);


    //Problema 3
    promedio();


    //Problema 4
    promocion();
    return 0;
}



