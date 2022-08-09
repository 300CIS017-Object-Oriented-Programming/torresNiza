#include <iostream>
#include "Administracion.h"

using std::cin;
using std::cout;
using std::string;

void menu(Administracion & administracion)
{
    int opc = 0;
    do
    {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Mostrar informacion \n";
        cout << "2. Recaudar administracion \n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc)
        {
            case 1:
                administracion.imprimirPropietarios();
                break;
            case 2:
                administracion.recaudarAdministracion();
                break;
            default:
                break;
        }
    } while (opc != -1);
}

int main()
{

    Administracion administracion;
    menu(administracion);
    return 0;
}