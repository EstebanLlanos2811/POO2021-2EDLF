#include "DetalleActa.h"

DetalleActa::DetalleActa()
{
    this->notaJurado1 = notaJurado1;
    this->notaJurado2 = notaJurado2;
    this->observaciones = observaciones;
    this->criterio = criterio;
}

float DetalleActa::getNotaJurado1()
{
    return this->notaJurado1;
}

void DetalleActa::setNotaJurado1(float notaJurado1)
{
    this->notaJurado1 = notaJurado1;
}

void DetalleActa::setNotaJurado2(float notaJurado2)
{
    this->notaJurado2 = notaJurado2;
}

float DetalleActa::getNotaJurado2()
{
    return this->notaJurado2;
}

string DetalleActa::getObservaciones()
{
    return this->observaciones = observaciones;
}

void DetalleActa::setObservaciones(string observaciones)
{
    this->observaciones = observaciones;
}

Criterios DetalleActa::getCriterios()
{
    return this->criterio;
}

void DetalleActa::setCriterios(Criterios criterio)
{
    this->criterio = criterio;
}