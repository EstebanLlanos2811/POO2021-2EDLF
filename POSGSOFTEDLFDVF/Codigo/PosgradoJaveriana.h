#ifndef POSGRADOJAVERIANA_H
#define POSGRADOJAVERIANA_H

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Acta.h"
#include "TrabajoEstudiante.h"

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class PosgradoJaveriana
{
private:
    string nombre;
    vector<Acta> actas;
    vector<TrabajoEstudiante> trabajosEstudiantes;
    int contNumeroActas;

public:
    PosgradoJaveriana();
    PosgradoJaveriana(string nombre);
    string getNombre();
    void mostrarActas();
    void agregarTrabajoEstudiantes();
    void agregarCriterios();
    float calcularNotaFinal();
    void modificarCriterios();
    void modificarValorCriterios();
};

#endif //!POSGRADOJAVERIANA_H