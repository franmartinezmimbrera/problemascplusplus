// fichero factorialR.cpp 
// Calcula el factorial de un número entero no negativo de forma recursiva. 
#include <iostream> 
#include <limits>   
#include <cstdlib>
long long factorial_recursivo(long long n) {
    if (n <= 1) {return 1; }
    return static_cast<long long>(n) * factorial_recursivo(n - 1);
}
int main() {
    long long numero; 
    std::cout << "Introduce un número entero no negativo (máx 20): ";
    if (!(std::cin >> numero)) {
        std::cerr << "Error: Entrada no válida.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return EXIT_FAILURE;
    }
    if (numero < 0) {
        std::cerr << "Error:El factorial solo está definido para números >0\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return EXIT_FAILURE;
    }
    if (numero > 20) {std::cout << "Advertencia: El factorial de " << numero << " es muy grande y probablemente cause un resultado incorrecto por desbordamiento (overflow).\n";}
    long long resultado = factorial_recursivo(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << "\n";
    return EXIT_SUCCESS;
}