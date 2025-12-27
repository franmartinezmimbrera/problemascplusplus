// fichero leerfiche.cpp
#include <iostream>   
#include <fstream>    
#include <string>     
#include <cstdlib>    

// Ejemplo para leer ficheros de texto 

int main() {
    
    std::ifstream fichero("datos.txt"); 
    std::string linea;

    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero datos.txt" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "\nContenido de 'datos.txt':" << std::endl;
    
    while (std::getline(fichero, linea)) {
        std::cout << linea << std::endl;
    }

    fichero.close(); 
    
    return EXIT_SUCCESS;
}