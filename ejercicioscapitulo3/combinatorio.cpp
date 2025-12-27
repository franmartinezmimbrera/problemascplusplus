// fichero combinatorio.cpp 
// Calcula el número combinatorio C(n, r) o n sobre r, usando factoriales.
#include <iostream> 
#include <limits>   
#include <cstdlib>
//Función factorial iterativa
long long factorial(long long n) {
    if (n == 0 || n == 1) {return 1;}
    long long resultado = 1;
    for (long long i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
//Función para calcular un número combinatorio
long long nCr(long long n, long long r) {
    if (r < 0 || r > n) {return 0;}
    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_n_minus_r = factorial(n - r);

    if (fact_n < 0 || fact_r < 0 || fact_n_minus_r < 0) {
        std::cerr << "Error: Un factorial intermedio es demasiado grande para 'long long'.\n";
        return -1; 
    }
    return fact_n / (fact_r * fact_n_minus_r);
}
int main() {
    int N;
    int M;

    std::cout << "Introduce un numero entero no negativo para N (max 20 para precision): ";
    if (!(std::cin >> N)) {
        std::cerr << "Error: Entrada no válida para N.\n";
        return EXIT_FAILURE;
    }
    if (N < 0) {
        std::cerr << "Error: N debe ser no negativo.\n";
        return EXIT_FAILURE;
    }
    if (N > 20) {
        std::cout << "Advertencia: El factorial de N=" << N << " causará desbordamiento.\n";
    }
    std::cout << "Introduce un numero entero no negativo para M (max 20 para precision): ";
    if (!(std::cin >> M)) {
        std::cerr << "Error: Entrada no válida para M.\n";
        return EXIT_FAILURE;
    }
    if (M < 0) {
        std::cerr << "Error: M debe ser no negativo.\n";
        return EXIT_FAILURE;
    }
    if (M > 20) {
        std::cout << "Advertencia: El factorial de M=" << M << " causará desbordamiento.\n";
    } 
    long long combinaciones = nCr(N, M);
    if (combinaciones > 0) {
        std::cout << "El número combinatorio de " << N << " sobre " << M << " es: " << combinaciones << "\n"; 
    } else if (combinaciones == 0) {
        std::cout << "El número combinatorio de " << N << " sobre " << M << " es 0 (M fuera de rango 0 <= M <= N).\n";
    } else if (combinaciones == -1) {
        std::cout << "No se pudo calcular el número combinatorio de " << N << " sobre " << M << " debido a desbordamiento.\n";
    }
    return EXIT_SUCCESS;
}