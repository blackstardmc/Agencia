#include "pasajero.h"


QString Pasajero::getDia() const
{
    return Dia;
}

void Pasajero::setDia(const QString &newDia)
{
    Dia = newDia;
}

float Pasajero::getPrecio(float precio)
{

    if(edad<3){
        return 0;
    }
    else if(edad>3 && edad<12){
        return precio/2;
    }
    else{
        return precio;
    }
}

QString Pasajero::getCI() const
{
    return CI;
}

void Pasajero::setCI(const QString &newCI)
{
    CI = newCI;
}

QString Pasajero::getNombreApellidos() const
{
    return nombreApellidos;
}

void Pasajero::setNombreApellidos(const QString &newNombreApellidos)
{
    nombreApellidos = newNombreApellidos;
}

int Pasajero::getEdad() const
{
    return edad;
}

void Pasajero::setEdad(int newEdad)
{
    edad = newEdad;
}

bool Pasajero::getTipo() const
{
    return tipo;
}

void Pasajero::setTipo(bool newTipo)
{
    tipo = newTipo;
}
