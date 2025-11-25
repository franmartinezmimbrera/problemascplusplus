// fichero cambiagrados.cpp */
// Este programa cambia grados centígrados por Fahrenheit

#include <iostream>
#include <cstdlib>
using namespace std;
const double FACTOR_C_TO_F (9.0 / 5.0);

int main() {

  double c,f; 
  
  cout<<"Introduzca valor en grados Centígrados : " ;
  if (!(cin >> c)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
  } 

  f=(FACTOR_C_TO_F*c)+32 ;
  cout<<"El resultado en grados Fahrenheit es: " << f <<"\n";   
          
  return EXIT_SUCCESS;  
}
