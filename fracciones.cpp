#include <iostream>

class Fraccion  {
    private:
        int numerador ;
        int denominador ;
        
    public:
        Fraccion( int numerador = 1, int denominador = 1 );
        Fraccion operator+( Fraccion f1 );
        Fraccion operator-( Fraccion f1 );
        Fraccion operator*( Fraccion f1 );
        Fraccion operator/( Fraccion f1 );
        void imprimeFraccion();
};

Fraccion::Fraccion( int numerador, int denominador )  {
    this->numerador = numerador ;
    this->denominador = denominador ;
}

Fraccion Fraccion::operator+( Fraccion f1 )   {
    Fraccion f3 ;
    
    f3.numerador = ( this->numerador * f1.denominador ) + ( this->denominador * f1.numerador );
    f3.denominador = ( this->denominador * f1.denominador );
    
    return( f3 );
}

Fraccion Fraccion::operator-( Fraccion f1 )    {
    Fraccion f3 ;
    
    f3.numerador = ( this->numerador * f1.denominador ) - ( this->denominador * f1.numerador );
    f3.denominador = ( this->denominador * this->numerador );
    
    return( f3 );
}

Fraccion Fraccion::operator*( Fraccion f1 )   {
    Fraccion f3 ;
    
    f3.numerador = this->numerador * f1.numerador ;
    f3.denominador = this->denominador * f1.denominador ;
    
    return( f3 );
}

Fraccion Fraccion::operator/( Fraccion f1 )   {
    Fraccion f3 ;
    
    f3.numerador = this->numerador * f1.denominador ;
    f3.denominador = this->denominador * f1.numerador ;
    
    return( f3 );
}

void Fraccion::imprimeFraccion()   {
    int num = this->numerador ;
    int den = this->denominador ;
    std::cout << num << "/" << den << std::endl ;
}

int main()
{
 Fraccion f1{ 1, 2 };
 f1.imprimeFraccion();
 
 Fraccion f2{ 3, 4 };
 f2.imprimeFraccion();
 
 Fraccion f3{};
 f3 = f1 + f2 ;
 
 f3.imprimeFraccion();
    
}