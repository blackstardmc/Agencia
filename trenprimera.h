#ifndef TRENPRIMERA_H
#define TRENPRIMERA_H

#include "trenes.h"

class TrenPrimera : public Trenes
{
public:


    TrenPrimera(const QString &n0, int dia);


public:
    float getTotalRecaudado();

    // Trenes interface
public:
    float getPrecio();
};

#endif // TRENPRIMERA_H
