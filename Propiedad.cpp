#include "Propiedad.h"

Propiedad::Propiedad() {
    cout << "Entre al constructor por defecto \n";
    hayParqueadero = false; // Toda propiedad x defecto no tenga parqueadero
    numIdentificacion = 0;
    piso = 0;
    areaPropiedad = 0;
}

Propiedad::Propiedad(double numIdentificacion) : numIdentificacion(numIdentificacion) {
    cout << "Entre al constructor con un parametro";
}

Propiedad::Propiedad(double numIdentificacion, int piso) : numIdentificacion(numIdentificacion), piso(piso) {
    cout << "Entre al constructor con dos parametros";
}

Propiedad::Propiedad(double numIdentificacion, int piso, float areaPropiedad) : numIdentificacion(numIdentificacion),
                                                                                piso(piso),
                                                                                areaPropiedad(areaPropiedad) {
    cout << "Entre al constructor con tres parámetros";
}

Propiedad::Propiedad(double numIdentificacion, int piso, float areaPropiedad, bool hayParqueadero) : numIdentificacion(
        numIdentificacion), piso(piso), areaPropiedad(areaPropiedad), hayParqueadero(hayParqueadero) {
    cout << "Entre al constructor con cuatro parámetros";
}


void Propiedad::mostrarDatos() { // Para mostrar los datos
    cout << "El piso es: " << piso << "\n";
    cout << "El area es: " << areaPropiedad << "\n";
    cout << "El numero de identificacion es: " << numIdentificacion << "\n";
    cout << "Tiene parqueadero? -> " << hayParqueadero << "\n";
    cout << "\n";
}

float Propiedad::calcularRecargo(float cobroAscensor, float costoBase, float recargo) {
    //FIXME Calculo real
    return 10;
}

double Propiedad::getNumIdentificacion() const {
    return numIdentificacion;
}

void Propiedad::setNumIdentificacion(double numIdentificacion) {
    Propiedad::numIdentificacion = numIdentificacion;
}

int Propiedad::getPiso() const {
    return piso;
}

void Propiedad::setPiso(int piso) {
    Propiedad::piso = piso;
}

float Propiedad::getAreaPropiedad() const {
    return areaPropiedad;
}

void Propiedad::setAreaPropiedad(float areaPropiedad) {
    Propiedad::areaPropiedad = areaPropiedad;
}

bool Propiedad::isHayParqueadero() const {
    return hayParqueadero;
}

void Propiedad::setHayParqueadero(bool hayParqueadero) {
    Propiedad::hayParqueadero = hayParqueadero;
}

