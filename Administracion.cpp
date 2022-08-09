#include <iostream>
#include "Administracion.h"



Administracion::Administracion()
{

    cout << "Entre al constructor de administracion \n";
    cobroAscensor = 2000;
    costoBase = 50000;
    recargo = 0.05;
    contIds = 1; // Un incremental automatico de ids de propiedades
    inicializarDatos();

    cout << "Terminé la inicializacion \n";
}

/*
 * Método para instanciar los objetos que se usarán en el código
 */
void Administracion::inicializarDatos()
{
    Propietario * persona1 = new Propietario();
    Propietario * persona2 = new Propietario();
    Propietario * persona3 = new Propietario();
    Propietario * persona4 = new Propietario();
    Propiedad * prop1 = new Propiedad();
    Propiedad * prop2 = new Propiedad();
    Propiedad * prop3 = new Propiedad();
    Propiedad * prop4 = new Propiedad(); // Automaticamente al constructor x defecto

    // Inicializar propiedades
    prop1->setNumIdentificacion(contIds++);
    prop1->setAreaPropiedad(160);
    prop1->setHayParqueadero(true);
    prop1->setPiso(10);

    prop2->setNumIdentificacion(contIds++);
    prop2->setAreaPropiedad(30);
    prop2->setHayParqueadero(false);
    prop2->setPiso(9);

    prop3->setNumIdentificacion(contIds++);
    prop3->setAreaPropiedad(45);
    prop3->setHayParqueadero(true);
    prop3->setPiso(7);

    prop4->setNumIdentificacion(contIds++);
    prop4->setAreaPropiedad(60);
    prop4->setHayParqueadero(false);
    prop4->setPiso(5);


    // Inicializo propietarios
    persona1->setNombre("Debora Vilar");
    persona1->setIdentificacion(20202492);
    persona1->setPropiedad(prop1);

    persona2->setNombre("Ignacio Rodriguez");
    persona2->setIdentificacion(30458452);
    persona1->setPropiedad(prop2);

    persona3->setNombre("Erika Munoz");
    persona3->setIdentificacion(1058845781);
    persona1->setPropiedad(prop3);

    persona4->setNombre("Modesto Villaverde");
    persona4->setIdentificacion(31321432);
    persona1->setPropiedad(prop4);

    // Incluir los propietarios en el vector
    propietarios.push_back(persona1);
    propietarios.push_back(persona2);
    propietarios.push_back(persona3);
    propietarios.push_back(persona4);

}

void Administracion::agregarPropiedad()
{
    /*int piso;
    float area;
    bool parquadero
            cout
        << "INDique el piso \n";
    cin >> piso;
    cout << "INDique el area \n";
    cin >> area;
    cout << "INDique 1 parqueadero 0 no parqueadero\n";
    cin >> parquadero;
    Propiedad propTemp(piso, contIds++, parquadero, area);
    propTemp.mostrarDatosPropiedad();
    propiedades.push_back(propTemp);
    return propTemp;*/
}

void Administracion::imprimirUnPropietario(double id)
{
    // Vamos a buscar si un propietario dado esta o no esta en el vector primero
    for (int i = 0; i < propietarios.size(); i++)
    {
        if (propietarios[i]->getIdentificacion() == id)
        {
            propietarios[i]->mostrarDatos();
        }
    }
}

void Administracion::imprimirPropietarios()
{
    // Recorrer el arreglo e imprimir todos los propietarios
    for (int i = 0; i < propietarios.size(); i++)
    {
        propietarios[i]->mostrarDatos();
    }
}

void Administracion::imprimirPropietariosConParqueadero()
{
    // Recorrer el vector e imprimir todos los propietarios que tienen parqueadero.

}

void Administracion::recaudarAdministracion()
{
    float valorAdministracion = 0;
    for (int i = 0; i < propietarios.size(); i++)
    {
        valorAdministracion += propietarios[i]->getPropiedad()->calcularRecargo(cobroAscensor,costoBase,recargo);
    }

    cout << "Este es el valor de administracion " << valorAdministracion <<endl;
}

Administracion::~Administracion() {

    for (int i = 0; i < propietarios.size(); i++)
    {
        // LLama al destructor por cada elemento del arreglo
        delete propietarios[i];
    }
    cout << "LLame al destructor, elimine todo y termine" <<endl;
}
