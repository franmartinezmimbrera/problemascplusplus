// fichero newton.cpp 
// Calcula mediante el binomio de newton los datos datos
#include <iostream> 
#include <limits>   
#include <cstdlib>

//Función factorial iterativa
long long factorial(long long n) {
    if (n == 0 || n == 1) {return 1;}
    long long resultado = 1;
    for (long long i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

//Función para calcular un número combinatorio
long long nCr(long long n, long long r) {
    if (r < 0 || r > n) {return 0;}
    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_n_minus_r = factorial(n - r);

    if (fact_n < 0 || fact_r < 0 || fact_n_minus_r < 0) {
        std::cerr << "Error: Un factorial intermedio es demasiado grande para 'long long'.\n";
        return -1; 
    }
    return fact_n / (fact_r * fact_n_minus_r);
}

//Funció para calcular la potencia de una base y un exponente cualquiera dado
long long calcular_potencia(long long base, int exponente) {
    long long resultado = 1;
    while (exponente > 0) {
        if (exponente % 2 == 1)
            resultado *= base;
        base *= base;
        exponente /= 2;
    }
    return resultado;
}

// Calcula la expansión del Binomio de Newton (a + b)^n.
void binomio_de_newton(long long a, long long b, int n) {
    if (n < 0 || n > 20) { 
        std::cerr << "Error: El exponente N debe ser no negativo y <= 20.\n";
        return;
    }
    std::cout << "\nExpansión de (" << a << " + " << b << ")^" << n << ":\n";
    long long suma = 0;
    for (int k = 0; k <= n; k++) {
        long long coeficiente = nCr(n, k);
        
        if (coeficiente == -1) {
            std::cerr << "Cáculo abortado debido a un error de factorial.\n";
            return;
        }
        long long potencia_a = calcular_potencia(a, n - k);
        long long potencia_b = calcular_potencia(b, k);
        long long valor_termino = coeficiente * potencia_a * potencia_b;
        suma += valor_termino;
      
        std::cout << "  + (" << coeficiente << " * " << a << "^" << n - k 
                  << " * " << b << "^" << k << ") = " << valor_termino << "\n";
    }
    std::cout << "Valor Total del Binomio de Newton de (a+b)^n: " << suma << "\n";
}

int main() {
   
    long long a, b;
    int n;

    std::cout << "Introduce un numero entero no negativo para a: ";
    if (!(std::cin >> a) || a < 0) {
        std::cerr << "Error: Entrada no válida para a (debe ser no negativa).\n";
        return EXIT_FAILURE;
    }
    std::cout << "Introduce un numero entero no negativo para b: ";
    if (!(std::cin >> b) || b < 0) {
        std::cerr << "Error: Entrada no válida para b (debe ser no negativa).\n";
        return EXIT_FAILURE;
    }
    std::cout << "Introduce un numero entero no negativo para n: ";
    if (!(std::cin >> n) || n < 0) {
        std::cerr << "Error: Entrada no válida para n (debe ser no negativo).\n";
        return EXIT_FAILURE;
    }
    if (n > 20 || (a > 1 && n > 15) || (b > 1 && n > 15)) {
        std::cout << "\nAdvertencia: La expansión de (a+b)^n es muy grande. El resultado total puede desbordar 'long long'.\n";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    binomio_de_newton(a, b, n);
    return EXIT_SUCCESS;
}