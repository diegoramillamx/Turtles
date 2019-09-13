#include "ubicacion.h"

Ubicacion::Ubicacion() { }

Ubicacion::Ubicacion(const unsigned int& id, const double& lat, const double& lon) :
    idUbicacion(id), latitud(lat), longitud(lon) {}

unsigned int Ubicacion::getIdUbicacion() const {
    return idUbicacion;
    }

void Ubicacion::setIdUbicacion(unsigned int value) {
    idUbicacion = value;
    }

double Ubicacion::getLatitud() const {
    return latitud;
    }

void Ubicacion::setLatitud(double value) {
    latitud = value;
    }

double Ubicacion::getLongitud() const {
    return longitud;
    }

void Ubicacion::setLongitud(double value) {
    longitud = value;
    }
