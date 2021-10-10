#ifndef UNIDADRESIDENCIAL_H
//Guardas
#define UNIDADRESIDENCIAL_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <fstream>
#include "Propietario.h"
#include "Propiedad.h"

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::map;
using std::ios;

class UnidadResidencial
{
private: //Atributos
    map<Propiedad, Propietario> Propietarios;

public: //Metodos
    UnidadResidencial(); //Constructor
    void cambiarPropietario();
    void agregarPropietario();
    void imprimirBeneficios();
    float cobroAdministracion();
    float totalRecaudado();
    void mostrarPropietarios();
    void mostrarPropietarioParqueadero();

};

#endif //!UNIDADRESIDENCIAL_H