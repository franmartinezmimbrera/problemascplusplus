// fichero bbinaria.cpp
#include <iostream>  
#include <vector>    
#include <cstdlib>   
#include <algorithm> 

//Realiza la Búsqueda Binaria en un vector de datos ordenado.
template <typename T>
int busqueda_binaria(const std::vector<T>& arr, T objetivo) {
    int bajo = 0;          
    int alto = arr.size() - 1; 
    int medio;
    while (bajo <= alto) {
        medio = bajo + (alto - bajo) / 2;
        if (arr[medio] == objetivo) {
            return medio;
        }
        else if (arr[medio] < objetivo) {
            bajo = medio + 1; 
        }
        else { 
            alto = medio - 1; 
        }
    }
    return -1;
}

int main() {
   
    std::vector<int> datos_ordenados = {5, 8, 12, 15, 20, 30, 40}; 
    int objetivo1 = 20;
    int objetivo2 = 25;
    int indice;

    std::cout << "Conjunto de datos (Ordenado): {5, 8, 12, 15, 20, 30, 40}\n";
    indice = busqueda_binaria(datos_ordenados, objetivo1);
    if (indice != -1) {
        std::cout << "Resultado para " << objetivo1 << ": Encontrado en el índice " << indice << ".\n";
    } else {
        std::cout << "Resultado para " << objetivo1 << ": No encontrado.\n";
    }
    indice = busqueda_binaria(datos_ordenados, objetivo2);
    if (indice != -1) {
        std::cout << "Resultado para " << objetivo2 << ": Encontrado en el índice " << indice << ".\n";
    } else {
        std::cout << "Resultado para " << objetivo2 << ": No encontrado.\n";
    }
    return EXIT_SUCCESS;
}