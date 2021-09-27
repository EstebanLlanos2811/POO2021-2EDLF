#ifndef CRITERIOS_H
//Guardas
#define CRITERIOS_H

#include <stdlib.h>
#include <iostream>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Criterios
{
private: //Atributos
    string criterios;
    float criteriosValor;

public: //Metodos
    Criterios();
    string getCriterios();
    void setCriterios(string criterios);
    float getCriteriosValor();
    void setCriteriosValor(float criteriosValor);
};

#endif //!CRITERIOS_H