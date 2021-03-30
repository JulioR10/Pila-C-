#ifndef ELEMENTOPILA_H
#define ELEMENTOPILA_H

#include <memory>
#include "tipodato.h"

class ElementoPila
{
public:
    TipoDato dato;
    std::shared_ptr <ElementoPila> next = nullptr;
public:
    ElementoPila(const TipoDato & dato);
    //TipoDato get_dato() const;
};

#endif // ELEMENTOPILA_H
