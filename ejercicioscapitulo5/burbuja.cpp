// fichero burbuja.cpp 
#include <iostream>
#include <vector> 
#include <utility>
#include <cstdlib>
template <typename T>
// La función Ordenación burbuja de vector 
void ordenar_burbuja(std::vector<T>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {            
            if (vec[j] > vec[j + 1]) {
              // Intercambio usando la función std::swap de la biblioteca estándar
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}
int main() {
    std::vector<int> numeros = {10, 7, 8, 9, 1, 5}; 
    std::cout << "\nConjunto original: ";
    for (int x : numeros) {
        std::cout << x << " ";
    }
    ordenar_burbuja(numeros); 
    std::cout << "Conjunto ordenado (Bubble Sort): ";
    for (int x : numeros) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}