// fichero binomiosuma.cpp
// Este programa calcula el binomio de suma de a+b al cuadrado 
#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {
  
  double a,b,resultado;
  
  std::cout<<"Introduce el valor de a: ";
  if (!(std::cin >> a)) {
        std::cout << "Error: El valor debe ser un n?mero.\n";
        return EXIT_FAILURE; 
    } 
  std::cout<<"Introduce el valor de b: ";
  if (!(std::cin >> b)) {
        std::cout << "Error: El valor debe ser un n?mero.\n";
        return EXIT_FAILURE; 
    } 
  
    resultado=(a*a)+(b*b)+(2.0*a*b);  

  std::cout<<"El resultado del binomio de suma de (a+b)^2 es:"<< resultado << "\n";

  return EXIT_SUCCESS;
}
