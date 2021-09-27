#ifndef TRABAJOESTUDIANTE_H
//Guardas
#define TRABAJOESTUDIANTE_H

#include <stdlib.h>
#include <iostream>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class  TrabajoEstudiante
{
private: //Atributos
    string nombreEstudiante;
    string nombreTrabajo;
	string tipoTrabajo;
	string nombreDirector;
    string nombreCodirector;
	string fecha;
    string nombreJurado1;
    string nombreJurado2;
	int numeroActa;

public:
	TrabajoEstudiante(); //Constructor

	// Gets y sets
	string getNombreDirector();
	void setNombreDirector(string NombreDirector);
	string getNombreCodirector();
	void setNombreCodirector(string NombreCodirector);
	string getNombreTrabajo();
	void setNombreTrabajo(string nombreTrabajo);
	string getNombreEstudiante();
	void setNombreEstudiante(string nombreEstudiante);
	string getTipoTrabajo();
	void setTipoTrabajo(string tipoTrabajo);
	string getFecha();
	void setFecha(string fecha);
    int getNumeroActa();
    void setNumeroActa(int numeroActa);
    string getNombreJurado1();
    void setNombreJurado1(string nombreJurado1);
    string getNombreJurado2();
    void setNombreJurado2(string nombreJurado2);
};

#endif //!TRABAJOESTUDIANTE_H