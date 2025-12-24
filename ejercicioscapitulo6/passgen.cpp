// passgen.cpp 
#include <iostream>
#include <string>
#include <random>  
#include <cstdlib>  
const std::string CHARSET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
int main() {
    int longitud;
    std::random_device rd;
    //mt19937: Un generador Mersenne Twister estándar de alta calidad.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<size_t> distribucion(0, CHARSET.length() - 1);
    std::cout << "Generador de contraseñas seguras " << std::endl;
    std::cout << "Introduce la longitud deseada: ";
    if (!(std::cin >> longitud) || longitud <= 0) {
        std::cerr << "Error: Longitud no válida." << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "Generando contraseña...: ";
    for (int i = 0; i < longitud; i++) {
        size_t index = distribucion(gen);
        std::cout << CHARSET[index];
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}