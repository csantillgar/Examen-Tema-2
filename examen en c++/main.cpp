#include "Estudiante.h"
#include "Asistencia.h"


int main(){
    Estudiante estudiante;
    estudiante.nombre = "Cintia Santillan";
    estudiante.edad = 18;
    estudiante.nota = 5;
    estudiante.agregarAsignatura("Programacion");
    estudiante.agregarAsignatura("Estructura de datos");
    estudiante.mostrarEstudiante();


    return 0;
}



