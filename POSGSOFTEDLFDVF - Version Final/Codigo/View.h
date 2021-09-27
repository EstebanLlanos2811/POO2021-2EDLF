#ifndef VIEW_H
//Guardas
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include "PosgradoJaveriana.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class View
{
private: //Atributos
	PosgradoJaveriana posgradoJaveriana;
	void mostrarCriterios();

public: //Metodos
	View(); //Constructor
	void mostrarMenu();
};
#endif //!VIEW_H