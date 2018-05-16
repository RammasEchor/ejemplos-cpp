#include <iostream>
#include "figura.h"

Figura::Figura()
{
    this->area = 0 ;
}

void Figura::calcularArea()
{
    std::cout << "No se como calcular el area." << std::endl ;
}

void Figura::imprimirArea()
{
    std::cout << "El area es: " << this->area << std::endl ;
}