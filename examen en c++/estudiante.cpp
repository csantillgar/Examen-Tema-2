#include "Estudiante.h"

void Estudiante::mostrarEstudiante() {
    std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nNota: " << nota << "\n";
    std::cout << "Asignaturas inscritas:\n";
    for (const auto& asignatura : asignaturas) {
        std::cout << "- " << asignatura << "\n";
    }
}

void Estudiante::agregarAsignatura(const std::string& asignatura) {
    asignaturas.push_back(asignatura);
}

void Estudiante::eliminarAsignatura(const std::string& asignatura) {
    // Implementar lógica para eliminar asignatura
}

void Estudiante::mostrarAsistencia() {
    std::cout << "Registro de asistencia:\n";
    for (const auto& asistencia : asistencias) {
        std::cout << "Fecha: " << asistencia.fecha << "\nAsignatura: " << asistencia.asignatura
                  << "\nEstado: " << asistencia.estado << "\n\n";
    }
}

void Estudiante::registrarAsistencia(const asistencia& nuevaAsistencia) {
    asistencias.push_back(nuevaAsistencia);
}
