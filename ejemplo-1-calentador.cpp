#include <iostream>

class Calentador    {
    
    private:
        int temperatura ;
        
    public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeTemperatura();
    
}; //punto y coma obligatorio

Calentador::Calentador()    {
    temperatura = 15 ;
}

void Calentador::calentar() {
    temperatura += 5 ;
}

void Calentador::enfriar()  {
    temperatura -= 5 ;
}

void Calentador::imprimeTemperatura()   {
    std::cout << "La temperatura es: " << temperatura << std::endl ;
}

int main()  {
    Calentador c1 ; //No necesita new Class() . Si no, se tiene que liberar despues la memoria.
    Calentador c2 ;
    
    c1.calentar();
    c2.enfriar();
    
    c1.imprimeTemperatura();
    c2.imprimeTemperatura();
}