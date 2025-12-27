// fichero raizenesima.cpp
// Este programa calcula la raíz n-ésima de un número 
#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {

    double numero, resultado; int exponente; 
    std::cout << "Introduce el número a cálcular la raíz: ";
    if (!(std::cin >> numero)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 

    std::cout << "Introduce exponente de raíz(un entero, ej: 2, 3..):";
    if (!(std::cin >> exponente)) {
        std::cout << "Error: El valor debe de ser un número entero.\n";
        return EXIT_FAILURE; 
    } 
    if (exponente == 0) {
        std::cout << "Error: El exponente de la raíz no puede ser 0\n";
        return EXIT_FAILURE;
    }
    if (numero < 0.0 && exponente % 2 == 0) {
        std::cout << "Error: Imposible cálculo de raíz par de un número < 0 en R\n";
        return EXIT_FAILURE;
    }

    resultado = pow(fabs(numero), 1.0 / exponente);
    if (numero < 0.0 && exponente % 2 != 0) {
        resultado = -resultado;
    }

    std::cout << "La raíz " << exponente << " ésima de " << numero << " es: " << resultado << std::endl;    

    return EXIT_SUCCESS;
}