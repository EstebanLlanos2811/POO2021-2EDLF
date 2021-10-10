#include <iostream>
#include "Propiedad.h"

Propiedad::Propiedad()
{
    this->area = area;
    this->numeroIdentificacion = numeroIdentificacion;
    this->numeroPiso = numeroPiso;
    this->parqueadero = parqueadero;
}

void Propiedad::mostrarPropiedad()
{
    cout << "\nInformacion de la propiedad: ";
    cout << "El area en la que esta ubicada la propiedad es: " << area << endl;
    cout << "El numero de piso es: " << numeroPiso << endl;
    cout << "El numero de identificacion es: " << numeroIdentificacion << endl;
    cout << "Parquedero de la propiedad: " << parqueadero << endl; 
}

string Propiedad::getArea()
{
    return area;
}

void Propiedad::setArea(string area)
{
    this->area = area;
}

int Propiedad::getNumeroIdentificacion()
{
    return numeroIdentificacion;
}

void Propiedad::setNumeroNumeroIdentificacion(int numeroIdentificacion)
{
    this->numeroIdentificacion = numeroIdentificacion;
}

int Propiedad::getNumeroPiso()
{
    return numeroPiso;
}

void Propiedad::setNumeroPiso(int numeroPiso)
{
    this->numeroPiso = numeroPiso;
}

bool Propiedad::getParqueadero()
{
    return parqueadero;
}

void Propiedad::setParqueadero(bool parqueadero)
{
    this->parqueadero = parqueadero;
}