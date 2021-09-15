#ifndef ACTA_H
//Guardas
#define ACTA_H

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <vector>
#include "DetalleActa.h"

//Inclusion de librerias
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
private: //Atributos
    vector<DetalleActa> listaDetalles;
    int estado;
    float notaJurado1;
    float notaJurado2;
    float notaFinal;
    
public:
    Acta(); //Constructor
    void mostrarActa();

    //Gets y Sets
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