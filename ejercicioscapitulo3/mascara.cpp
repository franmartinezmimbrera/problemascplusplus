// fichero mascara.cpp
// Invierte (cambia 0->1 y 1->0) los últimos k bits de un número entero

#include <iostream>
#include <climits>
#include <cstdlib>

long long invertir_ultimos_k_bits(long long numero, int k) {

    const int tamano_ll = sizeof(long long) * CHAR_BIT;

    if (k <= 0) return numero;
    if (k >= tamano_ll) return ~numero; // invierte todos los bits

    unsigned long long mascara = (1ULL << k) - 1; // máscara de k bits
    return numero ^ mascara;
}

int main() {

    long long num = 45;     
    int k = 4;       

    long long resultado = invertir_ultimos_k_bits(num, k);

    std::cout << "Número original: " << num << " (Binario: ...00101101)\n";
    std::cout << "K: " << k << "\n";
    std::cout << "Número resultante: " << resultado << "\n";

    return EXIT_SUCCESS;
}
