#include <iostream>
#include "Acta.h"

Acta::Acta()
{
}

void Acta::mostrarActa()
{
    cout << "=================================";
    cout << "Los detalles del acta son: \n";
    for (vector<DetalleActa>::iterator pDetalle = listaDetalles.begin();
         pDetalle != listaDetalles.end(); pDetalle++)
    {
        pDetalle->mostrarDetalle();
    }
    cout << "=================================";
    cout << "La nota del jurado 1 es: " << this->notaJurado1 << "\n";
    cout << "La nota del jurado 2 es: " << this->notaJurado2 << "\n";
    cout << "La nota del final es: " << this->notaFinal << "\n";
    cout << "El estado de la entrega: " << this->estado;
}

int Acta::getEstado()
{
    return this->estado;
}
void Acta::setEstado(int estado)
{
    this->estado = estado;
}

float Acta::getNotaJurado1()
{
    return this->notaJurado1;
}
void Acta::setNotaJurado1(float notaJurado1)
{
    this->notaJurado1 = notaJurado1;
}

float Acta::getNotaJurado2()
{
    return this->notaJurado1;
}
void Acta::setNotaJurado2(float notaJurado2)
{
    this->notaJurado2 = notaJurado2;
}

float Acta::getNotaFinal()
{
    return this->notaFinal;
}
void Acta::setNotaFinal(float notaFinal)
{
    this->notaFinal = notaFinal;
}
