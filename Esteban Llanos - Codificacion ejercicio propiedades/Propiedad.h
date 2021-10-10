#ifndef PROPIEDAD_H
//Guardas
#define PROPIEDAD_H

#include <iostream>
#include <stdlib.h>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Propiedad
{
private: //Atributos
    int numeroPiso;
    int numeroIdentificacion;
    string area;
    bool parqueadero;

public: //Metodos
    Propiedad();
    void mostrarPropiedad();

    //Gets y Sets
    string getArea();
    void setArea(string area);
    int getNumeroPiso();
    void setNumeroPiso(int numeroPiso);
    int getNumeroIdentificacion();
    void setNumeroNumeroIdentificacion(int numeroIdentificacion);
    bool getParqueadero();
    void setParqueadero(bool parqueadero);
};

#endif //!PROPIEDAD_H