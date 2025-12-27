// fichero parimpar.cpp 
// Este programa dice si un número es par o impar
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   long long numero;
   cout<< "Introduzca un número entero: ";
   if ( !(cin>>numero) ) { 
       cout << "ERROR: Entrada no válida (no se introdujo un número)." << endl;
       return EXIT_FAILURE; 
   }
   if ( numero % 2 == 0 )
        cout<<"ES PAR";
   else
        cout<<"ES IMPAR"; 
    return EXIT_SUCCESS;
}
