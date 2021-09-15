#include "View.h"

View::View() //Inicializa las variables y los atributos
{
}

void View::mostrarCriterios() //Muestra un menu de criterios para el director o directora, ademas de ejecutar las funciones indicadas en este mismo
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
                posgradoJaveriana.modificarCriterios();  //Uso de switch para ejecutar las funciones que desee el usuario
                break;
            case 3:
                posgradoJaveriana.modificarValorCriterios();
                break;

        }
    }while (opcion != 0);
}

void View::mostrarMenu() //Este es el menu principal del programa, menu en el cual vamos a dar inicio al programa y vamos a ejecutar las funciones del mismo
{
    int opcion = -1, opc = -1, opc2 = -1;
    do
    {

        cout << "Menu Acta\n";
        cout << "1. Si eres el o la asistente \n";
        cout << "2. si eres el o la directora \n"; //Menu inicial
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
                    cout << "2. Ver Actas \n"; //Menu de el o la asistente
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
                    cout << "0. Salir \n";    //Menu del director o directora
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
    }while (opcion != 0); //Uso del do while para que se ejecute el menu siempre y cuando la opcion sea diferente de cero
}
