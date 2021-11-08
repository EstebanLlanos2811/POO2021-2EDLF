#include "Admin.h"

Admin::Admin(){
    this->tarifaAdmin = 50000;
    crearDummyData();
}

void Admin::crearDummyData(){
    Propiedad propUno(1, 1, 120, true);
    Fundador * x = new Fundador("Esteban", 1, propUno);
    this->propietarios.insert({1, x});

    Propiedad propDos(2, 2, 160, false);
    Fundador* x1 = new Fundador("jose", 2, propDos);
    this->propietarios.insert({2, x1});
}

float Admin::recaudarAdmin(){
    float recaudo = 0;
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        recaudo += this->propietarios[i]->calcularPagoAdmin(tarifaAdmin);
    }
    return recaudo;
}

string Admin::mostrarBeneficios(int id){
    if (verExistePropietario(id) == false)
    {
        throw std::domain_error("El propietario no existe\n");
    }
    else if(verExistePropietario(id) == true)
    {
        return this->propietarios[id]->mostrarBeneficios();
    }
}

string Admin::mostrarPropParqueadero(){
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        if(this->propietarios[i]->getPropiedad().getParqueadero()){
            return this->propietarios[i]->getNombre();
        }
    }
}

string Admin::cambiarTipoPropietario(int id,  int idNuevoProp, string nuevoProp){
    if (verExistePropietario(id) == false)
    {
        throw std::domain_error("El propietario no existe\n");
    }
    else if(verExistePropietario(id) == true) {
        Propiedad propiedad = this->propietarios[id]->getPropiedad();
        Propietario *pFundador = this->propietarios[id];
        delete (pFundador); // Se elimina el propietario fundador
        this->propietarios.erase(id); // Se elimina también del mapa

        Reventa *pReventa = new Reventa(nuevoProp, idNuevoProp, propiedad);
        this->propietarios.insert({id, pReventa});
        return this->propietarios[id]->getNombre();
    }
}

bool Admin::verExistePropietario(int id) {
    for (map<int, Propietario *>::iterator pPropietario = propietarios.begin(); pPropietario != propietarios.end(); pPropietario++)
    {
        int verId = pPropietario->first;
        if(verId == id)
        {
            return true;
        }
    }
    return false;
}
