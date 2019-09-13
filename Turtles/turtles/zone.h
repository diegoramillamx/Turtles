#ifndef ZONE_H
#define ZONE_H

#include <QString>

class Zone {
    public:
        Zone();
        unsigned int getIdZone() const;
        void setIdZone(unsigned int value);

        QString getName() const;
        void setName(const QString &value);

        unsigned int getIdMunicipio() const;
        void setIdMunicipio(unsigned int value);

    private:
        unsigned int idZone;
        QString name;
        unsigned int idMunicipio;
    };

#endif // ZONE_H
