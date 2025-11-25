// fichero saludo.cpp */
// Este programa hace un saludo personalizado
#include <iostream>
#include <string>
#include <cstdlib>
int main() {

    std::string nombre;
    std::cout << "¡Hola! ¿Cómo te llamas?\n";
    std::getline(std::cin,nombre);
    std::cout << "¿Qué tal estás " <<  nombre << "?" << std::endl;
    
    return EXIT_SUCCESS;
}
