#include <iostream>
#include "DetalleActa.h"

DetalleActa::DetalleActa() //Inicializador de variables y los atributos
{
}

//gets y sets
TrabajoEstudiante DetalleActa::getTrabajoEstudiante()
{
	return trabajoEstudiante;
}

void DetalleActa::setTrabajoEstudiante(TrabajoEstudiante trabajoEstudiante)
{
    this->trabajoEstudiante = trabajoEstudiante;
}

void DetalleActa::agregarCriterios() //Se encarga de agregar la descripcion del problema a ser evaluado
{
    int i;
    for(i = 0; i < CAP; i++)
    {
        cout << "Cual es el " << i << " criterio\n";
        getline(cin, criterios[i]);
        cout << "Agrego el " << i << " criterio\n";
    }
}

void DetalleActa::agregarCriteriosValor() //Se encarga de darle un peso a criterio anteriormente asignado
{
    int i;
    float valorTemp;
    for(i = 0; i < CAP; i++)
    {
        cout << "Cual es el valor del " << i << " criterio\n";
        cin >> valorTemp;
        criteriosValor[i] = valorTemp;
        cout << "Agrego el valor del " << i << " criterio\n";
        valorTemp = 0;
    }
}

void DetalleActa::mostrarDetalle() //Se encarga de mostrar los detalles del acta y del TrabajoEstudiante
{
    int i;
    cout << trabajoEstudiante.getNombreEstudiante() << "\n";
    cout << trabajoEstudiante.getNombreTrabajo() << "\n";
    cout << trabajoEstudiante.getTipoTrabajo() << "\n";
    cout << trabajoEstudiante.getNombreDirector() << "\n";
    cout << trabajoEstudiante.getNombreCodirector() << "\n";
    cout << trabajoEstudiante.getNombreJurado1() << "\n";
    cout << trabajoEstudiante.getNombreJurado2() << "\n";

    cout << "=================================";
    for(i = 0; i < CAP; i++)
    {
        cout << "El criterio " << i << " es: " << criterios[i] << " y tiene un valor de: " << criteriosValor[i] << "\n";
    }
}
