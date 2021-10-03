//
// Created by lufe0 on 22/09/2021.
//

#include "Veintiuno.h"

float Veintiuno::jugar(float gonzosApostar) 
{
    float gonzosResultado;
    int opc;
    srand(time(NULL));
    numeroJugador = 1 + rand() % (12-2);
    numeroDosJugador = 1 + rand() % (12-2);
    cout << "Los numeros de sus cartas son: " << numeroJugador << " y " << numeroDosJugador << endl;
    acumJugador = numeroJugador + numeroDosJugador;
    if(acumJugador <= 16)
    {
        cout << "Tiene dos opciones:" << endl;
        cout << "1. Rendirse" << endl;
        cout << "2.Jugar" << endl;
        cout << "Opcion: ";
        cin >> opc;
        if(opc == 1)
        {
            return gonzosApostar;
        }
        else if(opc == 2)
        {
            numeroCasino = 1 + rand() % (12-2);
            numeroDosCasino = 1 + rand() % (12-2);
            acumCasino = numeroCasino + numeroDosCasino;
            cout << "Los numeros de las cartas del casino son: " << numeroCasino  << " y " << numeroDosCasino << endl;
            gonzosResultado = calcularResultado(gonzosApostar);
            return gonzosResultado;
        }
    }
    else if(acumJugador >= 17)
    {
        cout << "Tiene dos opciones:" << endl;
        cout << "1. Rendirse" << endl;
        cout << "2.Jugar" << endl;
        cout << "Opcion: ";
        cin >> opc;
        if(opc == 1)
        {
            return 1.5 * gonzosApostar;
        }
        else if(opc == 2)
        {
            numeroCasino = 1 + rand() % (12-2);
            numeroDosCasino = 1 + rand() % (12-2);
            acumCasino = numeroCasino + numeroDosCasino;
            cout << "Los numeros de las cartas del casino son: " << numeroCasino  << " y " << numeroDosCasino << endl;
            gonzosResultado = calcularResultado(gonzosApostar);
            return gonzosResultado;
        }
    }
}

float Veintiuno::calcularResultado(float gonzosApostar)
{
    float ganar;
    int sumar;
    if(acumJugador <= 16)
    {
        do{
            sumar = 1 + rand() % (12 - 2);
            acumJugador += sumar;
            cout << "Se sumo una carta al jugador de " << sumar << endl;
            sumar = 0;
        }while(acumJugador < 17);
    }
    if(acumCasino <= 16)
    {
        do{
            sumar = 1 + rand() % (12 - 2);
            acumCasino += sumar;
            cout << "Se sumo una carta al casino de " << sumar << endl;
            sumar = 0;
        }while(acumCasino < 17);
    }
    cout << "El acumulado del jugador es: " << acumJugador << endl;
    cout << "El acumulado del Casino es: " << acumCasino << endl;
    if(acumJugador > 21)
    {
        return 0;
    }
    else if(acumCasino > 21)
    {
        return 4 * gonzosApostar;
    }
    else if(acumJugador == 21)
    {
        return 4 * gonzosApostar;
    }
    else if(acumJugador > acumCasino)
    {
        return 4 * gonzosApostar;
    }
    else if(acumJugador < acumCasino)
    {
        return 0;
    }
    else if(acumJugador == acumCasino)
    {
        return gonzosApostar;
    } 
}


Veintiuno::~Veintiuno() {

}
