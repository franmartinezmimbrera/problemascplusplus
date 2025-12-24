// cesar_cifrar.cpp 
#include <iostream>
#include <string>
#include <cctype>   
#include <cstdlib>  
void cifrarCesar(std::string &mensaje, int desplazamiento) {
    for (char &ch : mensaje) {
        if (std::isalpha(ch)) {
            char base = std::isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + desplazamiento) % 26 + base);
        }
    }
}
int main() {
    std::string mensaje;
    int n;
    std::cout << "Introduce el mensaje a cifrar: ";
    if (!std::getline(std::cin, mensaje)) {
        return EXIT_FAILURE;
    }
    std::cout << "Introduce el desplazamiento (clave n): ";
    if (!(std::cin >> n)) {
        std::cout << "\nError: La clave debe ser un número entero.\n";
        return EXIT_FAILURE; 
    }
    n = n % 26;
    cifrarCesar(mensaje, n);
    std::cout << "\nMensaje Cifrado: " << mensaje << std::endl;
    return EXIT_SUCCESS;
}