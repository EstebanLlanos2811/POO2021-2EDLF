#ifndef ACTA_H
#define ACTA_H

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <vector>
#include "DetalleActa.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

enum estado
{
  reprobado,
  aprobado
};

class Acta
{
private:
    vector<DetalleActa> listaDetalles;
    int estado;
    float notaJurado1;
    float notaJurado2;
    float notaFinal;
    
public:
    Acta();
    void mostrarActa();
    float getNotaJurado1();
    void setNotaJurado1(float notaJurado1);
    float getNotaJurado2();
    void setNotaJurado2(float notaJurado2);
    float getNotaFinal();
    void setNotaFinal(float notaFinal);
    int getEstado();
	void setEstado(int estado);
    vector<DetalleActa> getDetalles() const { return listaDetalles; }

};

#endif //!ACTA_H