#ifndef SUBSPECIES_H
#define SUBSPECIES_H

#include <QString>

class SubSpecies {
    public:
        SubSpecies();
        unsigned int getIdSubSpecie() const;
        void setIdSubSpecie(unsigned int value);

        QString getDescription() const;
        void setDescription(const QString &value);

    private:
        unsigned int idSubSpecie;
        QString description;
    };

#endif // SUBSPECIES_H
