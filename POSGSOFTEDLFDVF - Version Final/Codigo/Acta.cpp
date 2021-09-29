#include "Acta.h"

Acta::Acta()
{
}

void Acta::mostrarActa()
{
    cout << "El numero del acta es: " << numeroActa << "\n";
    cout << "La fecha del acta es: " << fecha << "\n";
    cout << "El nombre del estudiante es: " << nombreEstudiante << "\n";
    cout << "El nombre del trabajo es: " << nombreTrabajo << "\n";
    cout << "El tipo de trabajo es: " << tipoTrabajo << "\n";
    cout << "El nombre del director es: " <<  nombreDirector << "\n";
    cout << "El nombre del codirector es: " <<  nombreCodirector << "\n";
    cout << "El nombre del primer jurado es: " << nombreJurado1 << "\n";
    cout << "El nombre del segundo jurado es: " << nombreJurado2 << "\n";
    cout << "La nota final es: " << notaFinal << "\n";
    if(estado = reprobado)
    {
        cout << "El estudiante fue reprobado" << "\n";
    }

    else if(estado = aprobado)
    {
        cout << "El estudiante fue aprobado" << "\n";
    }
}

void Acta::sacarEstado()
{
    if(this->notaFinal < notaMin)
    {
        this->estado = reprobado;
    }
    else if(this->notaFinal > notaMin)
    {
        this->estado = aprobado;
    }
}

string Acta::getNombreEstudiante()
{
	return nombreEstudiante;
}

void Acta::setNombreEstudiante(string nombreEstudiante)
{
    this->nombreEstudiante = nombreEstudiante;
}

string Acta::getNombreTrabajo()
{
	return nombreTrabajo;
}

void Acta::setNombreTrabajo(string nombreTrabajo)
{
    this->nombreTrabajo = nombreTrabajo;
}

string Acta::getTipoTrabajo()
{
	return tipoTrabajo;
}

void Acta::setTipoTrabajo(string tipoTrabajo)
{
    this->tipoTrabajo = tipoTrabajo;
}

string Acta::getNombreDirector()
{
	return nombreDirector;
}

void Acta::setNombreDirector(string nombreDirector)
{
    this->nombreDirector = nombreDirector;
}

string Acta::getNombreCodirector()
{
	return nombreCodirector;
}

void Acta::setNombreCodirector(string nombreCodirector)
{
    this->nombreCodirector = nombreCodirector;
}

string Acta::getFecha()
{
    return this->fecha;
}
void Acta::setFecha(string fecha)
{
    this->fecha = fecha;
}

int Acta::getNumeroActa()
{
    return this->numeroActa;
}
void Acta::setNumeroActa(int numeroActa)
{
    this->numeroActa = numeroActa;
}

string Acta::getNombreJurado1()
{
    return this->nombreJurado1;
}
void Acta::setNombreJurado1(string nombreJurado1)
{
    this->nombreJurado1 = nombreJurado1;
}

string Acta::getNombreJurado2()
{
    return this->nombreJurado2;
}
void Acta::setNombreJurado2(string nombreJurado2)
{
    this->nombreJurado2 = nombreJurado2;
}

float Acta::getNotaFinal()
{
    return this->notaFinal;
}
void Acta::setNotaFinal(float notaFinal)
{
    this->notaFinal = notaFinal;
}
