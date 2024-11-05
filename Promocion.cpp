#include <iostream>
#include "Promocion.h"
void promocion() {
    float precio1, precio2, precio3;
    //Pedir los precios de los tres articulos
    std::cout << "Ingrese el precio del primer artículo: ";
    std::cin >> precio1;
    std::cout << "Ingrese el precio del segundo artículo: ";
    std::cin >> precio2;
    std::cout << "Ingrese el precio del tercer artículo: ";
    std::cin >> precio3;
    float Total = precio1 + precio2 + precio3;
    if (precio1 <=precio2  && precio1 <= precio3) {
        Total = precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) {
        Total = precio1 + precio3;
    } else {
        Total = precio1 + precio3;
    }
    std::cout << "El total a pagar bajo la promoción es:  €" << Total << std::endl;
    }


