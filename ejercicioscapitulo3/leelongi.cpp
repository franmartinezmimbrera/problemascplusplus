// fichero leelongi.cpp
//Este ejercicio lee una cadena desde teclado y dice la longitud y la concatena con otra.
#include <iostream> 
#include <string>  
#include <cstdlib>
int main() {
    std::string cadena;
    while (true) {        
        std::cout << "Introduzca cadena (o solo Enter para terminar): \n";
        if (!std::getline(std::cin, cadena)) {
            break; 
        }
        if (cadena.empty()) {
            break; 
        }
        size_t len = cadena.size();        
        std::cout << "La cadena contiene " << len << " caracteres. \n"; 
        cadena += ".txt";
        std::cout << "Concatenación: " << cadena << " \n";
    }
    return EXIT_SUCCESS;
}