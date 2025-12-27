// fichero MCD1.cpp 
// Este programa calcula el MCD dados 2 números mediante una función

#include <iostream>
#include <cmath>    
#include <cstdlib>

long long MCD( long a,long b){   

    long long temporal;
    if (a==0) {return b;}    
    if (b==0){return a;}
    while (a > 0){
         temporal = a;
         a = b % a;
         b = temporal;
    }        
    return b;
}

int main() {
      
    long long a;
    long long b;

    std::cout << "\n   Introduzca valor de a: ";
    if (!(std::cin >> a)) {
        std::cout << "ERROR: La entrada no es un número entero\n";
        return EXIT_FAILURE; 
    }
    std::cout << "\n  Introduzca valor de b: ";
    if (!(std::cin >> b)) {
        std::cout << "ERROR: La entrada no es un número entero\n";
        return EXIT_FAILURE; 
    }
    a = std::abs(a); 
    b = std::abs(b); 
    std::cout<<"EL M.C.D de " << a << " y " << b << " es:"<< MCD(a,b)<<"\n" ;
    return EXIT_SUCCESS;
}
