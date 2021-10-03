//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float gonzosRendirse;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1 + rand() % (14-1);
    cout << "Su numero aleatorio es: " << numeroJugador << endl;
    cout << "Tiene dos opciones: " << endl;
    cout << "1. Rendirse" << endl;
    cout << "2. Jugar" << endl;
    cout << "Cual es su decision la 1 o la 2: ";
    cin >> opcion;
    if(opcion == 1)
    {
        gonzosRendirse = 0.5 * gonzosApostar;
        return gonzosRendirse;
    }
    else if(opcion == 2)
    {
        numeroCasino = 1 + rand() % (14-1);
        cout << "El numero del casino es: " << numeroCasino << endl;
        gonzosResultado = calcularResultado(gonzosApostar);
        return gonzosResultado;
    }
}


float Mayor13::calcularResultado(float gonzosApostar) {
    float ganar;
    if(numeroJugador > numeroCasino)
    {
        ganar = 2 * gonzosApostar;
        return ganar;
    }
    else if(numeroJugador < numeroCasino || numeroJugador == numeroCasino)
    {
        return 0;
    }
}

Mayor13::~Mayor13() {

}
