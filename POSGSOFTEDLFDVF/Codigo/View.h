#ifndef VIEW_H
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
private:
	PosgradoJaveriana posgradoJaveriana;
	void mostrarCriterios();

public:
	View(); //Constructor
	void mostrarMenu();
};
#endif //!VIEW_H