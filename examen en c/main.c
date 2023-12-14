#include <stdio.h>
#include "estudiante.h"

int main() {
    struct Estudiante estudiante;
    inicializarEstudiante(&estudiante, "Juan Perez", 20, 8.5);
    agregarMateria(&estudiante, "Matematicas");
    agregarMateria(&estudiante, "Historia");

    mostrarEstudiante(&estudiante);

    struct Asistencia asistencia1 = {"2023-01-15", "Matematicas", "Asistio"};
    registrarAsistencia(&estudiante, asistencia1);

    mostrarAsistencia(&estudiante);

    return 0;
}
