// frecuencia.cpp 
#include <iostream>
#include <string>
#include <vector>   
#include <cctype>   
#include <iomanip>  
int main() {
    std::string mensaje; std::vector<int> conteo(26, 0); int totalLetras = 0;
    std::cout << "Introduce el texto cifrado para analizar: ";    
    if (!std::getline(std::cin, mensaje)) {return EXIT_FAILURE;}
    for (char c : mensaje) {
        if (std::isalpha(c)) {
            int index = std::tolower(c) - 'a';
            conteo[index]++; totalLetras++;
        }
    }
    std::cout << "\n Analisis de Frecuencias \n";
    std::cout << "Total de letras analizadas: " << totalLetras << std::endl;
    if (totalLetras > 0) {
        std::cout << std::fixed << std::setprecision(2);
        for (int i = 0; i < 26; i++) {
            if (conteo[i] > 0) {
                double porcentaje = (static_cast<double>(conteo[i]) / totalLetras) * 100.0; char letra = static_cast<char>('A' + i);
                std::cout << "Letra '" << letra << "': " << conteo[i] << " veces (" << porcentaje << "%)" << std::endl;
            }
        }
    } else {
        std::cout << "No se encontraron letras." << std::endl;
    }
    return EXIT_SUCCESS;
}