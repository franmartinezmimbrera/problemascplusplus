// fichero ladotriangulo.cpp
// Este programa calcula el valor del lado a de un triángulo rectángulo usando el valor del lado b y la hipotenusa h 

#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {

    double a, b, h;

    std::cout << "Introduzca el valor del lado \"b\" del triángulo rectángulo: "; 
    if (!(std::cin >> b)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (b <= 0) {
        std::cout << "Error: El lado 'b' debe ser un número mayor que 0.\n";
        return EXIT_FAILURE;
    }

    std::cout << "Introduzca el valor de la hipotenusa del triángulo rectángulo: "; 
    if (!(std::cin >> h)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    }     
    if (h <= 0) {
        std::cout << "Error: La hipotenusa debe ser un número mayor que 0.\n";
        return EXIT_FAILURE;
    }
    if (b >= h) {
        std::cout << "Error: La hipotenusa (" << h << ") debe ser mayor que el cateto 'b' (" << b << ").\n";
        return EXIT_FAILURE;
    }

    a = std::sqrt((h * h) - (b * b));

    std::cout << "El valor del lado \"a\" del triángulo rectángulo es: " << a << "\n";

    return EXIT_SUCCESS;
}