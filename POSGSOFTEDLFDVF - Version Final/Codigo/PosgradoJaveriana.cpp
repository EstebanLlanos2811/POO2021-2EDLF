#include "PosgradoJaveriana.h"

PosgradoJaveriana::PosgradoJaveriana()
{
    this->numeroActa = 0;
}

void PosgradoJaveriana::agregarCriterios()
{
    int i;
    int valorTemp = 0;
    string criterioTemp;
    float valorTempFinal = 0.0;
    for(i = 0; i < CAP; i++)
    {
        cout << "ingrese el criterio:\n";
        getline(cin, criterioTemp);
        cout << "ingrese el valor del criterio: ";
        cin >> valorTemp;
        valorTempFinal = valorTemp / 100;
        this->criterios[i].setCriterios(criterioTemp);
        this->criterios[i].setCriteriosValor(valorTempFinal);
    }
}

void PosgradoJaveriana::modificarCriterios()
{
    int opc = 0;
    string modificarCriterio;
    int modificarValorCriterio = 0;
    float modificarValorCriterioFinal = 0.0;
    cout << "Ingrese el numero del criterio que desea modificar en una escala de 0 al 7: ";
    cin >> opc;
    cout << "Cual es el nuevo criterio:\n";
    getline(cin, modificarCriterio);
    cout << "Cual es el valor del criterio: ";
    cin >> modificarValorCriterio;
    modificarValorCriterioFinal = modificarValorCriterio / 100;
    this->criterios[opc].setCriterios(modificarCriterio);
    this->criterios[opc].setCriteriosValor(modificarValorCriterioFinal);
}

void PosgradoJaveriana::agregarActa()
{
    string nombre, nombreTrabajo, tipoTrabajo, nombreDirector, nombreCodirector, nombreJurado1, nombreJurado2, fecha;
    int numeroActa, opc;
    Acta acta1;
    fflush(stdin);
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Ingrese el nombre del trabajo: ";
    getline(cin, nombreTrabajo);
    cout << "Ingrese el tipo de trabajo: ";
    getline(cin, tipoTrabajo);
    cout << "Ingrese el nombre del director o directora: ";
    getline(cin, nombreDirector);
    cout << "Hubo un codirector\n";
    cout << "Si hubo ingrese 1 y si no 0: ";
    cin >> opc;
    fflush(stdin);
    if(opc == 1)
    {
        cout << "Ingrese el nombre del codirector o codirectora: ";
        getline(cin, nombreCodirector);
    }
    else if(opc == 0)
    {
        nombreCodirector = "NA";
    }
    cout << "Ingrese el nombre del jurado 1: ";
    getline(cin, nombreJurado1);
    cout << "Ingrese el nombre del jurado 2: ";
    getline(cin, nombreJurado2);
    cout << "Ingrese la fecha: ";
    getline(cin, fecha);

    acta1.setNombreEstudiante(nombre);
    acta1.setNombreTrabajo(nombreTrabajo);
    acta1.setTipoTrabajo(tipoTrabajo);
    acta1.setNombreDirector(nombreDirector);
    acta1.setNombreCodirector(nombreCodirector);
    acta1.setNombreJurado1(nombreJurado1);
    acta1.setNombreJurado2(nombreJurado2);
    acta1.setFecha(fecha);
    acta1.setNumeroActa(this->numeroActa);
    actas.insert(std::pair<int, Acta>(numeroActa, acta1));
    this->numeroActa++;
}

void PosgradoJaveriana::mostrarActa()
{
    if(actas.size() == 0)
    {
        cout << "No hay actas creadas";
        return;
    }
    else
    {
        for (map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
        {
            Acta valor = pActa->second;
            valor.mostrarActa();
        }
    }
}

void PosgradoJaveriana::calcularNotaFinal()
{

}

void PosgradoJaveriana::mostrarCriterios()
{
    int i;
    for(i = 0; i < CAP; i++)
    {
        cout << "El criterio "<< i << " es: \n";
        cout << this->criterios[i].getCriterios();
        cout << "\n";
        cout << "El valor de criterio es: " << this->criterios[i].getCriteriosValor();
    }
}

void PosgradoJaveriana::exportarActa()
{
    ofstream archivo;
    string nombreArchivo;
    int numeroActa;
    cout << "Ingrese el acta que desea imprimir: ";
    cin >> numeroActa;
    archivo.open("Actas.txt", ios::out);
    if(archivo.fail())
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
    else
    {
        archivo << "Facultad de Ingenieria \n";
        archivo << "Pontificia Universidad Javeriana de Cali \n";
        archivo << "Maestria en Ingenieria de Sistemas \n";
        archivo << "El numero de acta es: " << actas[numeroActa].getNumeroActa() << "\n";
        archivo << "La fecha de acta es: " << actas[numeroActa].getFecha() << "\n";
        archivo << "El nombre del estidiante es: " << actas[numeroActa].getNombreEstudiante() << "\n";
        archivo << "El nombre del trabajo es: " << actas[numeroActa].getNombreTrabajo() << "\n";
        archivo << "El tipo de trabajo es: " << actas[numeroActa].getTipoTrabajo() << "\n";
        archivo << "El nombre del director es: " << actas[numeroActa].getNombreDirector() << "\n";
        archivo << "El nombre del codirector es: " << actas[numeroActa].getNombreCodirector() << "\n";
        archivo << "El nombre del primer jurado es: " << actas[numeroActa].getNombreJurado1() << "\n";
        archivo << "El nombre del segundo jurado es: " << actas[numeroActa].getNombreJurado2() << "\n";
        archivo.close();
    }
}