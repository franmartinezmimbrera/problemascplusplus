// fichero MCD.cpp 
// Este programa calcula el MCD dados 2 números enteros
#include <iostream>
#include <cmath>   
#include <cstdlib>
int main() {

    long long a, b;       
    long long a2, b2;     
    long long temporal;   
   
    std::cout << "\n   Introduzca valor de a: ";
    if (!(std::cin >> a)) {
        std::cout << "ERROR: La entrada no es un número entero\n";
        return EXIT_FAILURE; 
    }
    std::cout << "\n  Introduzca valor de b: ";
    if (!(std::cin >> b)) {
        std::cout << "ERROR: La entrada no es un número entero\n";
        return EXIT_FAILURE; 
    }

    a2 = a;
    b2 = b;
    a = std::abs(a); 
    b = std::abs(b); 

    if ((a == 0) || (b==0)) {
        std::cout << "\n EL M.C.D de " << a << " y " << b << " es: " << ((a == 0) ? b : a) << "\n";
        return EXIT_SUCCESS;
    }

    while (a != 0) {
         temporal = a;
         a = b % a;
         b = temporal;
    }     

    std::cout << " EL M.C.D de " << a2 << " y " << b2 << " es: " << b << "\n";
    return EXIT_SUCCESS;
}
