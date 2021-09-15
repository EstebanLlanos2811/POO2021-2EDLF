#ifndef DETALLEFACTA_H
#define DETALLEACTA_H

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "TrabajoEstudiante.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int CAP = 8;

class  DetalleActa
{
private: //Atributos
	TrabajoEstudiante trabajoEstudiante;
	string criterios[CAP];
	float criteriosValor[CAP];
public:
	DetalleActa(); //Constructor
	void mostrarDetalle();

	// Gets y sets
	void agregarCriterios();
	void agregarCriteriosValor();
	TrabajoEstudiante getTrabajoEstudiante();
	void setTrabajoEstudiante(TrabajoEstudiante trabajoEstudiante);
};

#endif //!DETALLEACTA_H