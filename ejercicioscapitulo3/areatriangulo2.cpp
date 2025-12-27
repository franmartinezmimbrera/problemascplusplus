// fichero areatriangulo2.cpp 
// Este programa calcula el área de un triángulo con la fórmula de Herón
#include <iostream>
#include <cmath>    
#include <cstdlib>
double AreaTrianguloHeron(double l1, double l2, double l3) {   
    double sp; 
    if (l1 <= 0 || l2 <= 0 || l3 <= 0 || l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {return 0.0f;}   
    sp = (l1 + l2 + l3) / 2.0f; 
    double area = std::sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));
    return area;
}
int main() {
    double l1x, l2x, l3x;
    std::cout << "Introduce lo que mide el primer lado del triángulo: ";
    if (!(std::cin >> l1x)) {
        std::cout << "ERROR: Entrada no válida (no es un número).\n";
        return EXIT_FAILURE;
    }
    std::cout << "Introduce lo que mide el segundo lado del triángulo: ";
    if (!(std::cin >> l2x)) {
        std::cout << "ERROR: Entrada no válida (no es un número).\n";
        return EXIT_FAILURE;
    }
    std::cout << "Introduce lo que mide el tercer lado del triángulo: ";
    if (!(std::cin >> l3x)) {
        std::cout << "ERROR: Entrada no válida (no es un número).\n";
        return EXIT_FAILURE;
    }
    double area_final = AreaTrianguloHeron(l1x, l2x, l3x);
    if (area_final > 0.0f) {std::cout << "El área del triángulo es: " << area_final << "\n";
    }else {std::cout << "Los lados introducidos NO forman un triángulo válido(la suma de 2 lados debe ser > que el tercero, y todos deben ser >=0)\n";}
    return EXIT_SUCCESS;}