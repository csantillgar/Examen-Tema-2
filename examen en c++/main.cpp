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

    Asistencia asistencia1 = {"14/12/2023", "Programacion", "Presente"};
    estudiante.RegistrarAsistencia(asistencia1);

    return 0;
}



