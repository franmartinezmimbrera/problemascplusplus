// fichero perimetrocir.cpp 
// Este programa calcula el perímetro de una circunferencia
#include <iostream>
#include <cstdlib>
const double PI = 3.14159265358979323846;
using namespace std;
int main() {
    double  perimetro, radio;
    cout<< ( "Introduzca el radio: " );
    if (!(cin >> radio)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (radio <= 0.0) {
        cout << "Error: El radio debe ser un número >=0\n";
        return EXIT_FAILURE;
    }
    perimetro = 2 * PI * radio;
    cout<<"El perímetro es:" << perimetro <<"\n";
    return EXIT_SUCCESS;
}
