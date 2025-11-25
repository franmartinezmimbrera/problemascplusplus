// fichero invierte.cpp 
//Este ejercicio implementa la inversión de una cadena de texto dada
#include <iostream> 
#include <cstdlib>
constexpr int MAX_SIZE=100; 

void leer_cadena(char s[], int size) {
   std::cin.getline(s, size);
}
//Procedimiento que invierte una cadena dada
void invertir_cadena(char s[]) {
    int longitud = 0;
    while (s[longitud] != '\0') {
        longitud++;
    }
    int inicio=0;
    int fin = longitud - 1;
    char temp;
    while (inicio < fin) {
        temp = s[inicio];
        s[inicio] = s[fin];
        s[fin] = temp;
        inicio++;
        fin--;
    }
}
int main() {
    char cadena[MAX_SIZE];    
    std::cout << "Introduce una cadena de texto: ";
    leer_cadena(cadena, MAX_SIZE);
    if (cadena[0] == '\0') {
        std::cout << "Cadena vacía.\n";
        return EXIT_SUCCESS;
    }
    std::cout << "Cadena original: \"" << cadena << "\"\n";
    invertir_cadena(cadena);
    std::cout << "Cadena invertida: \"" << cadena << "\"\n";
    return EXIT_SUCCESS;
}