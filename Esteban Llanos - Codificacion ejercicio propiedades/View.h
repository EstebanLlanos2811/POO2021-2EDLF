#ifndef VIEW_H
//Guardas
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include "UnidadResidencial.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class View
{
private: //Atributos
	UnidadResidencial paramosDelValle;

public: //Metodos
	View(); //Constructor
	void mostrarMenu();
};
#endif //!VIEW_H