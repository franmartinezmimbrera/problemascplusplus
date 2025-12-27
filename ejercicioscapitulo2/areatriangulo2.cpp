// fichero areatriangulo2.cpp 
// Este programa calcula el Área de un triángulo equilátero a partir de uno de sus lados
#include <iostream>
#include <cmath> 
#include <cstdlib>

int main() {

    double l, area;
    std::cout << "Introduce un lado del triángulo equilátero: ";
    
    if (!(std::cin >> l)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (l <= 0) {
        std::cout << "Error: El valor debe ser un número mayor que 0.\n";
        return EXIT_FAILURE;
    }    
    
    area = (std::sqrt(3.0) / 4.0) * l * l;    
    std::cout << "El Área del triángulo equilátero de lado " << l << " es: " << area << "\n";
    
    return EXIT_SUCCESS;
}