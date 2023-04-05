#ifndef AGENCIA_H
#define AGENCIA_H

#include <Trenes.h>



class Agencia
{
private:
    Trenes** trenes;
    int cantidad=0;
public:
    Agencia();
    float cantidadRecaudadaDia(int);
    int totalPersonasTramo(QString,QString);
    int turistasDia(int);
    int posTrenMasRecaudo();
    int cuantosNinosViajaron();
    ~Agencia();
    Trenes *getTrenPosition(int);
    int cuantosAdultosViajaron();
    int posTrenConCapacidad();
    void insertarTrenes(Trenes *tren);
    int getCantidad() const;
    void setCantidad(int newCantidad);
};

#endif // AGENCIA_H
