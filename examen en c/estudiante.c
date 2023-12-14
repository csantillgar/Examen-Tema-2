#include "estudiante.h"
#include <string.h>

void inicializarEstudiante(struct Estudiante *estudiante, const char *nombre, int edad, float promedio) {
    strcpy(estudiante->nombre, nombre);
    estudiante->edad = edad;
    estudiante->promedio = promedio;
    estudiante->numMaterias = 0;
    estudiante->numAsistencias = 0;
}

void mostrarEstudiante(struct Estudiante *estudiante) {
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
    printf("Materias inscritas:\n");
    for (int i = 0; i < estudiante->numMaterias; i++) {
        printf("- %s\n", estudiante->materias[i]);
    }
}

void agregarMateria(struct Estudiante *estudiante, const char *materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    }
}

void eliminarMateria(struct Estudiante *estudiante, const char *materia) {
    // Implementar lógica para eliminar materia
}

void mostrarAsistencia(struct Estudiante *estudiante) {
    printf("Registro de asistencia:\n");
    for (int i = 0; i < estudiante->numAsistencias; i++) {
        printf("Fecha: %s\nMateria: %s\nEstado: %s\n\n", estudiante->asistencias[i].fecha,
               estudiante->asistencias[i].materia, estudiante->asistencias[i].estado);
    }
}

void registrarAsistencia(struct Estudiante *estudiante, struct Asistencia nuevaAsistencia) {
    if (estudiante->numAsistencias < MAX_ASISTENCIAS) {
        estudiante->asistencias[estudiante->numAsistencias] = nuevaAsistencia;
        estudiante->numAsistencias++;
    }
}
