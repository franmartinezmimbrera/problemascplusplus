// fichero estadisticas.cpp
// Este programa calcula estadísticas sobre alumnos
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    int suspensos,aprobados,notables,sobresalientes;
    double poraprot,porsus,pornot,porsobre,porapro,totalalumnos; 

     cout<<"Introduce el número total de suspensos: ";
     if (!(cin >> suspensos)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
     } 
     if (suspensos < 0) {
        cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
     }
     cout<<"Introduce el número total de aprobados: ";
     if (!(cin >> aprobados)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
     } 
     if (aprobados < 0) {
        cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
     }
     cout<<"Introduce el número total de notables: ";
     if (!(cin >> notables)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
     } 
     if (notables < 0) {
        cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
     }
     cout<<"Introduce el número total de sobresalientes: ";
     if (!(cin >> sobresalientes)) {
        cout << "Error: El valor debe de ser un número.\n";
        return EXIT_FAILURE; 
     } 
     if (sobresalientes < 0) {
        cout << "Error: El valor debe ser un número positivo\n";
        return EXIT_FAILURE;
     }
     
     
     totalalumnos= suspensos+aprobados+notables+sobresalientes;
     
     if (totalalumnos == 0.0) {
        cout << "No se han introducido alumnos (Total 0), no se pueden calcular estadísticas.\n";
        return EXIT_FAILURE;
     } 
     poraprot=((aprobados+notables+sobresalientes)/totalalumnos)*100;
     porsus=(suspensos/totalalumnos)*100;
     pornot=(notables/totalalumnos)*100;
     porsobre=(sobresalientes/totalalumnos)*100;
     porapro=(aprobados/totalalumnos)*100;

     cout<<"El porcentaje de alumnos que superan la asignatura es: "<< poraprot << "\n";
     cout<<"El porcentaje de alumnos que suspenden la asignatura es: " << porsus << "\n";
     cout<<"El porcentaje de alumnos que sacan notable en la asignatura es: "<< pornot <<"\n";
     cout<<"El porcentaje de alumnos que sobresalen en la asignatura es: "<< porsobre << "\n";
     cout<<"El porcentaje de alumnos que han sacado un aprobado en la asignatura es:" << porapro << "\n";
     
  return EXIT_SUCCESS;  
}
