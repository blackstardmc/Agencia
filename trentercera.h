#ifndef TRENTERCERA_H
#define TRENTERCERA_H

#include "trenes.h"

class TrenTercera : public Trenes
{

public:

    TrenTercera(const QString &n0, int dia);



    float getTotalRecaudado();
    float getPrecio();
};

#endif // TRENTERCERA_H
