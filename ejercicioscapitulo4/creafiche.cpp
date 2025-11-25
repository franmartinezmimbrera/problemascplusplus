// fichero creafiche.cpp
#include <iostream>  
#include <fstream>   
#include <cstdlib>   
#include <iomanip>   

// Ejemplo para crear/escribir ficheros

int main() {
    
    std::ofstream archivo("datos.txt"); 

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir/crear el archivo datos.txt" << std::endl;
        return EXIT_FAILURE;
    }

    archivo << "Esta es la primera línea." << std::endl;
    archivo << "El número PI es aproximadamente " 
            << std::fixed << std::setprecision(4) << 3.14159 << std::endl;
    archivo << "Tercera línea de ejemplo." << std::endl;

    archivo.close();

    std::cout << "El archivo 'datos.txt' fue creado y escrito correctamente." << std::endl;

    return EXIT_SUCCESS;
}