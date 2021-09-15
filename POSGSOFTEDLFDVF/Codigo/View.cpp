#include "View.h"

View::View()
{
}

void View::mostrarCriterios()
{
    int opcion = -1;
    do
    {

        cout << "Menu Criterios\n";
        cout << "1. Agregar Criterios \n";
        cout << "2. Modificar Criterios \n";
        cout << "3. Modificar el Valor de los Criterios \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {
            case 1:
                posgradoJaveriana.agregarCriterios();
                break;
            case 2:
                posgradoJaveriana.modificarCriterios();
                break;
            case 3:
                posgradoJaveriana.modificarValorCriterios();
                break;

        }
    }while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1, opc = -1, opc2 = -1;
    do
    {

        cout << "Menu Acta\n";
        cout << "1. Si eres el o la asistente \n";
        cout << "2. si eres el o la directora \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch(opcion)
        {

            case 1:
                do
                {
                    cout<< "Menu Asistente \n";
                    cout << "1. Agregar una Acta \n";
                    cout << "2. Ver Actas \n";
                    cout << "0. Salir \n";
                    std::cout << "Digita el numero: ";
                    std::cin >> opc;

                    switch(opc)
                    {
                        case 1:
                            posgradoJaveriana.agregarTrabajoEstudiantes();
                            break;
                        case 2:
                            posgradoJaveriana.mostrarActas();
                            break;
                    }
                }while(opc != 0);
                break;
            case 2:
                do
                {
                    cout<< "Menu Director \n";
                    cout << "1. Modificar Criterios \n";
                    cout << "2. Ver Actas \n";
                    cout << "0. Salir \n";
                    std::cout << "Digita el numero: ";
                    std::cin >> opc2;

                    switch(opc2)
                    {
                        case 1:
                            mostrarCriterios();
                            break;
                        case 2:
                            posgradoJaveriana.mostrarActas();
                            break;
                    }
                }while(opc2 != 0);
                break;
        }
    }while (opcion != 0);
}
