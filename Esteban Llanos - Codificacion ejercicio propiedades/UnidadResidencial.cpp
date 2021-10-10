#include <iostream>
#include "UnidadResidencial.h"

UnidadResidencial::UnidadResidencial()
{
}

void UnidadResidencial::agregarPropietario()
{
    string nombre, area;
    int identificacion, identificacionP, numeroPiso, tipoPropietario, opc, numeroNinos;
    bool parqueadero;

    fflush(stdin);
    cout << "Ingrese al propietario:" << endl;
    cout << "Ingrese el nombre del propietario: ";
    getline(cin, nombre);
    cout << "Ingrese la identificacion del propietario: ";
    cin >> identificacion;
    cout << "Cual es el tipo de propietario: " << endl;
    cout << "Ingrese 1 si el propietario es fundador " << endl;
    cout << "Ingrese 0 si el propietario es reventa " << endl;
    cout << "Opcion: ";
    cin >> tipoPropietario;
    cout << "Cuantos ninos tiene el propietario: ";
    cin >> numeroNinos;
    cout << endl;
    cout << "Ingrese la propiedad:" << endl;
    fflush(stdin);
    cout << "Ingrese el area donde esta ubicada la propiedad: ";
    getline(cin, area);
    cout << "Ingrese el numero de identificacion la propiedad: ";
    cin >> identificacionP;
    cout << "Ingrese el numero de piso: ";
    cin >> numeroPiso;
    cout << "Ingrese 1 si tiene parqueadero y si no 0: ";
    cin >> opc;
    if(opc == 1)
    {
        parqueadero = true;
    }
    else if(opc == 0)
    {
        parqueadero = false;
    }

    Propietario propietario1;
    Propiedad propiedad1;

    propietario1.setNombre(nombre);
    propietario1.setIdentificacion(identificacion);
    propietario1.setNumeroNinos(numeroNinos);
    propietario1.setTipoPropietario(tipoPropietario);

    propiedad1.setArea(area);
    propiedad1.setNumeroNumeroIdentificacion(identificacionP);
    propiedad1.setNumeroPiso(numeroPiso);
    propiedad1.setParqueadero(parqueadero);

    Propietarios.insert(std::pair<Propiedad, Propietario>(propiedad1, propietario1));
}

void UnidadResidencial::mostrarPropietarios()
{
    if(Propietarios.size() == 0)
    {
        cout << "No hay propietarios creados";
        return;
    }
    else
    {
        for (map<Propiedad, Propietario>::iterator pPropietarios = Propietarios.begin(); pPropietarios != Propietarios.end(); pPropietarios++)
        {
            Propietario valor = pPropietarios->second;
            Propiedad valor1 = pPropietarios->first;
            valor.mostrarPropietario();
            valor1.mostrarPropiedad();
        }
    }
}

void UnidadResidencial::mostrarPropietarioParqueadero()
{
    if(Propietarios.size() == 0)
    {
        cout << "No hay propietarios creados";
        return;
    }
    else
    {
        for (map<Propiedad, Propietario>::iterator pPropietarios = Propietarios.begin(); pPropietarios != Propietarios.end(); pPropietarios++)
        {
            Propietario valor = pPropietarios->second;
            Propiedad valor1 = pPropietarios->first;
            if(valor1.getParqueadero() == true)
            {
                valor.mostrarPropietario();
                valor1.mostrarPropiedad();
            }
        }
    }
}

void UnidadResidencial::imprimirBeneficios()
{
    ofstream archivo;
    int identificacion;
    archivo.open("Propietarios.txt", ios::out);
    if(archivo.fail())
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
    else
    {
        for (map<Propiedad, Propietario>::iterator pPropietarios = Propietarios.begin(); pPropietarios != Propietarios.end(); pPropietarios++)
        {
            cout << "Ingrese el numero de identificacion del propietario: ";
            cin >> identificacion;
            Propietario valor = pPropietarios->second;
            Propiedad valor1 = pPropietarios->first;
            if(valor.getIdentificacion() == identificacion)
            {
                if(valor.getTipoPropietario() == 1)
                {
                    archivo << "Unidad Residencial Paramos del Valle \n";
                    archivo << "==================================== \n";
                    archivo << "El propietario es de tipo fundador \n";
                    archivo << "================================= \n";
                    archivo << "Tiene derecho a usar el salon social de manera gratuita \n";
                    archivo << "Tiene un descuento del 1 porciento en la tienda del edificio \n";
                    archivo.close();
                }
                else if(valor.getTipoPropietario() == 0)
                {
                    archivo << "Unidad Residencial Paramos del Valle \n";
                    archivo << "==================================== \n";
                    archivo << "El propietario es de tipo reventa \n";
                    archivo << "================================= \n";
                    archivo << "Tiene un 5 porciento de descuento en la mesualidad del gimnasio \n";
                    archivo.close();
                }
            }
        }
    }
}

void UnidadResidencial::cambiarPropietario()
{
    int identificacion, tipoPropietario;
    if(Propietarios.size() == 0)
    {
        cout << "No hay propietarios creados";
        return;
    }
    else
    {
        for (map<Propiedad, Propietario>::iterator pPropietarios = Propietarios.begin(); pPropietarios != Propietarios.end(); pPropietarios++)
        {
            cout << "Ingrese el numero de identificacion del propietario: ";
            cin >> identificacion;
            Propietario valor = pPropietarios->second;
            Propiedad valor1 = pPropietarios->first;
            if(valor.getIdentificacion() == identificacion)
            {
                cout << "Ingrese 1 si desea cambiar el propietario a fundador y 0 para cambiar el propietario a reventa: ";
                cin >> tipoPropietario;
                valor.setTipoPropietario(tipoPropietario);
                cout << "Se cambio el tipo de propietario :) " << endl;
            }
        }
    }
}

float UnidadResidencial::cobroAdministracion()
{
    int identificacion;
    float administracion;
    if(Propietarios.size() == 0)
    {
        cout << "No hay propietarios creados";
        return 0.0;
    }
    else
    {
        for (map<Propiedad, Propietario>::iterator pPropietarios = Propietarios.begin(); pPropietarios != Propietarios.end(); pPropietarios++)
        {
            cout << "Ingrese el numero de identificacion del propietario: ";
            cin >> identificacion;
            Propietario valor = pPropietarios->second;
            Propiedad valor1 = pPropietarios->first;
            if(valor.getIdentificacion() == identificacion)
            {
                administracion = (2000 * valor1.getNumeroPiso()) + (50000 * 0.05 * valor.getNumeroNinos()) + 50000;
                cout << "El costo de la administracion es: " << administracion;
                return administracion;
            }
        }
    }
}

float UnidadResidencial::totalRecaudado()
{
}