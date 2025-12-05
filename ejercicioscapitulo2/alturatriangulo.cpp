// fichero alturatriangulo.cpp 
// Este programa calcula la altura de un triángulo equilatero
#include <iostream>
#include <cmath>
#include <cstdlib>
int main() {
    double l,h;
    std::cout<<"Introduzca lado de un triángulo equilátero: "; 
    if (!(std::cin >> l)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (l <= 0) {
        std::cout << "Error: El lado de un triángulo equilátero debe ser un número mayor que 0.\n";
        return EXIT_FAILURE;
    }
    h= (std::sqrt(3)*l)/2 ;
    std::cout<<"La altura de un triángulo equilátero de lado " << l << " es: " << h << "\n";
    return EXIT_SUCCESS;
}
