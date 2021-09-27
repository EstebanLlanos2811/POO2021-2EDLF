#include <iostream>
#include "PosgradoJaveriana.h"

PosgradoJaveriana::PosgradoJaveriana()//Inicializador de variables y atributos
{
    this->nombre = "Maetrias";
    this->contNumeroActas = 0;
}

void PosgradoJaveriana::agregarTrabajoEstudiantes() //Se encarga de preguntarle a el o la asistente los valores pertenecientes al acta, esto con el fin de crearla
                                                    //y asignar valores, para que sean usados en las funciones posteriormente
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
    cout << "Ingrese el nombre del director o directora: "; //Esta parte del codigo se encarga de preguntar los valores
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
    trabajoEstudianteTemp.setNombreDirector(nombreDirector);  //Esta parte se encarga de asignar los valores por medio de sets
    trabajoEstudianteTemp.setNombreCodirector(nombreCodirector);
    trabajoEstudianteTemp.setNombreJurado1(nombreJurado1);
    trabajoEstudianteTemp.setNombreJurado2(nombreJurado2);
    trabajoEstudianteTemp.setNumeroActa(contNumeroActas);
    trabajoEstudianteTemp.setFecha(fecha);
    trabajosEstudiantes[contNumeroActas] = trabajoEstudianteTemp;
    contNumeroActas++;
}

void PosgradoJaveriana::agregarCriterios() //Se encarga de preguntarle al director o directora los criterios a ser evaluados y el valor de los mismos
{
  
}

void PosgradoJaveriana::mostrarActas() //Se encarga de imprimir la informacion correspondiente al acta
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

void PosgradoJaveriana::modificarCriterios() //Se encarga de modificar los criterios a evaluar y esta funcion solo la puede ejecutar el director o directora del programa
{
}

void PosgradoJaveriana::modificarValorCriterios() //Se encarga de modificar los valores de los criterios a ser evaluados
{
}
