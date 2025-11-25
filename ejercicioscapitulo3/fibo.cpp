// fichero fibo.cpp 
// Función iterativa para calcular el n-ésimo número de Fibonacci
#include <iostream> 
#include <limits>   
#include <cstdlib>
//Función de fibonacci iterativa
long long fibonacci_iterativo(int n) {
    long long a = 0; 
    long long b = 1; 
    long long resultado = 0; 

    if (n <= 0) {return 0; }
    if (n == 1) {return 1; }
    for (int i = 2; i <= n; i++) {
        resultado = a + b; 
        a = b;             
        b = resultado;     
    }
    return resultado;
}
int main() {
    const int N = 45; 
    long long resultado = fibonacci_iterativo(N);
    std::cout << "El " << N << "-ésimo número de Fibonacci (iterativo) es: " << resultado << "\n";
    if (N > 90) {
        std::cerr << "Advertencia: N > 46. El resultado (" << resultado 
                  << ") probablemente es incorrecto debido a desbordamiento de 'long long'.\n";
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}