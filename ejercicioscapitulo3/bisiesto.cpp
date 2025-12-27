// fichero bisiesto.cpp 
// Este programa dice si un año es bisiesto o no
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int anio;
    cout<< "Introduzca un año: ";
    if ( !(cin >> anio) ) 
        cout << "ERROR:La entrada no es un número entero" << endl;
    if ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) )
        cout<< "ES BISIESTO" << endl; 
    else
        cout<< "NO ES BISIESTO" << endl; 
    return EXIT_SUCCESS;
}
