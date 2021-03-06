//
// Created by lufe0 on 7/05/2021.
//

#include "View.h"

View::View(){
}

void View::agregarJugador()
{
    string nombreJugador;
    float dineroPesos;
    long idJugador;
    cout << "Ingrese el nombre del jugador \n";
    cin.ignore(100, '\n');
    getline(cin, nombreJugador);
    // Id del jugador
    cout << "Ingrese el id del jugador \n";
    cin >> idJugador;
    // Validacion de los datos del jugador
    do
    {
        cout << "Ingrese el dinero en pesos \n";
        cin >> dineroPesos;
    } while (dineroPesos <= 0);

    // Esta linea de codigo controla la excepcion que lanza el controller y lo muestra en pantalla
    try {
        casino.agregarJugador(idJugador, nombreJugador, dineroPesos);
    } catch (std::domain_error ex) {
        // Controla la aparecion de errores.
        // what es el metodo que muestra el mensaje de error de las excepciones
        cout << "ERROR: " << ex.what();
    }
}

void View::jugarView(){
    try {
        long idJugador;
        cout << "Ingrese el id del jugador \n";
        cin >> idJugador;
        float cantGonzos;
        cout << "Cuantos gonzos desea apostar \n";
        cin >> cantGonzos;
        int idJuego;
        bool resultado;
        cout << "Que desea jugar: " << endl;
        cout << "1. Mayor a 13." << endl;
        cout << "2. Dos colores." << endl;
        cout << "3. Veintiuno" << endl;
        cout << "Opcion: ";
        cin >> idJuego;

        resultado = casino.jugar(idJuego, idJugador, cantGonzos);
        if(resultado)
        {
            cout << "gano" << endl;
        }
        else
        {
            cout << "perdio" << std::endl;
        }

    }catch (std::domain_error &ex){
        // Se muestran los mensajes de excepcion obtenidos
        cout << ex.what();
    }
}

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n";
    cout << "1. Agregar jugador " << std::endl;
    cout << "2. Jugar" << std::endl;
    cout << "3. Consultar jugador  " << std::endl;
    cout << "4. Recargar gonzos " << std::endl;
    cout << "5. Retirar jugador casino " << std::endl;
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
            case 1: agregarJugador();
                break;
            case 2:
                jugarView();
                break;
            case 3:
                mostrarJugador();
                break;
            case 4:
                recargarGonzos();
                break;
            case 5:
                retirarJugador();
                break;
        }
    } while (opcion != 0);
}

void View::mostrarJugador() {
    long idJugador;
    try {
        cout << "Ingrese el id del jugador: ";
        cin >> idJugador;
        casino.verInfoJugador(idJugador);
    } catch (std::domain_error ex){
        // Se muestra un error si el usuario no existe
        cout << ex.what();
    }
}

void View::retirarJugador() {
    long id;
    int opc;
    try
    {
        cout << "Ingrese el id del jugador: ";
        cin >> id;
        casino.verInfoJugador(id);
        cout << "Si de verdad desea eliminar al jugar ingrese 1 y si no 0: ";
        cin >> opc;
        if (opc == 1)
        {
            casino.retirarJugador(id);
            cout << "Se retiro al jugador" << endl;
        }
        else if(opc == 0)
        {
            return;
        }
    } catch (std::domain_error ex){
        // Se muestra un error si el usuario no existe
        cout << ex.what();
    }
}

void View::recargarGonzos()
{
    long id;
    try
    {
        cout << "Ingrese el id del jugador: ";
        cin >> id;
        casino.recargarGonzos(id);
        cout << "Se le recargo al jugador con la id " << id << endl;
    } catch (std::domain_error ex){
        // Se muestra un error si el usuario no existe
        cout << ex.what();
    }
}