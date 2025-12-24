// xor_cifra_descifra.cpp 
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>  
#include <cstdlib>  
void xorCifrado(std::string &mensaje, const std::string &clave) {
    size_t lenClave = clave.length();
    for (size_t i = 0; i < mensaje.length(); i++) {
        mensaje[i] ^= clave[i % lenClave];
    }
}
int main() {
    std::string mensaje; std::string clave;
    std::cout << "Introduce el texto: ";
    if (!std::getline(std::cin, mensaje)) return EXIT_FAILURE;
    std::cout << "Introduce la clave: ";
    if (!std::getline(std::cin, clave)) return EXIT_FAILURE;
    if (clave.empty()) {
        std::cerr << "Error: La clave no puede estar vacía." << std::endl;
        return EXIT_FAILURE;
    }
    xorCifrado(mensaje, clave);
    std::cout << "Texto Cifrado (hex): ";
    std::cout << std::hex << std::uppercase << std::setfill('0');
    for (unsigned char c : mensaje) {
        std::cout << std::setw(2) << static_cast<int>(c) << " ";
    }
    xorCifrado(mensaje, clave);
    std::cout << "Texto Descifrado (original): " << mensaje << std::endl;
    return EXIT_SUCCESS;
}