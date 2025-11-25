// fichero preciomedio.cpp 
// Este programa calcula el precio medio de un producto
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    double precio1, precio2, precio3, media;
    cout<<"Introduzca el precio en establecimiento 1, en euros: ";   
    if (!(cin >> precio1)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }  
    if (precio1<0.0){
        cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    cout<<"Introduzca el precio en establecimiento 2, en euros: ";   
    if (!(cin >> precio2)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }
    if (precio2<0.0){
        cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    cout<<"Introduzca el precio en establecimiento 3, en euros: ";   
    if (!(cin >> precio3)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }
    if (precio3<0.0){
        cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    media = (precio1 + precio2 + precio3) / 3.0;
    cout<<"El precio medio del producto es de " << media << " euros\n";
    return EXIT_SUCCESS;        
}
