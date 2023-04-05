#include "trenprimera.h"



float TrenPrimera::getTotalRecaudado()
{
    return cantNacionales()*getTramo()->getPrecio()+cantExtranjeros()*getTramo()->getPrecio()/70;
}

float TrenPrimera::getPrecio()
{
    return getTramo()->getPrecio()*3;
}

TrenPrimera::TrenPrimera(const QString &n0, int dia) : Trenes(n0, dia)
{
    setCantidadExtranjeros(400);
    setCantidadNacionales(300);
}
