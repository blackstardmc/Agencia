#ifndef TRENSEGUNDA_H
#define TRENSEGUNDA_H

#include "trenes.h"

class TrenSegunda : public Trenes
{
public:

    TrenSegunda(const QString &n0, int dia);


    // Trenes interface
public:
    float getTotalRecaudado();

    // Trenes interface
public:
    float getPrecio();
};

#endif // TRENSEGUNDA_H
