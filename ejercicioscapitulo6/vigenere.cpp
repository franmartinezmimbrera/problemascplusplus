// vigenere.cpp 
#include <iostream>
#include <string>
#include <cctype>   
#include <cstdlib>  
void cifrarVigenere(std::string &mensaje, const std::string &clave) {
    int j = 0; 
    size_t lenClave = clave.length();
    if (lenClave == 0) return;
    for (char &ch : mensaje) {
        if (std::isalpha(ch)) {
            char base = std::isupper(ch) ? 'A' : 'a';
            char k = std::toupper(clave[j % lenClave]) - 'A';
            ch = static_cast<char>((ch - base + k) % 26 + base);
            j++; 
        }
    }
}
int main() {
    std::string mensaje; std::string clave;
    std::cout << "Introduce el mensaje: ";
    if (!std::getline(std::cin, mensaje)) {
        return EXIT_FAILURE;
    }
    std::cout << "Introduce la palabra clave (solo letras): ";
    if (!(std::cin >> clave)) {
        return EXIT_FAILURE;
    }
    cifrarVigenere(mensaje, clave);
    std::cout << "\nMensaje Cifrado Vigenere: " << mensaje << std::endl;
    return EXIT_SUCCESS;
}