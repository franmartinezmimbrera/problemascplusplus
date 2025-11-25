// fichero mergesort.cpp
#include <iostream>   
#include <vector>     
#include <algorithm>  
#include <iterator>   
#include <cstdlib>    

template <typename T>
void merge(std::vector<T>& arr, int inicio, int medio, int fin) {

    std::vector<T> temp_arr;

    temp_arr.reserve(fin - inicio + 1);
    temp_arr.insert(temp_arr.end(), 
                    arr.begin() + inicio, arr.begin() + medio + 1);
    
    temp_arr.insert(temp_arr.end(), 
                    arr.begin() + medio + 1, arr.begin() + fin + 1);

    std::merge(
        temp_arr.begin(),                          
        temp_arr.begin() + (medio - inicio + 1),   
        temp_arr.begin() + (medio - inicio + 1),   
        temp_arr.end(),                            
        arr.begin() + inicio                       
    );
    
    
// Función mergeSort (Ordenación por Mezcla)

template <typename T>
void mergeSort(std::vector<T>& arr, int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        
        mergeSort(arr, inicio, medio);
        mergeSort(arr, medio + 1, fin);
        
        merge(arr, inicio, medio, fin);
    }
}

int main() {
    
    std::vector<int> datos = {38, 27, 43, 3, 9, 82, 10};
    int n = datos.size(); 

    std::cout << "Vector original desordenado:\n";
    for (int x : datos) { 
        std::cout << x << " ";
    }
    std::cout << "\n";
    
    mergeSort(datos, 0, n - 1);
    
    std::cout << "\nVector ordenado con MergeSort:\n";
    for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    
    return EXIT_SUCCESS;
}