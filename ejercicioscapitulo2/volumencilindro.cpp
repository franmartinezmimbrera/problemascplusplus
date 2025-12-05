// fichero volumencilindro.cpp 
#include <iostream>
#include <cmath> 
#include <cstdlib>
constexpr double PI = 3.14159265358979323846; 
int main() {
    double D, H, R, V;
    std::cout << "Introduzca el diámetro, en metros: ";
    if (!(std::cin >> D)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    } 
    std::cout << "Introduzca la altura, en metros: ";
    if (!(std::cin >> H)) {
        std::cout << "Error: El valor debe ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if ((H <= 0) || (D<=0)) {
        std::cout << "Error: El diámetro y la altura debe ser un número > que 0\n";
        return EXIT_FAILURE;
    }    
    R = D / 2.0;  V = PI * R * R * H;
    std::cout << "El volumen del cilindro es de " << V << " m^3\n"; 
    return EXIT_SUCCESS;
}