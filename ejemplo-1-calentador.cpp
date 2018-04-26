#include <iostream>

class Calentador    {
    
    private:
        int temperatura ;
        int incremento ;
        
    public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeCelsius() const ;
        void imprimeFahrenheit() const ;
        int accedeTemperatura() const ;
    
}; //punto y coma obligatorio

Calentador::Calentador()    {
    temperatura = 15 ;
    incremento = 3 ;
}

void Calentador::calentar() {
    if( temperatura + incremento <= 30 )    {
        temperatura += incremento ;
    }
}

void Calentador::enfriar()  {
    if( temperatura - incremento >= -10 )   {
        temperatura -= incremento ;
    }
}

void Calentador::imprimeCelsius() const  {
    std::cout << "La temperatura es: " << temperatura << std::endl ;
}

int Calentador::accedeTemperatura() const   {
    return( temperatura );
}

void Calentador::imprimeFahrenheit() const   {
    float fahrenheit = temperatura * 1.8 + 32 ;
    std::cout << "La temperatura es: " << fahrenheit 
                << " °F" << std::endl ;
}

int main()  {
    Calentador c1 ; //No necesita new Class() . Si no, se tiene que liberar despues la memoria.
    Calentador c2 ;
    
    for( int i = 0 ; i < 10 ; i++ ) {
        c1.calentar();
        c2.enfriar();
    }
    
    c1.imprimeCelsius();
    c2.imprimeCelsius();
    
    c1.imprimeFahrenheit();
    c2.imprimeFahrenheit();
    
}