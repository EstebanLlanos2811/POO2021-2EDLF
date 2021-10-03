//
// Created by lufe0 on 7/05/2021.
//

#include "Casino.h"

// Constructor que inicializa las ganancias y perdidas en cero
Casino::Casino() {
    cout << "Inicialice casino";
    // Inicia un jugador en el mapa para comenzar
    jugadoresMap.insert({1,new Jugador(1,"Pedro rodriguez", 500)});

    // Inicia  los juegos disponibles y los agrega al mapa de juegos
    Mayor13 * juego1 = new Mayor13();
    juegosDisponibles.push_back(juego1);
    DosColores * juego2 = new DosColores();
    juegosDisponibles.push_back(juego2);
    Veintiuno * juego3 = new Veintiuno();
    juegosDisponibles.push_back(juego3);

    // Agregar aqui los demas juegos
}

void Casino::agregarJugador(long id, string nombreJugador, double dinero) {
    float gonzos;
    // Se agrega jugador solo si no existe con anticipacion
    if (verExisteJugador(id) == false)
    {
        gonzos = convertirPesosAGonzos(dinero);
        Jugador *pJugador = new Jugador (id, nombreJugador, gonzos);
        jugadoresMap.insert(std::pair<long, Jugador *>(pJugador->getId(), pJugador));
    }
    else if(verExisteJugador(id) == true)
    {
        throw std::domain_error("El jugador ya existe\n");
    }
}

bool Casino::jugar(int idJuego, long idJugador, float gonzosApostar) {
    if (gonzosApostar < 1 ){
        throw std::domain_error("Debe apostar al menos 1 gonzo\n");
    }

    if (verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe, no es posible jugar\n");
    }
    if (idJuego > juegosDisponibles.size()){
        throw std::domain_error("NO existe el juego que desea jugar\n");
    }
    if (verPuedeContinuar(idJugador, gonzosApostar)== false){
        throw std::domain_error("No tienes saldo suficiente para jugar\n");
    }
    int posJuego = idJuego -1;
    Juego * pJuegoAJugar = juegosDisponibles.at(idJuego-1);
    Jugador * pJugador = jugadoresMap[idJugador];
    float gonzosGanados = pJuegoAJugar->jugar(gonzosApostar) - gonzosApostar;
    pJugador->actualizarGonzos(gonzosGanados);
    pJugador->aumentarJuegos();
    return(gonzosGanados >= 0);
    return false;
}

void Casino::verInfoJugador(long idJugador){
    if (verExisteJugador(idJugador) == false)
    {
         throw std::domain_error("El jugador no existe\n");
    }
    else if(verExisteJugador(idJugador) == true)
    {
        for (map<long, Jugador *>::iterator pJugador = jugadoresMap.begin(); pJugador != jugadoresMap.end(); pJugador++)
        {
            long verId = pJugador->first;
            if(verId == idJugador)
            {
                Jugador * mostrarJugador = pJugador->second;
                mostrarJugador->mostrarInfo();
                return;
            }
        }
    }
}

bool Casino::verPuedeContinuar(int idJugador, float gonzosApostar) {
    if (verExisteJugador(idJugador) == false)
    {
         throw std::domain_error("El jugador no existe\n");
    }
    else if(verExisteJugador(idJugador) == true)
    {
        for (map<long, Jugador *>::iterator pJugador = jugadoresMap.begin(); pJugador != jugadoresMap.end(); pJugador++)
        {
            long verId = pJugador->first;
            if(verId == idJugador)
            {
                Jugador * verGonzos = pJugador->second;
                if(verGonzos->getCantGonzos() < gonzosApostar)
                {
                    return false;
                }
                else if(verGonzos->getCantGonzos() >= gonzosApostar)
                {
                    return true;
                }
            }
        }
    }
}

void Casino::retirarJugador(long idJugador) {
    if (verExisteJugador(idJugador) == false)
    {
         throw std::domain_error("El jugador no existe\n");
    }
    else if(verExisteJugador(idJugador) == true)
    {
        for (map<long, Jugador *>::iterator pJugador = jugadoresMap.begin(); pJugador != jugadoresMap.end(); pJugador++)
        {
            long verId = pJugador->first;
            if(verId == idJugador)
            {
                Jugador * borrarJugador = pJugador->second;
                delete borrarJugador;
                jugadoresMap.erase(idJugador);
            }
        }
    }
}

void Casino::recargarGonzos(long idJugador) {
    float dinero;
    float gonzos;
    if (verExisteJugador(idJugador) == false)
    {
         throw std::domain_error("El jugador no existe\n");
    }
    else if(verExisteJugador(idJugador) == true)
    {
        for (map<long, Jugador *>::iterator pJugador = jugadoresMap.begin(); pJugador != jugadoresMap.end(); pJugador++)
        {
            long verId = pJugador->first;
            if(verId == idJugador)
            {
                Jugador * recargarJugador = pJugador->second;
                do{
                    cout << "Cuanto dinero desea recargar: ";
                    cin >> dinero;
                }while(dinero < 0);
                gonzos = convertirPesosAGonzos(dinero);
                recargarJugador->actualizarGonzos(gonzos);
            }
        }
    }
}

bool Casino::verExisteJugador(long id) {
     for (map<long, Jugador *>::iterator pJugador = jugadoresMap.begin(); pJugador != jugadoresMap.end(); pJugador++)
        {
            long verId = pJugador->first;
            if(verId == id)
            {
                return true;
            }
        }
     return false;
}

double Casino::convertirPesosAGonzos(double dinero) {
    return (dinero / 100);
}


Casino::~Casino() {
    cout << "Llame al destructor de casino \n";
    // Se libera la memoria del jugadores y de juegos
    for(map<long, Jugador*>::iterator it = jugadoresMap.begin(); it != jugadoresMap.end(); it++)
    {
        Jugador * jugadorTemp = jugadoresMap[it->first];
        delete jugadorTemp;
    }

    for(int i=0; i< juegosDisponibles.size(); i++)
    {
        Juego * juegoTemp = juegosDisponibles.at(i);
        delete juegoTemp;
    }
}