// fichero pulgadasmilimetros.cpp */
// Este programa cambia pulgadas por milímetros
#include <iostream>
#include <cstdlib>

using namespace std;
const double FACTOR_CONVERSION = 25.4;

int main() {

  double pul,mil; 
  
  cout<<"Introduzca valor en pulgadas: ";
  if (!(cin >> pul)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
  } 
  if (pul < 0) {
        cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
  }

  mil=FACTOR_CONVERSION*pul;
  cout<<"El resultado en milímetros es:" << mil;   

  return EXIT_SUCCESS;  

}
