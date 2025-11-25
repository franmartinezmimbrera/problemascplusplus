// fichero creabinario.cpp
#include <iostream>
#include <fstream>
#include <string>     
#include <cstdlib>
// Definición de la estructura Registro Alumno a guardar 
typedef struct {
    int id;
    std::string nombre; 
    float nota;
} RegistroAlumno;
const char *NOMBRE_ARCHIVO = "registro.dat"; 
// Procedimiento que crea un fichero binario con un registro 
void crear_binario() {
    RegistroAlumno alumno_original = {101, "Sofia Perez", 9.5}; 
    std::fstream archivo(NOMBRE_ARCHIVO, std::ios::out | std::ios::binary); 
    if (!archivo.is_open()) {
        std::cerr << "Error al escribir el archivo binario." << std::endl;
        return; 
    }
    archivo.write(reinterpret_cast<const char*>(&alumno_original.id), sizeof(int));
    archivo.write(reinterpret_cast<const char*>(&alumno_original.nota), sizeof(float));
    size_t nombre_len = alumno_original.nombre.size();
    archivo.write(reinterpret_cast<const char*>(&nombre_len), sizeof(size_t));
    archivo.write(alumno_original.nombre.data(), nombre_len);
    if (archivo.fail()) {
        std::cerr << "Error al escribir los datos en el archivo." << std::endl;
    }
    archivo.close();
}
// Procedimiento que lee de un fichero binario el registro
void leer_binario() {
    RegistroAlumno alumno_leido;
    size_t nombre_len = 0;
    std::fstream archivo(NOMBRE_ARCHIVO, std::ios::in | std::ios::binary); 
    if (!archivo.is_open()) {
        std::cerr << "Error al leer el archivo binario." << std::endl;
        return; 
    }
   archivo.read(reinterpret_cast<char*>(&alumno_leido.id),sizeof(int));
   archivo.read(reinterpret_cast<char*>(&alumno_leido.nota),sizeof(float));
   archivo.read(reinterpret_cast<char*>(&nombre_len),sizeof(size_t));
    if (nombre_len > 0) {
        alumno_leido.nombre.resize(nombre_len); 
        archivo.read(alumno_leido.nombre.data(), nombre_len); 
    }
    if (!archivo.fail()) {
        std::cout << "Datos cargados del archivo: ID=" << alumno_leido.id << ", Nombre=" << alumno_leido.nombre << ", Nota=" << alumno_leido.nota << std::endl;
    } else {
        std::cerr << "Error en la lectura de los datos." << std::endl;
    }
    archivo.close();
}
int main () {
    crear_binario();
    leer_binario();
    return EXIT_SUCCESS;
}