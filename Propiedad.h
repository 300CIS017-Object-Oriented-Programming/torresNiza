#ifndef PROPIEDAD_H // SOLO EN LOS .h
#define PROPIEDAD_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Propiedad
{
private:
    double numIdentificacion;
    int piso;
    float areaPropiedad;
    bool hayParqueadero;

public:
    Propiedad();                                // El contructor x defecto
    Propiedad(double numIdentificacion);
    Propiedad(double numIdentificacion, int piso);
    Propiedad(double numIdentificacion, int piso, float areaPropiedad);
    Propiedad(double numIdentificacion, int piso, float areaPropiedad, bool hayParqueadero);


    float calcularRecargo(float cobroAscensor, float costoBase, float recargo);
    void mostrarDatos();

    double getNumIdentificacion() const;
    void setNumIdentificacion(double numIdentificacion);
    int getPiso() const;
    void setPiso(int piso);
    float getAreaPropiedad() const;
    void setAreaPropiedad(float areaPropiedad);
    bool isHayParqueadero() const;
    void setHayParqueadero(bool hayParqueadero);

};

#endif