//
// Created by lufe0 on 3/11/2021.
//
#include "gtest/gtest.h"
#include "../src/Model/Admin.h"

TEST(AdminTest, recaudarAdmin)
{
    float recaudo = 0;

    Admin prueba;
    recaudo = prueba.recaudarAdmin();

    EXPECT_EQ(106005, recaudo);
}

TEST(AdminTest, mostrarBeneficios)
{
    int id = 1;
    string beneficios = "1. Derecho a usar el salón social de manera gratuita"
                        "2. Descuento del 1 para la compra de productos en la tienda del edificio.";

    Admin prueba;

    EXPECT_EQ(beneficios, prueba.mostrarBeneficios(id));

}

TEST(AdminTest, mostrarPropParqueadero)
{
    string propietario = "Esteban";

    Admin prueba;

    EXPECT_EQ( propietario, prueba.mostrarPropParqueadero());
}

TEST(AdminTest, cambiarTipoPropietario)
{
    int id = 2;
    int idNuevoProp = 3;
    string nuevoProp = "luis";

    Admin prueba;

    EXPECT_EQ(nuevoProp, prueba.cambiarTipoPropietario(id, idNuevoProp, nuevoProp));
}
