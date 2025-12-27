// fichero memostruc.cpp
#include <iostream>  
#include <cstdlib>   
#include <string>    
#include <new>       
typedef struct {
    int id; std::string nombre; 
} Tarea;
int main() {
    int N_tareas = 10; Tarea *lista_tareas = nullptr;
    try {
        lista_tareas = new Tarea[N_tareas](); 
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: No se pudo asignar la memoria. " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    lista_tareas[0].id = 1;
    lista_tareas[0].nombre = "Comprar"; 
    lista_tareas[1].id = 2;
    lista_tareas[1].nombre = "Estudiar"; 
    lista_tareas[2].id = 3;
    lista_tareas[2].nombre = "Correr";   
    std::cout << "Lista de Tareas:\n";
    for (int i = 0; i < N_tareas; i++) {
        if (lista_tareas[i].id != 0) {
             std::cout << " - Tarea " << lista_tareas[i].id << ": " 
                       << lista_tareas[i].nombre << "\n";
        } else {
             std::cout << " - Tarea " << i + 1 << ": <No asignada>\n";
        }
    }
    delete[] lista_tareas;
    std::cout << "Memoria de estructuras liberada correctamente." << std::endl;
    return EXIT_SUCCESS;
}