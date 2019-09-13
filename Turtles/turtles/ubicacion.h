#ifndef UBICACION_H
#define UBICACION_H


class Ubicacion {
    public:
        Ubicacion();
        Ubicacion(const unsigned int&, const double&, const double&);

        unsigned int getIdUbicacion() const;
        void setIdUbicacion(unsigned int value);

        double getLatitud() const;
        void setLatitud(double value);

        double getLongitud() const;
        void setLongitud(double value);

    private:
        unsigned int idUbicacion;
        double latitud;
        double longitud;
    };

#endif // UBICACION_H
