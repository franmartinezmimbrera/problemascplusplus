// fichero blineal.cpp 
#include <iostream>  
#include <vector>    
#include <algorithm> 
#include <cstdlib>   
//Función búsqueda lineal
template <typename T>
int busqueda_lineal(const std::vector<T>& arr, T objetivo) {
    auto it = std::find(arr.begin(), arr.end(), objetivo);
    if (it != arr.end()) {return std::distance(arr.begin(), it); }
    return -1;
}
int main() {   
    std::vector<int> datos = {10, 5, 20, 15, 8, 30};
    int objetivo1 = 15;
    int indice;
    std::cout << "Conjunto de datos: {";
    for (int x : datos) {
        std::cout << x << (x == datos.back() ? "" : ", ");
    }
    std::cout << "}\n";
    indice = busqueda_lineal(datos, objetivo1);
    if (indice != -1) {
        std::cout << "Resultado para " << objetivo1 << ": Encontrado en índice " << indice << ".\n";
    } else {
       std::cout << "Resultado para " << objetivo1 << ": No encontrado\n";
    }
    return EXIT_SUCCESS;
}