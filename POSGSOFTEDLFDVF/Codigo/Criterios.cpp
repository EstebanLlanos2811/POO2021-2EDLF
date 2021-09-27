#include <iostream>
#include "Criterios.h"

Criterios::Criterios()//Inicializador de variables y atributos
{
    this->criterios = criterios;
    this->criteriosValor = 0;

}

//gets y sets
string Criterios::getCriterios()
{
	return criterios;
}

void Criterios::setCriterios(string Criterios)
{
    this->criterios = criterios;
}

float Criterios::getCriteriosValor()
{
	return criteriosValor;
}

void Criterios::setCriteriosValor(float criteriosValor)
{
    this->criteriosValor = criteriosValor;
}