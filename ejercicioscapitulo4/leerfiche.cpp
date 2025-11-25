// fichero leerfiche.cpp
#include <iostream>   
#include <fstream>    
#include <string>     
#include <cstdlib>    

// Ejemplo para leer ficheros de texto 

int main() {
    
    std::ifstream archivo("datos.txt"); 
    std::string linea;

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo datos.txt" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "\nContenido de 'datos.txt':" << std::endl;
    
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }

    archivo.close(); 
    
    return EXIT_SUCCESS;
}