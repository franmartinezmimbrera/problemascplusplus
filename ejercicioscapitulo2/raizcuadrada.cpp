// fichero raizcuadrada.cpp 
// Este programa calcula la raíz cuadrada de un número
#include <iostream>
#include <cmath>
#include <cstdlib>
int main() {
    double numero,resultado;
    std::cout<<"Introduce el número a calcular la raíz cuadrada: ";
    if (!(std::cin >> numero)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (numero < 0) {
        std::cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
    }
    resultado=std::sqrt(numero);    
    std::cout<<"La raíz cuadrada de " << numero <<" es: "<< resultado <<"\n";
    return EXIT_SUCCESS;
}
