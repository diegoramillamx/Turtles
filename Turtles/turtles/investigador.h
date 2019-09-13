#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <QString>

class Investigador {
    public:
        Investigador();
        QString getNombre() const;
        void setNombre(const QString &value);

        QString getApellidoPat() const;
        void setApellidoPat(const QString &value);

        QString getApellidoMat() const;
        void setApellidoMat(const QString &value);

        QString getUsuario() const;
        void setUsuario(const QString &value);

        QString getContrasenia() const;
        void setContrasenia(const QString &value);

        QString getFechaNacimiento() const;
        void setFechaNacimiento(const QString &value);

        QString getFechaInicio() const;
        void setFechaInicio(const QString &value);

        QString getFechaFin() const;
        void setFechaFin(const QString &value);

        int getIdTipo() const;
        void setIdTipo(int value);

private:
        QString nombre;
        QString apellidoPat;
        QString apellidoMat;
        QString usuario;
        QString contrasenia;
        QString fechaNacimiento;
        QString fechaInicio;
        QString fechaFin;
        int idTipo;
    };

#endif // INVESTIGADOR_H
