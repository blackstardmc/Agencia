#ifndef TRAMO_H
#define TRAMO_H

#include <QString>



class Tramo
{
private:
    QString origen,destino;
    float precio,distancia;
public:
    Tramo(QString,QString,float,float);
    QString getDestino() const;
    void setDestino(const QString &newDestino);
    QString getOrigen() const;
    void setOrigen(const QString &newOrigen);
    float getPrecio() const;
    void setPrecio(float newPrecio);
    float getDistancia() const;
    void setDistancia(float newDistancia);
};

#endif // TRAMO_H
