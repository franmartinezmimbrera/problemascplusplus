// fichero factorialI.cpp 
// Calcula el factorial de un número entero no negativo de forma iterativa
#include <iostream> 
#include <limits> 
#include <cstdlib>
// Función para calcular el factorial de manera iterativa
long long factorial_iterativo(long long n) {
    if (n == 0 || n == 1) {return 1;}
    long long resultado = 1; 
    for (long long i = 2; i <= n; i++) {resultado *= i; }
    return resultado;
}
int main() {
    long long numero;
    std::cout << "Introduce un numero entero no negativo (max 20 para precision): ";
    if (!(std::cin >> numero)) {
        std::cerr << "Error: Entrada no valida.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return EXIT_FAILURE;
    }
    if (numero < 0) {
        std::cerr << "Error: El factorial solo esta definido para numeros no negativos.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return EXIT_FAILURE;
    }
    if (numero > 20) {
        std::cout << "Advertencia: El factorial de " << numero 
                  << " es muy grande y probablemente cause un resultado incorrecto por desbordamiento (overflow).\n";
    }
    long long resultado = factorial_iterativo(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << "\n";
    return EXIT_SUCCESS;
}