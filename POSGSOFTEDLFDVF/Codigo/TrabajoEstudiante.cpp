#include <iostream>
#include "TrabajoEstudiante.h"

TrabajoEstudiante::TrabajoEstudiante()//Inicializador de variables y atributos
{
    this->nombreEstudiante = nombreEstudiante;
    this->nombreTrabajo = nombreTrabajo;
    this->tipoTrabajo = tipoTrabajo;
    this->nombreDirector = nombreDirector;
    this->nombreCodirector = nombreCodirector;
    this->nombreJurado1 = nombreJurado1;
    this->nombreJurado2 = nombreJurado2;
}

//gets y sets
string TrabajoEstudiante::getNombreEstudiante()
{
	return nombreEstudiante;
}

void TrabajoEstudiante::setNombreEstudiante(string nombreEstudiante)
{
    this->nombreEstudiante = nombreEstudiante;
}

string TrabajoEstudiante::getNombreTrabajo()
{
	return nombreTrabajo;
}

void TrabajoEstudiante::setNombreTrabajo(string nombreTrabajo)
{
    this->nombreTrabajo = nombreTrabajo;
}

string TrabajoEstudiante::getTipoTrabajo()
{
	return tipoTrabajo;
}

void TrabajoEstudiante::setTipoTrabajo(string tipoTrabajo)
{
    this->tipoTrabajo = tipoTrabajo;
}

string TrabajoEstudiante::getNombreDirector()
{
	return nombreDirector;
}

void TrabajoEstudiante::setNombreDirector(string nombreDirector)
{
    this->nombreDirector = nombreDirector;
}

string TrabajoEstudiante::getNombreCodirector()
{
	return nombreCodirector;
}

void TrabajoEstudiante::setNombreCodirector(string nombreCodirector)
{
    this->nombreCodirector = nombreCodirector;
}

string TrabajoEstudiante::getFecha()
{
    return this->fecha;
}
void TrabajoEstudiante::setFecha(string fecha)
{
    this->fecha = fecha;
}

int TrabajoEstudiante::getNumeroActa()
{
    return this->numeroActa;
}
void TrabajoEstudiante::setNumeroActa(int numeroActa)
{
    this->numeroActa = numeroActa;
}

string TrabajoEstudiante::getNombreJurado1()
{
    return this->nombreJurado1;
}
void TrabajoEstudiante::setNombreJurado1(string nombreJurado1)
{
    this->nombreJurado1 = nombreJurado1;
}

string TrabajoEstudiante::getNombreJurado2()
{
    return this->nombreJurado2;
}
void TrabajoEstudiante::setNombreJurado2(string nombreJurado2)
{
    this->nombreJurado2 = nombreJurado2;
}