// fichero contarcar.cpp
#include <iostream>  
#include <fstream>   
#include <cstdlib>   
#include <cctype>    
// Ejemplo para contar caracteres y palabras 
int main() {
    std::ifstream fichero("datos.txt"); 
    int contador_caracteres = 0, contador_palabras = 0;
    int dentro_de_palabra = 0 , caracter; 
    if (!fichero.is_open()) {
        std::cerr << "Error al abrir fichero datos.txt" << std::endl;
        return EXIT_FAILURE; 
    }
    while ((caracter = fichero.get()) != EOF) {
        contador_caracteres++; 
        if (std::isspace(caracter)) {
            dentro_de_palabra = 0;
        } else {
            if (dentro_de_palabra == 0) {
                contador_palabras++; 
                dentro_de_palabra = 1; 
            }
        }
    }
    fichero.close();
    std::cout << "Total caracteres leídos: " << contador_caracteres << std::endl;
    std::cout << "Total palabras: " << contador_palabras << std::endl;    
    return EXIT_SUCCESS;
}