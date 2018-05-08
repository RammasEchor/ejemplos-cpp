#include <iostream>

class Polinomio {
    private:
        int coefCuadratico ;
        int coefLinear ;
        int terIndep ;
        
    public:
        Polinomio( int coefCuadratico = 0, int coefLinear = 0, int terIndep = 0 );
        int operator()( int x );
        
    friend void operator<<( std::ostream &salida, Polinomio p );
    friend void operator>>( std::istream &entrada, Polinomio &p );
};

Polinomio::Polinomio( int coefCuadratico, int coefLinear, int terIndep )    {
    this->coefCuadratico = coefCuadratico ;
    this->coefLinear = coefLinear ;
    this->terIndep = terIndep ;
}

int Polinomio::operator()( int x )   {
    int res = 0 ;
    
    res += this->coefCuadratico * ( x * x );
    res += this->coefLinear * x ;
    res += this->terIndep ;
    
    return( res );
}

void operator<<( std::ostream &salida, Polinomio p ) {
    salida << p.coefCuadratico << "x^2 + " << p.coefLinear << "x + " << p.terIndep << std::endl ;
}

void operator>>( std::istream &entrada, Polinomio &p )  {
    entrada >> p.coefCuadratico ;
    entrada >> p.coefLinear ;
    entrada >> p.terIndep ;
}

int main()
{
    Polinomio p1 ;
    
    std::cin >> p1 ;
    std::cout << "El polinomio: " << p1 ;
    std::cout << "Evaluado en 2 : " << p1( 2 ) ;
}