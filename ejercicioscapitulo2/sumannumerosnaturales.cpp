// fichero sumannumerosnaturales.cpp 
// Este programa calcula la suma de los "n" primeros números naturales 
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long long suma=0; int n;
    cout<<"Introduzca número de números naturales a sumar: ";
    if (!(cin >> n)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }   
    if (n <= 0) {
        cout << "Error: El valor debe ser un número natural.\n";
        return EXIT_FAILURE;
    }
    suma = (static_cast<long long>(n) * (n + 1)) / 2;
    cout<<"La suma de los " << n <<" primeros números naturales es: " << suma << "\n" ;
    return EXIT_SUCCESS;
}
