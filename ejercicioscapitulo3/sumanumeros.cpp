// fichero sumanumeros.cpp 
// Este programa calcula la suma de los números introducidos por teclado mientras no se introduzca el número -50
#include <iostream>
#include <limits>
#include <cstdlib>
int main() {
    double numero,suma = 0.0; 
    do {        
        std::cout << "Introduzca número a sumar (o -50 para terminar): ";
        if (!(std::cin >> numero)) {
            std::cout << "ERROR: La entrada no es un número válido. Inténtelo de nuevo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            numero = 0.0; 
            continue; 
        }
        if (numero != -50.0){ suma = suma + numero;}   
    } while (numero != -50.0);
    std::cout << "La suma total de los números introducidos es: " << suma << std::endl;    
    return EXIT_SUCCESS;
}