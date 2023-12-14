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
    std::vector<Asistencia> asistencias;

};