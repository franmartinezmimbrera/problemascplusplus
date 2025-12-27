// fichero areatriangulo1.cpp 
// Este programa calcula el área de un triáungulo rectángulo a partir de la base y la altura
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
    double a,b,area;
    cout<<"Introduce la base del triángulo rectángulo:";
    if (!(cin >> b)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (b <=0) {
        cout << "Error: El valor debe ser un número > que 0\n";
        return EXIT_FAILURE;
    }    
    cout<<"Introduce la altura del triángulo rectángulo: ";
    if (!(cin >> a)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    } 
    if (a <=0 ) {
        cout << "Error: El valor debe ser un número > que 0\n";
        return EXIT_FAILURE;
    }
    area=(b*a)/2.0;
    cout << fixed << setprecision(2);
    cout<<"El area del triángulo rectángulo es:"<< area<< endl;
    return EXIT_SUCCESS;
}
