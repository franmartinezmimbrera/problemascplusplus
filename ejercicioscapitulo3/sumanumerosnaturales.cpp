// fichero sumanumerosnaturales.cpp 
// Este programa calcula la suma de los "n" primeros números naturales con for,
#include <iostream>
#include <cmath>  
#include <cstdlib>
int main() {
    long long numero;
    long long suma = 0; 
    bool entrada_valida = false;
    while (!entrada_valida) {
        std::cout << "Introduzca un número n >0 de términos a sumar: ";
        if (!(std::cin >> numero)) {
            std::cout << "ERROR:La entrada no es un número entero válido.\n";
            continue; 
        }
        if (numero <= 0) {
            std::cout << "ERROR:El número de términos debe ser >0.\n";
        } else {entrada_valida = true;}
    }
    for(int i = 1; i <= numero; i++){
        suma = suma + i;
    }
    std::cout << "La suma de los " << numero << " primeros números naturales es: " << suma << "\n";
    return EXIT_SUCCESS;
}