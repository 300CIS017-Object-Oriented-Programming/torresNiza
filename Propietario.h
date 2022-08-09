#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include "Propiedad.h"

using std::string;

class Propietario
{
    private:
        double identificacion;
        string nombre;
        Propiedad * propiedad;

    public:
        virtual ~Propietario(); // Destructor
        double getIdentificacion() const;
        const string &getNombre() const;
        Propiedad *getPropiedad() const;
        void setNombre(const string &nombre);
        void setPropiedad(Propiedad *propiedad);
        void setIdentificacion(double identificacion);
        void mostrarDatos();
};

#endif