#include <iostream>
#include "circulo.h"

Circulo::Circulo( float r )
{
    this->radio = r ;
}

void Circulo::calcularArea()
{
    this->area = 3.1416 * this->radio * this->radio ;
}