// fichero escribefinal.cpp
#include <iostream>  
#include <fstream>   
#include <cstdlib>   

// Ejemplo para escribir al final de un fichero de texto 

int main() {
    
    std::ofstream fichero("datos.txt", std::ios::app); 

    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero datos.txt en modo append" << std::endl;
        return EXIT_FAILURE;
    }

    fichero << "Esta es la línea AÑADIDIDA al final (Append)" << std::endl;

    fichero.close(); 
    
    std::cout << "\nSe ha añadido una línea al final de 'datos.txt'." << std::endl;
    
    return EXIT_SUCCESS;
}