// fichero pesetaseuros.cpp 
// Este programa realiza la conversión de pesetas a euros
#include <iostream>
#include <iomanip> 
#include <cstdlib>
const double TASA_CONVERSION = 166.386; 

int main() {

    double euros;
    double pesetas;

    std::cout << "Introduzca su valor en pesetas: ";
    if (!(std::cin >> pesetas)) {
        std::cout << "ERROR: La entrada no es un número válido." << std::endl;        
        return EXIT_FAILURE; 
    }
    if (pesetas < 0.0) {
        std::cout << "ERROR: El valor en pesetas no puede ser negativo." << std::endl;
        return EXIT_FAILURE;
    }

    euros = pesetas / TASA_CONVERSION;
    
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Su valor de " << pesetas << " pesetas equivale a: " << euros << " euros" << std::endl;  
    
    return EXIT_SUCCESS; 
}