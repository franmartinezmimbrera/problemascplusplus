//fichero sumaparesimpares.cpp
// Calcula la suma de 10 números pasados por teclado distinguiendo entre los pares e impares 
#include <iostream> 
#include <vector>  
#include <numeric> 
#include <cstdlib>
#include <limits>
constexpr int TAMANO_ARRAY = 10; 

int main() { 

    std::vector<int> numeros(TAMANO_ARRAY); 
    long long suma_pares = 0;
    long long suma_impares = 0;
    std::cout << "Por favor, introduce " << TAMANO_ARRAY << " números enteros:\n";    
    for (int i = 0; i < TAMANO_ARRAY; i++) {
        std::cout << "Número " << i + 1 << ": ";
        if (!(std::cin >> numeros[i])) { 
            std::cerr << "Error en la lectura o entrada no válida. Terminando...\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return EXIT_FAILURE;
        }
    }
    for (const int& numero_actual : numeros) { 
        if (numero_actual % 2 == 0) {
            suma_pares += numero_actual;
            std::cout << "Añadiendo " << numero_actual << " a la suma par.\n";
        } else {
            suma_impares += numero_actual;
            std::cout << "Añadiendo " << numero_actual << " a la suma impar.\n";
        }
    }

    std::cout << "Números ingresados: [";
    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i];
        if (i < numeros.size() - 1) {
            std::cout << ", ";
        }
    }

    std::cout << "]\n";
    std::cout << "Suma total de los números PARES: " << suma_pares << "\n";
    std::cout << "Suma total de los números IMPARES: " << suma_impares << "\n";

    return EXIT_SUCCESS;
}