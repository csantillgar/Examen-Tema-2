#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include <iostream>
#include <vector>
#include "asistencia.h"


class Estudiante {
public:
    std: string nombre;
    int edad;
    float nota;
    std::vector<std::string> asignaturas;
    std::vector<asistencia> asistencias;


    void mostrarEstudiante();
    void agregarMateria(const std::string& materia);
    void eliminarMateria(const std::string& materia);
    void mostrarAsistencia();
    void registrarAsistencia(const Asistencia& nuevaAsistencia);
};

#endif