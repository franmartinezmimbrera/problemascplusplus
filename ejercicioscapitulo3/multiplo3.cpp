// fichero multiplo3.cpp 
// Este programa dice si un número es múltiplo de 3
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int numero;
    cout<< "Introduzca un número: ";
    if ( !(cin>>numero) ) { 
       cout << "ERROR: Entrada no válida (no se introdujo un número)." << endl;
       return EXIT_FAILURE; 
   }
    if ( (numero % 3 == 0)  && (numero % 2 == 0) ){
        cout << "\n El número " << numero << " es MÚLTIPLO DE 3 Y TAMBIÉN ES PAR (Múltiplo de 6) \n";
    } else if (numero % 3 == 0){
        cout << "El número " << numero << " ES MÚLTIPLO DE 3" ;
    } else {
        cout << "El número " << numero << " NO ES MÚLTIPLO DE 3" ;
    }
    return EXIT_SUCCESS;
}
