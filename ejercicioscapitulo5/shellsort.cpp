// fichero shellsort.cpp 
#include <iostream>   
#include <vector>     
#include <cstdlib>    

template <typename T>
// Implementación del algoritmo Shellsort usando la secuencia de Knuth (3*h + 1)
void shellsort_knuth(std::vector<T>& arr) {

    int n = arr.size();
    int h;

    h = 1;
    while (h < n / 3) {
        h = 3 * h + 1;
    }
    while (h >= 1) {
     
        for (int i = h; i < n; i++) {
            T temp = arr[i]; 
            int j;
            
            for (j = i; j >= h && arr[j - h] > temp; j -= h) {
                arr[j] = arr[j - h]; 
            }
            arr[j] = temp; 
        }
        h = h / 3;
    }
}

int main() {
    std::vector<int> datos = {90, 8, 70, 6, 50, 4, 30, 2, 10, 0, 85, 15, 65, 35};

    std::cout << "Array original desordenado:\n";
    for (int x : datos) { 
        std::cout << x << " ";
    }
    std::cout << "\n";

    shellsort_knuth(datos);

    std::cout << "\nArray ordenado con Shellsort (Knuth):\n";
     for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    
    return EXIT_SUCCESS;
}