
#include "View.h"

View::View() //Inicializa las variables y los atributos
{
}

void View::mostrarCriterios() //Muestra un menu de criterios para el director o directora, ademas de ejecutar las funciones indicadas en este mismo
{
    int opcion = -1;
    do
    {

        cout << "\nMenu Criterios\n";
        cout << "1. Agregar Criterios \n";
        cout << "2. Modificar Criterios \n";
        cout << "3. Mostrar Criterios \n";
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
                posgradoJaveriana.mostrarCriterios();  //Uso de switch para ejecutar las funciones que desee el usuario
                break;
        }
    }while (opcion != 0);
}

void View::mostrarMenu() //Este es el menu principal del programa, menu en el cual vamos a dar inicio al programa y vamos a ejecutar las funciones del mismo
{
    int opcion = -1, opc = -1, opc2 = -1, opc3 = -1;
    do
    {

        cout << "\nMenu Acta\n";
        cout << "1. Si eres el o la asistente \n";
        cout << "2. si eres el o la directora \n"; //Menu inicial
        cout << "3. si eres jurado \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch(opcion)
        {

            case 1:
                do
                {
                    cout<< "\nMenu Asistente \n";
                    cout << "1. Agregar una Acta \n";
                    cout << "2. Ver Actas \n"; //Menu de el o la asistente
                    cout << "0. Salir \n";
                    std::cout << "Digita el numero: ";
                    std::cin >> opc;

                    switch(opc)
                    {
                        case 1:
                            posgradoJaveriana.agregarActa();
                            break;
                        case 2:
                            posgradoJaveriana.mostrarActa();
                            break;
                    }
                }while(opc != 0);
                break;
            case 2:
                do
                {
                    cout<< "\nMenu Director \n";
                    cout << "1. Criterios \n";
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
                            posgradoJaveriana.mostrarActa();
                            break;
                    }
                }while(opc2 != 0);
                break;
            case 3:
                do
                {
                    cout<< "\nMenu Jurado \n";
                    cout << "1. Calcular Nota \n";
                    cout << "2. Exportar Acta \n";
                    cout << "0. Salir \n";    //Menu del jurado
                    std::cout << "Digita el numero: ";
                    std::cin >> opc3;

                    switch(opc3)
                    {
                        case 1:
                            posgradoJaveriana.calcularNotaFinal();
                            break;
                        case 2:
                            posgradoJaveriana.exportarActa();
                            break;
                    }
                }while(opc3 != 0);
                break;
        }
    }while (opcion != 0); //Uso del do while para que se ejecute el menu siempre y cuando la opcion sea diferente de cero
}
