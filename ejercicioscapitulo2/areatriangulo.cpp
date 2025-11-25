// fichero areatriangulo.cpp //
// Calculamos el área de un triáungulo mediante la fórmula de Herón
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
int main() {
    double l1,l2,l3,area,sp;
    std::cout<<"Introduce lo que mide el primer lado del triángulo: ";
    if (!(std::cin >> l1)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (l1 < 0) {
        std::cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
    }
    std::cout<<"Introduce lo que mide el segundo lado del triángulo: ";
    if (!(std::cin >> l2)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (l2 < 0) {
        std::cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
    }
    std::cout<<"Introduce lo que mide el tercer lado del triángulo: ";
    if (!(std::cin >> l3)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (l3 < 0) {
        std::cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
    }
    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {
        std::cout << "\nError: Las longitudes (" << l1 << ", " << l2 << ", " << l3 << ") no forman un triángulo válido (desigualdad triangular).\n";
        return EXIT_FAILURE;
    }
    sp=(l1+l2+l3)/2;
    area=std::sqrt((sp*(sp-l1)*(sp-l2)*(sp-l3)));
    std::cout << std::fixed << std::setprecision(4);
    std::cout<<"El area del triángulo es: "<< area <<std::endl;    
    return EXIT_SUCCESS;
}
