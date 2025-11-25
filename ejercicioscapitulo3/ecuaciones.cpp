// fichero ecuaciones.cpp 
// Este programa resuelve ecuaciones de segundo grado por la fórmula general para números reales 
#include <iostream>
#include <cmath>
#include <cstdlib>
int main(void) {

    double a,b,c,d;
    double x1,x2;

    do {
        std::cout << "Ingrese coeficiente a: ";
        if (!(std::cin >> a)) {
            std::cerr << "Error: la entrada no es un número válido\n";
            return EXIT_FAILURE;
        }
        if (a == 0)
            std::cout << "El coeficiente 'a' no puede ser cero.\n";
    } while (a == 0);

    std::cout<<"Ingrese coeficiente b: ";
    if (!(std::cin>>b)){
        std::cerr<<"Error: la entrada no es un número válido" <<std::endl;
        return EXIT_FAILURE;
    };    
    std::cout<<"Ingrese coeficiente c: ";
    if (!(std::cin>>c)){
        std::cerr<<"Error: la entrada no es un número válido" <<std::endl;
        return EXIT_FAILURE;
    };    

    d = pow(b, 2)-4*a*c;
    if (d > 0) {
       x1 = (-b+sqrt(d))/(2*a);
       x2 = (-b-sqrt(d))/(2*a);
       std::cout<<"x1 = "<<x1 <<"\n";
       std::cout<<"x2 = " <<x2 <<"\n";
    }   
    else if (d == 0) {
        x1 = (-b)/(2*a);
        std::cout<<"x1 = "<< x1 <<"\n";
    }
    else
        std::cout<<"La ecuacion no tiene soluciones reales \n";

    return EXIT_SUCCESS;
}   
