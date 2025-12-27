// fichero asignalibera.cpp
#include <iostream>  
#include <cstdlib>   
#include <new>    
// Este ejercicio nos enseña a asignar y liberar memoria dinámica a un vector
int main() {
    
    int N = 5;
    int *vector = nullptr; 

    try {
        vector = new int[N];
    } 
    catch (const std::bad_alloc& e) {
        std::cerr << "Error: No se pudo asignar la memoria. " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Vector Dinámico de " << N << " Elementos" << std::endl;
    for (int i = 0; i < N; i++) {
        vector[i] = i * 10;
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
    delete[] vector;
    std::cout << "Memoria liberada correctamente." << std::endl;
    return EXIT_SUCCESS;
}