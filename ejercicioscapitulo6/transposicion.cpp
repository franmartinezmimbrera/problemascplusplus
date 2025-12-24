// transposicion.cpp 
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
int main() {
    std::string mensaje;
    int columnas;
    std::cout << "Introduce el mensaje (sin espacios): ";
    if (!(std::cin >> mensaje)) return EXIT_FAILURE;
    std::cout << "Introduce el numero de columnas (clave): ";
    if (!(std::cin >> columnas)) {
        std::cout << "\nError: Entrada no válida." << std::endl;
        return EXIT_FAILURE;
    }
    if (columnas < 1) {
       std::cout << "\nError: Las columnas deben ser al menos 1." << std::endl;
        return EXIT_FAILURE;
    }
    size_t len = mensaje.length();
    size_t filas = (len + columnas - 1) / columnas;
    std::string cifrado;
    cifrado.reserve(len);
    for (int c = 0; c < columnas; c++) {
        for (size_t f = 0; f < filas; f++) {
            size_t index = f * columnas + c;
            if (index < len) {
                cifrado += mensaje[index];
            }
        }
    }
    std::cout << "\nMensaje Original:    " << mensaje << std::endl;
    std::cout << "Mensaje Transpuesto: " << cifrado << std::endl;
    return EXIT_SUCCESS;
}