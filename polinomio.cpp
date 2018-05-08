#include <iostream>
#include <cmath>

class Polinomio {
    private:
        int coefCuadratico ;
        int coefLinear ;
        int terIndep ;
        
    public:
        Polinomio( int coefCuadratico = 0, int coefLinear = 0, int terIndep = 0 );
        int operator()( int x );
        float operator~();
        
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

float Polinomio::operator~()    {
    float raiz ;
    
    raiz = ( ( -this->coefLinear ) + std::sqrt( ( this->coefLinear * this->coefLinear ) - ( 4 * this->coefCuadratico * this->coefLinear))) / 2 * ( this->coefCuadratico) ;
    
    return( raiz );
}

int main()
{
    Polinomio p1 ;
    
    std::cin >> p1 ;
    std::cout << "El polinomio: " << p1 ;
    std::cout << "La raiz de p: " << ~p1 << std::endl ; //p.operator~();
    std::cout << "Evaluado en 2: " << p1( 2 ) ;
}