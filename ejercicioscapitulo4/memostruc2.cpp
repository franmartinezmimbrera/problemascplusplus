// fichero memostruc2.cpp
#include <iostream>  
#include <fstream>   
#include <vector>    
#include <string>    
#include <cstdlib>   
typedef struct {
    int id; std::string nombre;
} Tarea;
const char *NOMBRE_FICHERO = "registroestructura_string.dat";
void escribir_cadena(std::fstream& fichero, const std::string& str) {
    size_t len = str.length();
    fichero.write(reinterpret_cast<const char*>(&len), sizeof(size_t));
    fichero.write(str.data(), len);
}
void leer_cadena(std::fstream& fichero, std::string& str) {
    size_t len = 0;
    fichero.read(reinterpret_cast<char*>(&len), sizeof(size_t));
    if (len > 0) {
        str.resize(len);
        fichero.read(str.data(), len);
    }
}
int main() {
    int N_tareas = 10;
    int rellenas = 3;   
    std::vector<Tarea> lista_tareas(N_tareas); 
    lista_tareas[0].id = 1; lista_tareas[0].nombre = "Comprar"; 
    lista_tareas[1].id = 2; lista_tareas[1].nombre = "Estudiar";
    lista_tareas[2].id = 3; lista_tareas[2].nombre = "Correr";
    std::fstream fichero(NOMBRE_FICHERO, std::ios::out | std::ios::binary);    
    if (!fichero.is_open()) {
        std::cerr << "Error al escribir el fichero binario." << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < rellenas; ++i) {
        fichero.write(reinterpret_cast<const char*>(&lista_tareas[i].id), sizeof(int));
        escribir_cadena(fichero, lista_tareas[i].nombre);
    }
    if (fichero.fail()) { std::cerr << "Error de escritura incompleta." << std::endl;}    
    fichero.close();
    std::cout << "Vector de escritura liberado automáticamente.\n";
    std::fstream fichero_lectura(NOMBRE_FICHERO, std::ios::in | std::ios::binary); 
    if (!fichero_lectura.is_open()) {
        std::cerr << "Error al leer el fichero binario." << std::endl;
        return EXIT_FAILURE;
    }
    fichero_lectura.seekg(0, std::ios::end);
    long tamano_total = fichero_lectura.tellg();
    fichero_lectura.seekg(0, std::ios::beg);
    std::vector<Tarea> lista_leida;
    Tarea t; int num_registros = 0;
    std::cout << "\nLista de Tareas leídas del fichero:\n";
    while (fichero_lectura.peek() != EOF) {
        fichero_lectura.read(reinterpret_cast<char*>(&t.id), sizeof(int));
        leer_cadena(fichero_lectura, t.nombre);
        if (fichero_lectura.fail() && !fichero_lectura.eof()) {
            std::cerr << "Error de lectura de un registro." << std::endl;
            break;
        }
        if (!fichero_lectura.fail()) {
            lista_leida.push_back(t); 
            std::cout << " - Tarea " << t.id << ": " << t.nombre << "\n";
            num_registros++;
        }
    }   
    std::cout << "Se leyeron " << num_registros << " registros.\n";
    std::cout << "Vector de lectura liberado automáticamente.\n";
    fichero_lectura.close();    
    return EXIT_SUCCESS;
}