// fichero tipotriangulo.cpp 
// Este programa calcula el tipo de triángulo en función de los lados
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    double l1,l2,l3;
    
    cout<<"Introduce lo que mide el primer lado del triángulo: ";
    if (!(cin>>l1)){
        cout<<"Error: la entrada no es un número válido" <<endl;
        EXIT_FAILURE;
    };    
    cout<<"Introduce lo que mide el segundo lado del triángulo: ";
    if (!(cin>>l2)){
        cout<<"Error: la entrada no es un número válido" <<endl;
        EXIT_FAILURE;
    };    
    cout<<"Introduce lo que mide el tercer lado del triángulo: ";
    if (!(cin>>l3)){
        cout<<"Error: la entrada no es un número válido" <<endl;
        EXIT_FAILURE;
    };    
    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {
        cout << "\nError Geométrico: Los lados NO forman un triángulo válido.\n";
        return EXIT_FAILURE;
    }
    if (l1==l2 and l2==l3){cout<< "El Triangulo es Equilatero";}
    else{
         if (l1==l2 or l1==l3 or l3==l2){cout<<"El Triangulo es Isoceles";}
         else{
             if (l1!=l2 or l1!=l3 or l3!=l2){cout<<"El Triangulo es Escaleno";}
         }
    }
    return EXIT_SUCCESS;
}
