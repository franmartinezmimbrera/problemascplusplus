// fichero qsort2.cpp 
#include <iostream>
#include <algorithm> 
#include <vector>    
#include <cstdlib>

int main() {
    std::vector<int> numeros = {50, 10, 8, 20, 40};
    
    std::cout << "Vector antes de std::sort: ";
    for (int x : numeros) {
        std::cout << x << " "; 
    }
    std::cout << "\n";
    std::sort(numeros.begin(), numeros.end());               
    
    std::cout << "Vector después de std::sort: ";
    for (int x : numeros) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return EXIT_SUCCESS;
}