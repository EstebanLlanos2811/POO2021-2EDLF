#ifndef PROPIETARIO_H
//Guardas
#define PROPIETARIO_H

#include <iostream>
#include <stdlib.h>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Propietario
{
private: //Atributos
    string nombre;
    int identificacion;
    int tipoPropietario;
    int numeroNinos;

public: //Metodos
    Propietario();
    void mostrarPropietario();

    //Gets y Sets
    string getNombre();
    void setNombre(string nombre);
    int getIdentificacion();
    void setIdentificacion(int identificacion);
    int getTipoPropietario();
    void setTipoPropietario(int tipoPropietario);
    int getNumeroNinos();
    void setNumeroNinos(int numeroNinos);
};

#endif //!PROPIETARIO_H