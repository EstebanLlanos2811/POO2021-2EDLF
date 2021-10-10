#include <iostream>
#include "View.h"

View::View()
{
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "\nMenu Paramos del Valle\n";
        cout << "1. Agregar propietario \n";
        cout << "2. Cambiar propietario \n";
        cout << "3. Mostrar propietarios \n";
        cout << "4. Mostrar propietarios con parqueadero \n";
        cout << "5. Cobro administracion \n";
        cout << "6. Valor recaudado \n";
        cout << "7. Imprimir beneficios \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {
            case 1:
                paramosDelValle.agregarPropietario();
                break;
            case 2:
                paramosDelValle.cambiarPropietario();
                break;
            case 3:
                paramosDelValle.mostrarPropietarios();
                break;
            case 4:
                paramosDelValle.mostrarPropietarioParqueadero();
                break;
            case 5: 
                paramosDelValle.cobroAdministracion();
                break;
            case 6:
                paramosDelValle.totalRecaudado();
                break;
            case 7:
                paramosDelValle.imprimirBeneficios();
                break;
        }
    }while (opcion != 0);
}