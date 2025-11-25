// fichero capturar.cpp
// Este programa hace preguntas y con ello hace respuestas 
#include <iostream>
#include <string>
#include <cstdlib>
int main() {
    int   edad;
    float peso;

    std::string  color;
    std::cout << "Dinos tu Edad, peso y color favorito:\n";
    std::cout << "\n       Edad: ";
    if (!(std::cin >> edad)) {
        std::cout << "Error: La edad debe ser un número entero.\n";
        return EXIT_FAILURE; 
    }
    std::cout << "\n       Peso: ";
    if (!(std::cin >> peso)) {
        std::cout << "Error: El peso debe ser un número.\n";
        return EXIT_FAILURE;
    }
    std::cout << "\n Color favorito: ";
    std::getline(std::cin, color);
    std::cout << "El " << color << "!!! \n";
    std::cout << "¿Cómo puede gustarte el " << color;
    std::cout << " con " << edad  << " años y pesando " << peso << "Kg.?\n";
    return EXIT_SUCCESS;
}