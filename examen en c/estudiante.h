#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 20

struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[10];
};

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][50];
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numMaterias;
    int numAsistencias;
};

void inicializarEstudiante(struct Estudiante *estudiante, const char *nombre, int edad, float promedio);
void mostrarEstudiante(struct Estudiante *estudiante);
void agregarMateria(struct Estudiante *estudiante, const char *materia);
void eliminarMateria(struct Estudiante *estudiante, const char *materia);
void mostrarAsistencia(struct Estudiante *estudiante);
void registrarAsistencia(struct Estudiante *estudiante, struct Asistencia nuevaAsistencia);

#endif // ESTUDIANTE_H
