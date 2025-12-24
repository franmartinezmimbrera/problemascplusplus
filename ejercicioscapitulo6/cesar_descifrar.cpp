// cesar_descifrar.cpp 
#include <iostream>
#include <string>
#include <cctype>   
#include <cstdlib>  
void descifrarCesar(std::string &mensaje, int desplazamiento) {
    for (char &ch : mensaje) {
        if (std::isalpha(ch)) {
            char base = std::isupper(ch) ? 'A' : 'a';
            int valor_descifrado = (ch - base - desplazamiento + 26) % 26 + base;            
            ch = static_cast<char>(valor_descifrado);
        }
    }
}
int main() {
    std::string mensaje;
    int n = 0;
    std::cout << "Introduce el mensaje cifrado: ";
    if (!std::getline(std::cin, mensaje)) {
        return EXIT_FAILURE;
    }
    std::cout << "Introduce la clave original (n): ";
    if (!(std::cin >> n)) {
        std::cout << "\nError: La clave debe ser un número entero.\n";
        return EXIT_FAILURE; 
    }
    descifrarCesar(mensaje, n % 26);
    std::cout << "\nMensaje Descifrado: " << mensaje << std::endl;
    return EXIT_SUCCESS;
}