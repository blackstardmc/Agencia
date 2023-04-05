#include "tramo.h"

QString Tramo::getDestino() const
{
    return destino;
}

void Tramo::setDestino(const QString &newDestino)
{
    destino = newDestino;
}

QString Tramo::getOrigen() const
{
    return origen;
}

void Tramo::setOrigen(const QString &newOrigen)
{
    origen = newOrigen;
}

float Tramo::getPrecio() const
{
    return precio;
}

void Tramo::setPrecio(float newPrecio)
{
    precio = newPrecio;
}

float Tramo::getDistancia() const
{
    return distancia;
}

void Tramo::setDistancia(float newDistancia)
{
    distancia = newDistancia;
}

Tramo::Tramo(QString origen,QString destino,float precio,float distancia)
{
this->destino=destino;
    this->origen=origen;
    this->distancia=distancia;
    this->precio=precio;
}
