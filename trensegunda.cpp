#include "trensegunda.h"



float TrenSegunda::getTotalRecaudado()
{
    return cantNacionales()*getTramo()->getPrecio()+cantExtranjeros()*getTramo()->getPrecio()/80;
}

float TrenSegunda::getPrecio()
{
    return getTramo()->getPrecio()*2;

}

TrenSegunda::TrenSegunda(const QString &n0, int dia) : Trenes(n0, dia)
{
    setCantidadExtranjeros(200);
    setCantidadNacionales(500);
}
