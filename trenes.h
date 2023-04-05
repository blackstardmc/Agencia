#ifndef TRENES_H
#define TRENES_H

#include "Tramo.h"
#include "pasajero.h"



class Trenes
{
private:
    Tramo *tramo;
    QString n0;
    int dia;
    int contador=0;
    int cantidadNacionales;
    int cantidadExtranjeros;
    Pasajero **pasajero;

public:
    virtual float getTotalRecaudado(){
        return 0;
    };
    int getTotalNinos();
    int getTotalAdultos();
    virtual float getPrecio(){return 0;}
    void agregarPasajero(Pasajero* pasajero);
    Pasajero* getPasajeroPos(int pos);
    Trenes(const QString &n0, int dia);
    Tramo *getTramo() const;
    void setTramo(Tramo *newTramo);
    QString getN0() const;
    void setN0(const QString &newN0);
    int getContador() const;
    int cantExtranjeros();
    int cantNacionales();
    void setContador(int newContador);
    int getCantidadNacionales() const;
    void setCantidadNacionales(int newCantidadNacionales);
    int getCantidadExtranjeros() const;
    void setCantidadExtranjeros(int newCantidadExtranjeros);
    Pasajero **getPasajero() const;
    void setPasajero(Pasajero **newPasajero);
    int getDia() const;
    virtual ~Trenes();
    void setDia(int newDia);
};

#endif // TRENES_H
