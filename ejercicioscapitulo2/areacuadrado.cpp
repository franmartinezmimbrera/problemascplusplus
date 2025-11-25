// fichero areacuadrado.cpp
// Este programa calcula el área de un cuadrado a partir de uno de sus lados
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    double l1,area;
    cout<<"Introduce valor lado de un cuadrado: ";
    if (!(cin >> l1)) {
        cout << "Error: El lado debe de ser un número.\n";
        return EXIT_FAILURE; 
    }
    if (l1<=0){
        cout<<"Error: El lado debe ser un número positivo >0 \n";
        return EXIT_FAILURE;
    }
    area=l1*l1;
    cout<<"El Área del cuadrado es: " << area << " \n";
    return EXIT_SUCCESS;
}
