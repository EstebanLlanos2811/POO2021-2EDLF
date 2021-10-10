#include <iostream>
#include "Propietario.h"

Propietario::Propietario()
{
    this->nombre = nombre;
    this->identificacion = identificacion;
    this->tipoPropietario = tipoPropietario;
    this->numeroNinos = numeroNinos;
}

void Propietario::mostrarPropietario()
{
    cout << "El nombre del propietario es: " << nombre << endl;
    cout << "La identificacion del propietario es: " << identificacion << endl;
    cout << "El tipo de propietario es: " << tipoPropietario << endl;
    cout << "El propietario tiene " << numeroNinos << " ninos " << endl;
}

string Propietario::getNombre()
{
    return nombre;
}

void Propietario::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Propietario::getIdentificacion()
{
    return identificacion;
}

void Propietario::setIdentificacion(int identificacion)
{
    this->identificacion = identificacion;
}

int Propietario::getTipoPropietario()
{
    return tipoPropietario;
}

void Propietario::setTipoPropietario(int tipoPropietario)
{
    this->tipoPropietario = tipoPropietario;
}

int Propietario::getNumeroNinos()
{
    return numeroNinos;
}

void Propietario::setNumeroNinos(int numeroNinos)
{
    this->numeroNinos = numeroNinos;
}