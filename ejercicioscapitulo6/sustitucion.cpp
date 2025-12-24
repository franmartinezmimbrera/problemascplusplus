// sustitucion.cpp 
#include <iostream>
#include <string>
#include <cctype>  
#include <cstdlib>  
const std::string ALFABETO_NORMAL = "abcdefghijklmnopqrstuvwxyz";
const std::string ALFABETO_CLAVE  = "qwertyuiopasdfghjklzxcvbnm";
void cifrarSustitucion(std::string &mensaje) {
    for (char &c : mensaje) {
        if (std::isalpha(c)) {
            bool esMayuscula = std::isupper(c);
            char ch_lower = std::tolower(c);
            size_t posicion = ALFABETO_NORMAL.find(ch_lower);            
            if (posicion != std::string::npos) {
                char sustituto = ALFABETO_CLAVE[posicion];
                c = esMayuscula ? std::toupper(sustituto) : sustituto;
            }
        }
    }
}
int main() {
    std::string mensaje;
    std::cout << "Alfabeto Clave: " << ALFABETO_CLAVE << std::endl;
    std::cout << "Introduce el mensaje a cifrar: ";
    if (!std::getline(std::cin, mensaje)) {
        return EXIT_FAILURE;
    }
    cifrarSustitucion(mensaje);
    std::cout << "Mensaje con Sustitucion: " << mensaje << std::endl;
    return EXIT_SUCCESS;
}
