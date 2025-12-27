// fichero binterpola.cpp
#include <iostream>
#include <vector>
#include <type_traits>
#include <cstdlib>
// Función de búsqueda por interpolación
template <typename T>
int busqueda_interpolacion(const std::vector<T>& arr, T objetivo) {
    static_assert(std::is_arithmetic<T>::value, "Interpolación requiere tipo numérico");
    int bajo = 0;
    int alto = arr.size() - 1;
    int pos;
    while (bajo <= alto && objetivo >= arr[bajo] && objetivo <= arr[alto]) {
        if (bajo == alto) {
            return (arr[bajo] == objetivo) ? bajo : -1;
        }
        if (arr[alto] == arr[bajo]) {
            return (arr[bajo] == objetivo) ? bajo : -1;
        }

        pos = bajo + static_cast<int>(
            static_cast<double>(alto - bajo) / (arr[alto] - arr[bajo]) * (objetivo - arr[bajo])
        );
        if (pos < bajo) pos = bajo;
        if (pos > alto) pos = alto;

        if (arr[pos] == objetivo) return pos;
        if (arr[pos] < objetivo) bajo = pos + 1;
        else alto = pos - 1;
    }
    return -1;
}
int main() {
    std::vector<int> datos_ordenados = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int objetivo1 = 70;
    int indice = busqueda_interpolacion(datos_ordenados, objetivo1);
    std::cout << "\nResultado para " << objetivo1 << ": "
              << (indice != -1 ? "Encontrado en el índice " + std::to_string(indice)
                               : "No encontrado") << ".\n";
    int objetivo2 = 45;
    indice = busqueda_interpolacion(datos_ordenados, objetivo2);
    std::cout << "Resultado para " << objetivo2 << ": "
              << (indice != -1 ? "Encontrado en el índice " + std::to_string(indice)
                               : "No encontrado") << ".\n";
    return EXIT_SUCCESS;
}
