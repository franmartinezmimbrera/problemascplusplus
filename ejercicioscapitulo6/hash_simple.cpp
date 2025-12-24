// hash_simple.cpp 
#include <iostream>
#include <string>
#include <cstdlib>  

unsigned long generarHashKR(const std::string &str) {
    unsigned long hashval = 0;
    for (char c : str) {
        hashval = c + 31 * hashval;
    }
    return hashval;
}

int main() {
    std::string entrada;
    std::cout << "Introduce un texto para generar su Hash (K&R): ";
    if (!std::getline(std::cin, entrada)) {
        return EXIT_FAILURE;
    }
    unsigned long hashValue = generarHashKR(entrada);
    
    std::cout << "Entrada: " << entrada << std::endl;
    std::cout << "Hash calculado (Hex): " << std::hex << std::uppercase << hashValue << std::endl;
    std::cout << "Hash calculado (Dec): " << std::dec << hashValue << std::endl;

    return EXIT_SUCCESS;
}