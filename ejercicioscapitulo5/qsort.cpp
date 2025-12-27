// fichero qsort.cpp 
#include <iostream>
#include <vector>   
#include <utility>  
#include <cstdlib>

template <typename T>
int particion(std::vector<T>& arr, int bajo, int alto) {
    
    T pivote = arr[alto];
    int i = (bajo - 1); 

    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] <= pivote) {
            i++; 
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[alto]);
    return (i + 1);
}

// Función 'quicksort' 

template <typename T>
void quicksort(std::vector<T>& arr, int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);
        quicksort(arr, bajo, pi - 1);  
        quicksort(arr, pi + 1, alto); 
    }
}

int main() {

    std::vector<int> datos = {10, 70, 8, 90, 1000, 5};
    int n = datos.size(); 

    std::cout << "Vector original: ";
    for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    quicksort(datos, 0, n - 1);

    std::cout << "Vector ordenado con Quicksort: ";
    for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    return EXIT_SUCCESS;
}