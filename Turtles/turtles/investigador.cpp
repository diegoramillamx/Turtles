#include "investigador.h"

Investigador::Investigador() { }

QString Investigador::getNombre() const {
    return nombre;
    }

void Investigador::setNombre(const QString &value) {
    nombre = value;
    }

QString Investigador::getApellidoPat() const {
    return apellidoPat;
    }

void Investigador::setApellidoPat(const QString &value) {
    apellidoPat = value;
    }

QString Investigador::getApellidoMat() const {
    return apellidoMat;
    }

void Investigador::setApellidoMat(const QString &value) {
    apellidoMat = value;
    }

QString Investigador::getUsuario() const {
    return usuario;
    }

void Investigador::setUsuario(const QString &value) {
    usuario = value;
    }

QString Investigador::getContrasenia() const {
    return contrasenia;
    }

void Investigador::setContrasenia(const QString &value) {
    contrasenia = value;
    }

QString Investigador::getFechaNacimiento() const {
    return fechaNacimiento;
    }

void Investigador::setFechaNacimiento(const QString &value) {
    fechaNacimiento = value;
    }

QString Investigador::getFechaInicio() const {
    return fechaInicio;
    }

void Investigador::setFechaInicio(const QString &value) {
    fechaInicio = value;
    }

QString Investigador::getFechaFin() const {
    return fechaFin;
    }

void Investigador::setFechaFin(const QString &value) {
    fechaFin = value;
    }

int Investigador::getIdTipo() const {
    return idTipo;
    }

void Investigador::setIdTipo(int value) {
    idTipo = value;
    }
