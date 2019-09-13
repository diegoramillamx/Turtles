#include "zone.h"

Zone::Zone() { }

unsigned int Zone::getIdZone() const {
    return idZone;
    }

void Zone::setIdZone(unsigned int value) {
    idZone = value;
    }

QString Zone::getName() const {
    return name;
    }

void Zone::setName(const QString &value) {
    name = value;
    }

unsigned int Zone::getIdMunicipio() const {
    return idMunicipio;
    }

void Zone::setIdMunicipio(unsigned int value) {
    idMunicipio = value;
    }
