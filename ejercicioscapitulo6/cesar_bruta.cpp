// cesar_bruta.cpp 
#include <iostream>
#include <string>
#include <cctype>   
#include <cstdlib>  
#include <iomanip>  
void imprimirIntento(const std::string &mensaje, int key) {
    std::cout << "Clave " << std::setw(2) << key << ": ";
    for (char ch : mensaje) {
        if (std::isalpha(ch)) {
            char base = std::isupper(ch) ? 'A' : 'a';
            char descifrado = static_cast<char>((ch - base - key + 26) % 26 + base);
            std::cout << descifrado;
        } else {
            std::cout << ch;
        }
    }
    std::cout << std::endl; 
}
int main() {
    std::string mensaje;
    std::cout << "Introduce el texto cifrado para atacar por fuerza bruta: ";   
    if (!std::getline(std::cin, mensaje)) {
        return EXIT_FAILURE;
    }
    std::cout << "\n Resultados del Criptoanalisis \n" << std::endl;
    for (int k = 1; k < 26; k++) {
        imprimirIntento(mensaje, k);
    }

    return EXIT_SUCCESS;
}