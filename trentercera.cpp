#include "trentercera.h"


float TrenTercera::getTotalRecaudado()
{
    return cantNacionales()*getTramo()->getPrecio();
}

float TrenTercera::getPrecio()
{
    return getTramo()->getPrecio();
}

TrenTercera::TrenTercera(const QString &n0, int dia) : Trenes(n0, dia)
{
    setCantidadExtranjeros(0);
    setCantidadNacionales(700);
}
