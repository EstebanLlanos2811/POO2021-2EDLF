#ifndef ACTA_H
//Guardas
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include "DetalleActa.h"
#include <vector>
#include <string.h>

//Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

enum Estado
{
  reprobado, 
  aprobado
};

const float notaMin = 3.5;

class Acta
{
private:
    string nombreEstudiante, nombreTrabajo, nombreDirector, nombreCodirector, nombreJurado1, nombreJurado2, fecha, tipoTrabajo;
    int numeroActa;
    float notaFinal;
    Estado estado;
    vector<DetalleActa> listaDetalles;
    
public:
        Acta();
        void mostrarActa();
        void sacarEstado();

        //Gets y Sets
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
        Estado getEstado();
        void setEstado(Estado estado);
        float getNotaFinal();
        void setNotaFinal(float notaFinal);
        vector<DetalleActa> getDetalles() const { return listaDetalles; }
};
#endif //!ACTA_H