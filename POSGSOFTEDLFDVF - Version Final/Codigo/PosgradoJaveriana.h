#ifndef POSGRADOJAVERIANA_H
//Guardas
#define POSGRADOJAVERIANA_H

#include <iostream>
#include <string>
#include <string.h>
#include "Acta.h"
#include "Criterios.h"
#include <map>
#include <vector>
#include <fstream>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::getline;
using std::iterator;
using std::map;
using std::string;
using std::vector;
using std::ofstream;
using std::ios;

class PosgradoJaveriana
{
private:
    map<int, Acta> actas;
    vector<Criterios> criterios;
    int numeroActa;

public:
    PosgradoJaveriana();
    void calcularNotaFinal();
    void modificarCriterios();
    void exportarActa();
    void mostrarActa();
    void agregarActa();
    void agregarCriterios();
    void mostrarCriterios();
};

#endif //!POSGRADOJAVERIANA_H