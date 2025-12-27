// fichero operacionesaritmeticas.cpp 
// Este programa realiza operaciones aritméticas dados 2 números
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    double valor1;
    double valor2;
    cout << "Introduce el valor primero: ";   
    if (!(cin >> valor1)) {
        cout << "ERROR: El valor introducido no es un número.\n";
        return EXIT_FAILURE; 
    }
    cout << "Introduce el valor segundo: ";
    if (!(cin >> valor2)) {
        cout << "ERROR: El valor introducido no es un número.\n";
        return EXIT_FAILURE; 
    }
    cout << "El resultado de la suma (" << valor1 << " + " << valor2 << ") es: " << valor1 + valor2 << "\n";
    cout << "El resultado de la resta (" << valor1 << " - " << valor2 << ") es: " << valor1 - valor2 << "\n";
    cout << "El resultado de la multiplicación (" << valor1 << " * " << valor2 << ") es: " << valor1 * valor2 << "\n";
    if (valor2 == 0.0) {
        cout << "El resultado de la división (" << valor1 << " / " << valor2 << ") es: INDEFINIDO (División por Cero)" << "\n";
    } else {
        cout << "El resultado de la división (" << valor1 << " / " << valor2 << ") es: " << valor1 / valor2 << "\n";
    }
    return EXIT_SUCCESS;        
}