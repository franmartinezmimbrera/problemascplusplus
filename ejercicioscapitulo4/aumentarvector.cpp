// fichero aumentarvector.cpp
#include <iostream>  
#include <cstdlib>   
#include <new>       
#include <algorithm> 

int main() {
    
    int N_inicial = 3;
    int N_nuevo = 5;
    int *vector = nullptr; 

    try {
        vector = new int[N_inicial];
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Falló la asignación inicial de memoria." << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < N_inicial; i++) {
        vector[i] = i + 10;
    }
    
    std::cout << "\nVector Inicial (" << N_inicial << " elementos):" << std::endl;
    for (int i = 0; i < N_inicial; i++) 
        std::cout << vector[i] << " ";
    std::cout << std::endl;

    // Aquí hacemos una simulación de realloc porque 
    // en C++ daría problemas al usar New y Delete 
    int *nuevo_vector = nullptr;

    try {
        nuevo_vector = new int[N_nuevo];
        std::copy(vector, vector + N_inicial, nuevo_vector);

    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Falló la reasignación de memoria. Los datos originales se conservan." << e.what() << std::endl;
        delete[] vector; 
        return EXIT_FAILURE;
    }
    

    delete[] vector; 
    vector = nuevo_vector; 
    
    for (int i = N_inicial; i < N_nuevo; i++) {
        vector[i] = i + 100;
    }
    
    std::cout << "Vector Redimensionado (" << N_nuevo << " elementos):" << std::endl;
    for (int i = 0; i < N_nuevo; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << "\n";

    delete[] vector;
    std::cout << "Memoria liberada correctamente." << std::endl;
    
    return EXIT_SUCCESS;
}