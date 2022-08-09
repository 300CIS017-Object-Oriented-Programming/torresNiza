#include <iostream>
#include "Propietario.h"

void Propietario::mostrarDatos()
{ // Para mostrar los datos
    cout << "El nombre es: " << nombre << "\n";
    //FIXME mejorar la impresion para que se vean mejor los numeros
    cout << "La identificacion es: " << identificacion << "\n";
    cout << "**********************";
}

Propiedad *Propietario::getPropiedad() const {
    return propiedad;
}

double Propietario::getIdentificacion() const {
    return identificacion;
}
const string &Propietario::getNombre() const {
    return nombre;
}

void Propietario::setIdentificacion(double identificacion) {
    Propietario::identificacion = identificacion;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

void Propietario::setPropiedad(Propiedad *propiedad) {
    Propietario::propiedad = propiedad;
}

Propietario::~Propietario() {
    delete propiedad;
}

