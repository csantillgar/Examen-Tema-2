#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <vector>
#include "Asistencia.h"

class Estudiante {
public:
    std::string nombre;
    int edad;
    float nota;
    std::vector<std::string> asignaturas;
    std::vector<Asistencia> asistencias;

    void mostrarEstudiante();
    void agregarAsignatura(const std::string& asignatura);
    void eliminarAsignatura(const std::string& asignatura);
    void mostrarAsistencia();
    void RegistrarAsistencia(const Asistencia& nuevaAsistencia);
};

#endif // ESTUDIANTE_H
