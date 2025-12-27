// fichero creafiche.cpp
#include <iostream>  
#include <fstream>   
#include <cstdlib>   
#include <iomanip>   

// Ejemplo para crear/escribir ficheros

int main() {
    
    std::ofstream fichero("datos.txt"); 

    if (!fichero.is_open()) {
        std::cerr << "Error al abrir/crear el fichero datos.txt" << std::endl;
        return EXIT_FAILURE;
    }

    fichero << "Esta es la primera línea." << std::endl;
    fichero << "El número PI es aproximadamente " 
            << std::fixed << std::setprecision(4) << 3.14159 << std::endl;
    fichero << "Tercera línea de ejemplo." << std::endl;

    fichero.close();

    std::cout << "El archivo 'datos.txt' fue creado y escrito correctamente." << std::endl;

    return EXIT_SUCCESS;
}