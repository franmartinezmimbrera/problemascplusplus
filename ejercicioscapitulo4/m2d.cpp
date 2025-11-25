// fichero m2d.cpp
#include <iostream>  
#include <cstdlib>   
#include <new>       

// Ejercicio de ejemplo para crear Matriz 2D Dinámica

int main() {    

    int M = 3; 
    int N = 4; 
    int **matriz = nullptr;

    try {
        matriz = new int*[M];
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Falló la asignación de filas." << std::endl;
        return EXIT_FAILURE;
    }
    
    for (int i = 0; i < M; i++) {
        try {
            matriz[i] = new int[N];
            for (int j = 0; j < N; j++) {
                matriz[i][j] = i * N + j + 1;
            }
        } catch (const std::bad_alloc& e) {
            std::cerr << "Error: Falló la asignación de columnas en fila " << i << "." << std::endl;
            for (int j = 0; j < i; j++) {
                delete[] matriz[j];
            }
            delete[] matriz;
            return EXIT_FAILURE;
        }
    }
    
    std::cout << "\nMatriz Dinámica " << M << "x" << N << std::endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cout.width(3); 
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < M; i++) {
        delete[] matriz[i]; 
    }
    
    delete[] matriz;
    
    std::cout << "Memoria de la matriz liberada correctamente." << std::endl;

    return EXIT_SUCCESS;
}