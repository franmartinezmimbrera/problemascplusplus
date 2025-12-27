// fichero areacircunferencia.cpp 
// Este programa calcula el Área de una circunferencia
#include <iostream>
#include <cmath>      
#include <cstdlib>
const double PI_VALOR = 3.14159265358979323846; 
double AreaCircunferencia(double r){
    return PI_VALOR * std::pow(r, 2);
}
int main() {

    double radio;
    bool entrada_valida = false;
    while (!entrada_valida) {
        std::cout << "Introduce el radio de la circunferencia >0: ";
        if (!(std::cin >> radio)) {
            std::cout << "ERROR: La entrada no es un número válido.\n";
            continue;
        } 
        if (radio <= 0) {
            std::cout << "ERROR: El radio debe ser mayor que cero \n";
        } else {
            entrada_valida = true;
        }
    }
    std::cout << "El área de la circunferencia es: " << AreaCircunferencia(radio) << "\n";
    return EXIT_SUCCESS;
}