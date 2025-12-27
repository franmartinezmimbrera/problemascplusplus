// fichero trasposicion.cpp 
// Función para trasponer una matriz MxN
#include <iostream>
#include <iomanip>
#include <cstddef> 
#include <cstdlib>
const int M_FILAS = 3;
const int N_COLUMNAS = 4;
// Plantilla para trasponer una matriz de enteros M x N 
template <size_t M, size_t N>
void trasponer_matriz(const int (&original)[M][N], int (&transpuesta)[N][M]) {
    for (size_t i = 0; i < M; ++i) { 
        for (size_t j = 0; j < N; ++j) { 
            transpuesta[j][i] = original[i][j];
        }
    }
}
template <size_t R, size_t C>
void imprimir_matriz(const int (&matriz)[R][C]) {
    for (size_t i = 0; i < R; ++i) {
        for (size_t j = 0; j < C; ++j) {
            std::cout << std::setw(4) << matriz[i][j]; 
        }
        std::cout << "\n";
    }
}
int main() {
    int A[M_FILAS][N_COLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int AT[N_COLUMNAS][M_FILAS];
    std::cout << "Matriz Original A (" << M_FILAS << " x " << N_COLUMNAS << ") \n";
    imprimir_matriz(A);
    trasponer_matriz(A, AT);
    std::cout << "\n Matriz Transpuesta AT (" << N_COLUMNAS << " x " << M_FILAS << ") \n";
    imprimir_matriz(AT);
    return EXIT_SUCCESS;
}