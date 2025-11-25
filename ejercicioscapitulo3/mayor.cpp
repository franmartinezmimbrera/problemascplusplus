// fichero mayor.cpp 
// Este programa calcula el número mayor de 10 introducidos por teclado
#include <iostream>
#include <vector>   
#include <limits>
#include <cstdlib>
const int NUM_ELEMENTOS = 10;
// Función para encontrar el número mayor
long long mayor(const std::vector<long long>& numeros){
   if (numeros.empty()) {
       return 0; 
   }   
   long long max = numeros[0]; 
   for (int num : numeros) { 
      if (num > max) {
          max = num;
      }   
   }
   return max;
}
int main() {

    std::vector<long long> numerosin; 
    long long numero_leido;
    for (int i = 0; i < NUM_ELEMENTOS; i++){
        bool entrada_valida = false;
        while (!entrada_valida) {
            std::cout << "Introduzca número " << (i + 1) << " de " << NUM_ELEMENTOS << ": ";        
            if (!(std::cin >> numero_leido)) {                
                std::cout << "ERROR: La entrada no es un número entero válido. Inténtelo de nuevo." << std::endl;                
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                numerosin.push_back(numero_leido);
                entrada_valida = true;
            }
        }
    }
    std::cout << "\nEl número mayor de todos los introducidos es: " << mayor(numerosin) << std::endl;
    return EXIT_SUCCESS;
}