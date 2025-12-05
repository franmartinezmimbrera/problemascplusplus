// fichero preciomedio.cpp 
#include <iostream>
int main() {
    double precio1, precio2, precio3, media;
    std::cout<<"Introduzca el precio en establecimiento 1, en euros: ";   
    if (!(std::cin >> precio1)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }  
    if (precio1<0.0){
        std::cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    std::cout<<"Introduzca el precio en establecimiento 2, en euros: ";   
    if (!(std::cin >> precio2)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }
    if (precio2<0.0){
        std::cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    std::cout<<"Introduzca el precio en establecimiento 3, en euros: ";   
    if (!(std::cin >> precio3)) {
        std::cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
    }
    if (precio3<0.0){
        std::cout<<"Ningún precio puede ser negativo\n";
        return EXIT_FAILURE;
    }
    media = (precio1 + precio2 + precio3) / 3.0;
    std::cout<<"El precio medio del producto es de " << media << " euros\n";
    return EXIT_SUCCESS;        
}
