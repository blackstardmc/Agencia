#include "agencia.h"

int Agencia::getCantidad() const
{
    return cantidad;
}

void Agencia::setCantidad(int newCantidad)
{
    cantidad = newCantidad;
}

Agencia::Agencia()
{
    trenes=new Trenes*;

}

float Agencia::cantidadRecaudadaDia(int dia)
{float suma=0;
for(int i=0;i<cantidad;i++){
   if(trenes[i]->getDia()==dia){
       suma+=trenes[i]->getTotalRecaudado();
   }

}
return suma;
}

int Agencia::totalPersonasTramo(QString origen, QString destino)
{
int suma=0;
for(int i=0;i<cantidad;i++){
    if(trenes[i]->getTramo()->getOrigen()==origen && trenes[i]->getTramo()->getDestino()==destino){
        suma+=trenes[i]->getContador();
    }
}
return suma;
}

int Agencia::turistasDia(int dia)
{
    int suma=0;
    for(int i=0;i<cantidad;i++){
        if(trenes[i]->getDia()==dia){
            suma+=trenes[i]->cantExtranjeros();
        }
    }
    return suma;
}

int Agencia::posTrenConCapacidad()
{
int pos=0;
for(int i=0;i<cantidad;i++){
    if(trenes[i]->getCantidadExtranjeros()>trenes[i]->cantExtranjeros() || trenes[i]->getCantidadNacionales()>trenes[i]->getCantidadNacionales()){
        pos =i;
        break;
    }
}
return pos;
}

int Agencia::posTrenMasRecaudo()
{
    int mayor=trenes[0]->getTotalRecaudado();
    int pos=0;
    for(int i=0;i<cantidad;i++){
        if(trenes[i]->getTotalRecaudado()>mayor){
            mayor=trenes[i]->getTotalRecaudado();
            pos=i;
        }
    }
    return pos;
}

int Agencia::cuantosNinosViajaron()
{
    int suma=0;
    for(int i=0;i<cantidad;i++){
        suma+=trenes[i]->getTotalNinos();
    }
    return suma;
}

Agencia::~Agencia()
{
    for(int i=0;i<cantidad;i++){
        delete trenes[i];
    }
    delete trenes;
}

Trenes* Agencia::getTrenPosition(int pos)
{
return trenes[pos];
}

int Agencia::cuantosAdultosViajaron()
{
    int suma=0;
    for(int i=0;i<cantidad;i++){
        suma+=trenes[i]->getTotalAdultos();
    }
    return suma;
}

void Agencia::insertarTrenes(Trenes *tren)
{
    trenes[cantidad]=tren;
    cantidad++;
}
