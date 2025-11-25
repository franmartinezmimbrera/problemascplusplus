// fichero memostruc2.cpp
#include <iostream>  
#include <fstream>   
#include <vector>    
#include <string>    
#include <cstdlib>   
typedef struct {
    int id;
    std::string nombre;
} Tarea;
const char *NOMBRE_ARCHIVO = "registroestructura_string.dat";
void escribir_cadena(std::fstream& archivo, const std::string& str) {
    size_t len = str.length();
    archivo.write(reinterpret_cast<const char*>(&len), sizeof(size_t));
    archivo.write(str.data(), len);
}
void leer_cadena(std::fstream& archivo, std::string& str) {
    size_t len = 0;
    archivo.read(reinterpret_cast<char*>(&len), sizeof(size_t));
    if (len > 0) {
        str.resize(len);
        archivo.read(str.data(), len);
    }
}
int main() {

    int N_tareas = 10;
    int rellenas = 3;   
    std::vector<Tarea> lista_tareas(N_tareas); 

    lista_tareas[0].id = 1;
    lista_tareas[0].nombre = "Comprar"; 
    lista_tareas[1].id = 2;
    lista_tareas[1].nombre = "Estudiar";
    lista_tareas[2].id = 3;
    lista_tareas[2].nombre = "Correr";

    std::fstream archivo(NOMBRE_ARCHIVO, std::ios::out | std::ios::binary);    
    if (!archivo.is_open()) {
        std::cerr << "Error al escribir el archivo binario." << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < rellenas; ++i) {
        archivo.write(reinterpret_cast<const char*>(&lista_tareas[i].id), sizeof(int));
        escribir_cadena(archivo, lista_tareas[i].nombre);
    }
    if (archivo.fail()) {
         std::cerr << "Error de escritura incompleta." << std::endl;
    }    
    archivo.close();
    std::cout << "Vector de escritura liberado autom�ticamente.\n";
    std::fstream archivo_lectura(NOMBRE_ARCHIVO, std::ios::in | std::ios::binary); 
    if (!archivo_lectura.is_open()) {
        std::cerr << "Error al leer el archivo binario." << std::endl;
        return EXIT_FAILURE;
    }
    archivo_lectura.seekg(0, std::ios::end);
    long tamano_total = archivo_lectura.tellg();
    archivo_lectura.seekg(0, std::ios::beg);
    std::vector<Tarea> lista_leida;
    Tarea t;
    int num_registros = 0;
    std::cout << "\nLista de Tareas le�das del archivo:\n";
    while (archivo_lectura.peek() != EOF) {
        archivo_lectura.read(reinterpret_cast<char*>(&t.id), sizeof(int));
        leer_cadena(archivo_lectura, t.nombre);
        if (archivo_lectura.fail() && !archivo_lectura.eof()) {
            std::cerr << "Error de lectura de un registro." << std::endl;
            break;
        }
        if (!archivo_lectura.fail()) {
            lista_leida.push_back(t); 
            std::cout << " - Tarea " << t.id << ": " << t.nombre << "\n";
            num_registros++;
        }
    }   
    std::cout << "Se leyeron " << num_registros << " registros.\n";
    std::cout << "Vector de lectura liberado autom�ticamente.\n";
    archivo_lectura.close();    
    return EXIT_SUCCESS;
}