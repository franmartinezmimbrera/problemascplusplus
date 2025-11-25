// fichero multiplicamatrices.cpp
#include <iostream>
#include <iomanip> 
#include <cstddef> 
#include <cstdlib>
const size_t N_SIZE = 3; 
// La función solo acepta matrices cuadradas de enteros de dimensión N x N.
template <size_t N>
void multiplicar_matrices( const int (&A)[N][N], const int (&B)[N][N], int (&C)[N][N]){

    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            C[i][j] = 0; 
            for (size_t k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
template <size_t N>
void imprimir_matriz(const int (&matriz)[N][N]) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            std::cout << std::setw(4) << matriz[i][j] << " "; 
        }
        std::cout << "\n";
    }
}
int main() {
 
    int A[N_SIZE][N_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[N_SIZE][N_SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[N_SIZE][N_SIZE];
    
    multiplicar_matrices(A, B, C);
    
    std::cout << "Matriz A (" << N_SIZE << "x" << N_SIZE << "):\n";
    imprimir_matriz(A);

    std::cout << "\nMatriz B (" << N_SIZE << "x" << N_SIZE << "):\n";
    imprimir_matriz(B);

    std::cout << "\nMatriz Resultado C = A * B:\n";
    imprimir_matriz(C); 

    return EXIT_SUCCESS;
}