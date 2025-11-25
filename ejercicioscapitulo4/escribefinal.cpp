// fichero escribefinal.cpp
#include <iostream>  
#include <fstream>   
#include <cstdlib>   

// Ejemplo para escribir al final de un fichero de texto 

int main() {
    
    std::ofstream archivo("datos.txt", std::ios::app); 

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo datos.txt en modo append" << std::endl;
        return EXIT_FAILURE;
    }

    archivo << "Esta es la línea AÑADIDIDA al final (Append)" << std::endl;

    archivo.close(); 
    
    std::cout << "\nSe ha añadido una línea al final de 'datos.txt'." << std::endl;
    
    return EXIT_SUCCESS;
}