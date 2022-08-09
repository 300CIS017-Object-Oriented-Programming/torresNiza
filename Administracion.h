#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include "Propietario.h"
#include "Propiedad.h"
#include <vector>

using std::string;
using std::vector;
using std::endl;
using std::cout;

class Administracion
{
private:
    float cobroAscensor;
    float costoBase;
    float recargo;
    int contIds;
    vector<Propietario*> propietarios;
    void inicializarDatos();

public:
    Administracion();
    virtual ~Administracion();

    void imprimirPropietariosConParqueadero(); 
    void imprimirUnPropietario(double id);
    void imprimirPropietarios();
    void recaudarAdministracion();
    void agregarPropiedad();
    void agregarPropietario();
    void relacionarPropietarioPropiedad();
};

#endif