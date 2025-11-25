// fichero divisor.cpp 
// Este programa calcula dados 2 números si a es divisor de b 

#include <iostream>
#include <cmath> 
#include <cstdlib>

// La función ahora comprueba si 'a' es divisor de 'b'
bool es_divisor(long long a, long long b) {

    if (a == 0) {
        return false;
    }

    long long abs_a = std::abs(a);
    long long abs_b = std::abs(b);

    return (abs_b % abs_a == 0);

}

int main() {

    long long a, b;   

    std::cout << "Introduzca valor de a (el divisor): ";
    if (!(std::cin >> a)) {
        std::cout << "ERROR: La entrada para 'a' no es un número entero válido.\n";
        return EXIT_FAILURE; 
    }

    std::cout << "Introduzca valor de b (el dividendo): ";
    if (!(std::cin >> b)) {
        std::cout << "ERROR: La entrada para 'b' no es un número entero válido.\n";
        return EXIT_FAILURE; 
    }

    if (es_divisor(a, b)) {
        std::cout << a << " ES divisor de " << b << "\n"; 
    } else {
        std::cout << a << " NO es divisor de " << b << "\n";
    }

    return EXIT_SUCCESS;

}