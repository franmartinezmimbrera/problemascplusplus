// fichero conteo.cpp 
// Este ejercicio nos presenta la conversión de cadenas a letras mayúsculas y contar sus vocales

#include <iostream> 
#include <cctype>   
#include <climits>  
#include <cstdlib>

constexpr int NUM_FRASES = 4;     
constexpr int MAX_LONGITUD = 100; 

void convertir_a_mayusculas(char s[]) {

    int i = 0;

    while (s[i] != '\0') {
        s[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[i])));
        i++;
    }

}

int contar_vocales(const char s[]) {

    int contador = 0;
    int i = 0;
    
    while (s[i] != '\0') {
        switch (s[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                contador++;
                break;
        }
        i++;
    }

    return contador;

}

int main() {
 
    char lista_frases[NUM_FRASES][MAX_LONGITUD];
    int total_vocales = 0;
    std::cout << "Introduce " << NUM_FRASES << " frases/líneas de texto:\n";
    
    for (int i = 0; i < NUM_FRASES; i++) {
        std::cout << "Frase " << i + 1 << ": ";        
        std::cin.getline(lista_frases[i], MAX_LONGITUD);
        if (std::cin.fail() && !std::cin.eof()) {
            std::cerr << "Error en la lectura. Terminando...\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return EXIT_FAILURE;
        }
    }

    std::cout << "\n--- Procesamiento y Conteo ---\n";
    for (int i = 0; i < NUM_FRASES; i++) {
        convertir_a_mayusculas(lista_frases[i]);
        int vocales_frase = contar_vocales(lista_frases[i]);
        total_vocales += vocales_frase;
        std::cout << "Frase " << i + 1 << " (MAYÚS): '" << lista_frases[i] 
                  << "' -> Vocales contadas: " << vocales_frase << "\n";
    }

    std::cout << "\n--- Resumen Final ---\n";
    std::cout << "El número total de vocales en todas las frases es: " << total_vocales << "\n";

    return EXIT_SUCCESS;
}