#include <iostream>

template <typename Tipo>
class Pila
{
    private:
        int tope ;
        Tipo *arreglo ;
        int max ;
        
    public:
        Pila( int tam );
        ~Pila(); //destructor
        void push( Tipo dato );
        Tipo pop();
};

template <typename Tipo>
Pila<Tipo>::Pila( int tam )
{
    this->tope = 0 ;
    this->max = tam ;
    arreglo = new Tipo[this->max];
}

template <typename Tipo>
Pila<Tipo>::~Pila()
{
    delete [ ] arreglo ;
}

template <typename Tipo>
void Pila<Tipo>::push( Tipo dato );
{
    //Tarea   
}

template <typename Tipo>
Tipo Pila<Tipo>::pop();
{
    //Tarea
}

int main()
{
    Pila <int> miPila {5};
    
    miPila.push( 3 );
    miPila.push( 7 );
    
    int x = miPila.pop();
    
    std::cout << x << std::endl ;
    x = miPila.pop();
    std::cout << x << std::endl ;
    x = miPila.pop();
    std::cout << x << std::endl ;
}

