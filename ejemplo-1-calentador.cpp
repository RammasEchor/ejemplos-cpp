#include <iostream>

class Calentador    {
    
    private:
        int temperatura ;
        int incremento ;
        int min ;
        int max ;
        
    public:
        Calentador( int min, int max, int temperatura = 0 );
        void operator++();
        void operator--();
        void imprimeCelsius() const ;
        void imprimeFahrenheit() const ;
        int accedeTemperatura() const ;
        bool operator==( Calentador otro ); //sobrecarga de metodo miembro
    
}; //punto y coma obligatorio

Calentador::Calentador( int min, int max, int temperatura )    {
    if( temperatura >= min && temperatura <= max )  {
        this->temperatura = temperatura ;
    }
    else    {
        this->temperatura = min ;
    }
    
    if( max < min ) {
        std::cout << "Error en el rango min-max." << std::endl ;
        std::exit( EXIT_FAILURE );
        
       // throw "Error en el rango min-max." ;
    }
    
    incremento = 3 ;
    this->min = min ;
    this->max = max ;
}

void Calentador::operator++() {
    if( temperatura + incremento <= this->max )    {
        temperatura += incremento ;
    }
}

void Calentador::operator--()  {
    if( temperatura - incremento >= this->min )   {
        temperatura -= incremento ;
    }
}

void Calentador::imprimeCelsius() const  {
    std::cout << "La temperatura es: " << temperatura << " °C" << std::endl ;
}

int Calentador::accedeTemperatura() const   {
    return( temperatura );
}

void Calentador::imprimeFahrenheit() const   {
    float fahrenheit = temperatura * 1.8 + 32 ;
    std::cout << "La temperatura es: " << fahrenheit 
                << " °F" << std::endl ;
}

bool Calentador::operator==( Calentador otro )  {
    if( this->temperatura == otro.temperatura ) {
        return( true );
    }
    else    {
        return( false );
    }
}

int main()  {
    
    //try {
    Calentador c1 { -10, 10,  } ; //No necesita new Class() . Si no, se tiene que liberar despues la memoria.
    Calentador c2 { 0, 30, 10 } ;
    
    for( int i = 0 ; i < 3 ; i++ ) {
        ++c1; //ci.operator++();
        --c2; //c2++ es equivalente a c2.operator--();
    }
    
    if( c1 == c2 )  {
        std::cout << "Iguales." << std::endl ;
    }
    else    {
        std::cout << "Diferentes." << std::endl ;
    }
    
    c1.imprimeCelsius();
    c2.imprimeCelsius();
    
    c1.imprimeFahrenheit();
    c2.imprimeFahrenheit();
    /*}
    
    catch( const std::runtime_error &e )*/
}