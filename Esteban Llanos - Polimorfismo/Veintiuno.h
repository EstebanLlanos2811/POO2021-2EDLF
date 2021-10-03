//
// Created by lufe0 on 22/09/2021.
//

#ifndef CASINO_VENTIUNO_H
#define CASINO_VENTIUNO_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class Veintiuno: public Juego {
    protected:
        int numeroDosJugador, numeroDosCasino, acumJugador, acumCasino;
        virtual float calcularResultado(float gonzosApostar) override;

    public:
        virtual ~Veintiuno();
        virtual float jugar(float gonzosApostar) override;

};

#endif //CASINO_VENTIUNO_H
