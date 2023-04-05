#ifndef PASAJERO_H
#define PASAJERO_H

#include <QString>



class Pasajero
{
private:
    QString nombreApellidos,CI,Dia;
    bool tipo;// True Nacional False Extranjero
    int edad;
public:

    Pasajero(QString nombreApellidos, QString CI, bool tipo,
             int edad)
        : nombreApellidos(std::move(nombreApellidos)), CI(std::move(CI)),
           tipo(tipo), edad(edad) {}
    bool getTipo() const;
    void setTipo(bool newTipo);
    QString getDia() const;
    void setDia(const QString &newDia);
    float getPrecio(float precio);
    QString getCI() const;
    void setCI(const QString &newCI);
    QString getNombreApellidos() const;
    void setNombreApellidos(const QString &newNombreApellidos);
    int getEdad() const;
    void setEdad(int newEdad);
};

#endif // PASAJERO_H
