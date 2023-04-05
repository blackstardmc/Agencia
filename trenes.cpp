#include "trenes.h"

Tramo *Trenes::getTramo() const
{
    return tramo;
}

void Trenes::setTramo(Tramo *newTramo)
{
    tramo = newTramo;
}

QString Trenes::getN0() const
{
    return n0;
}

void Trenes::setN0(const QString &newN0)
{
    n0 = newN0;
}

int Trenes::getContador() const
{
    return contador;
}

int Trenes::cantExtranjeros()
{
    int c=0;
for(int i=0;i<getContador();i++){
    if(!pasajero[i]->getTipo()){
        c++;
    }

}
return c;
}


int Trenes::cantNacionales()
{
    int c=0;
for(int i=0;i<getContador();i++){
    if(pasajero[i]->getTipo()){
        c++;
    }

}
return c;
}

void Trenes::setContador(int newContador)
{
    contador = newContador;
}

int Trenes::getCantidadNacionales() const
{
    return cantidadNacionales;
}

void Trenes::setCantidadNacionales(int newCantidadNacionales)
{
    cantidadNacionales = newCantidadNacionales;
}

int Trenes::getCantidadExtranjeros() const
{
    return cantidadExtranjeros;
}

void Trenes::setCantidadExtranjeros(int newCantidadExtranjeros)
{
    cantidadExtranjeros = newCantidadExtranjeros;
}

Pasajero **Trenes::getPasajero() const
{
    return pasajero;
}

void Trenes::setPasajero(Pasajero **newPasajero)
{
    pasajero = newPasajero;
}





int Trenes::getDia() const
{
    return dia;
}

Trenes::~Trenes()
{
    for(int i=0;i<contador;i++){
        delete pasajero[i];
    }
    delete pasajero;
    delete tramo;
}



void Trenes::setDia(int newDia)
{
    dia = newDia;
}

int Trenes::getTotalNinos()
{
    int c=0;
    for(int i=0;i<getContador();i++){
        if(getPasajeroPos(i)->getEdad()<12){
            c++;
        }
    }
    return c;

}

int Trenes::getTotalAdultos()
{
    int c=0;
    for(int i=0;i<getContador();i++){
        if(getPasajeroPos(i)->getEdad()>12){
            c++;
        }
    }
    return c;
}

void Trenes::agregarPasajero(Pasajero *pasajero)
{
    this->pasajero[contador]=pasajero;
    contador++;
}

Pasajero *Trenes::getPasajeroPos(int pos)
{
    return pasajero[pos];
}


Trenes::Trenes(const QString &n0, int dia) : n0(n0),
    dia(dia)
{
    tramo=new Tramo("","",0,0);
    pasajero=new Pasajero*;

}
