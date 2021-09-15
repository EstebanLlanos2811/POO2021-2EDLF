#include <iostream>
#include "PosgradoJaveriana.h"

PosgradoJaveriana::PosgradoJaveriana()
{
    this->nombre = "Maetrias";
    this->contNumeroActas = 0;
}

void PosgradoJaveriana::agregarTrabajoEstudiantes()
{
    string nombre, nombreTrabajo, tipoTrabajo, nombreDirector, nombreCodirector, nombreJurado1, nombreJurado2, fecha;
    fflush(stdin); 
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    fflush(stdin); 
    cout << "Ingrese el nombre del trabajo: ";
    getline(cin, nombreTrabajo);
    cout << "Ingrese el tipo de trabajo: ";
    getline(cin, tipoTrabajo);
    cout << "Ingrese el nombre del director o directora: ";
    getline(cin, nombreDirector);
    cout << "Ingrese el nombre del codirector o codirectora: ";
    getline(cin, nombreCodirector);
    cout << "Ingrese el nombre del jurado 1: ";
    getline(cin, nombreJurado1);
    cout << "Ingrese el nombre del jurado 2: ";
    getline(cin, nombreJurado2);
    cout << "Ingrese la fecha: ";
    getline(cin, fecha);

    TrabajoEstudiante trabajoEstudianteTemp;
    trabajoEstudianteTemp.setNombreEstudiante(nombre);
    trabajoEstudianteTemp.setNombreTrabajo(nombreTrabajo);
    trabajoEstudianteTemp.setTipoTrabajo(tipoTrabajo);
    trabajoEstudianteTemp.setNombreDirector(nombreDirector);
    trabajoEstudianteTemp.setNombreCodirector(nombreCodirector);
    trabajoEstudianteTemp.setNombreJurado1(nombreJurado1);
    trabajoEstudianteTemp.setNombreJurado2(nombreJurado2);
    trabajoEstudianteTemp.setNumeroActa(contNumeroActas);
    trabajoEstudianteTemp.setFecha(fecha);
    trabajosEstudiantes[contNumeroActas] = trabajoEstudianteTemp;
    contNumeroActas++;
}

void PosgradoJaveriana::agregarCriterios()
{

}

float PosgradoJaveriana::calcularNotaFinal()
{
    int i;
    float notaJurado1 = 0, notaJurado2 = 0, notaFinal = 0;
    for (vector<Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
	{
		vector<DetalleActa> detalleTemp = pActa -> getDetalles();
		for (vector<DetalleActa>::iterator pDetalle = detalleTemp.begin(); pDetalle != detalleTemp.end(); pDetalle++)
		{
			DetalleActa detalle1 = *pDetalle;
		}
	}
    
}

void PosgradoJaveriana::mostrarActas()
{
    int i;
    for (vector<Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
	{
		vector<DetalleActa> detalleTemp = pActa -> getDetalles();
		for (vector<DetalleActa>::iterator pDetalle = detalleTemp.begin(); pDetalle != detalleTemp.end(); pDetalle++)
		{
            DetalleActa detalle1 = *pDetalle;
            detalle1.mostrarDetalle();

        }
    }
}

void PosgradoJaveriana::modificarCriterios()
{
}

void PosgradoJaveriana::modificarValorCriterios()
{
}
