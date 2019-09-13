#include "subspecies.h"

SubSpecies::SubSpecies() { }

unsigned int SubSpecies::getIdSubSpecie() const {
    return idSubSpecie;
    }

void SubSpecies::setIdSubSpecie(unsigned int value) {
    idSubSpecie = value;
    }

QString SubSpecies::getDescription() const {
    return description;
    }

void SubSpecies::setDescription(const QString &value) {
    description = value;
    }
