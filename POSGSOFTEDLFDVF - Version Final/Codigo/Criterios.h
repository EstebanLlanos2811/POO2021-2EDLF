#ifndef CRITERIOS_H
//Guardas
#define CRITERIOS_H

#include <iostream>
#include <stdlib.h>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

const int CAP = 8;

class Criterios
{
private: //Atributos
    string criterios;
    float criteriosValor;

public: //Metodos
    Criterios();

    //Gets y Sets
    string getCriterios();
    void setCriterios(string criterios);
    float getCriteriosValor();
    void setCriteriosValor(float criteriosValor);
};

#endif //!CRITERIOS_H