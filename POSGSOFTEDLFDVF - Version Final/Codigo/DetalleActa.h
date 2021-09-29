#ifndef DETALLEACTA_H
//Guardas
#define DETALLEACTA_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Criterios.h"

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class DetalleActa
{
private:
    float notaJurado1, notaJurado2;
    string observaciones;
    Criterios criterio;

public:
    DetalleActa();
    float getNotaJurado1();
    void setNotaJurado1(float notaJurado1);
    float getNotaJurado2();
    void setNotaJurado2(float notaJurado2);
    string getObservaciones();
    void setObservaciones(string observaciones);
    Criterios getCriterios();
    void setCriterios(Criterios criterio);
};

#endif //!DETALLEACTA_H