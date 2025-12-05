// fichero nkbits.cpp 
// Procedimiento que escribe los últimos k bits de un número entero.
#include <iostream> 
#include <climits> 
#include <cstdlib>
void mostrar_ultimos_k_bits(int numero, int k) {
    const int tamano_int = sizeof(int) * CHAR_BIT;
    if (k <= 0) {
        std::cerr << "Error: k debe ser mayor que 0.\n";
        return;
    }
    if (k > tamano_int) {k = tamano_int;}
    std::cout << "Los Últimos " << k << " bits de " << numero << " son:";
    for (int i = k - 1; i >= 0; i--) {     
        int bit = (numero >> i) & 1;
        std::cout << bit;
    }
    std::cout << "\n";
}
int main() {
    int num1 = 45; 
    mostrar_ultimos_k_bits(num1, 8); 
    return EXIT_SUCCESS;
}
