#ifndef STACK_H
#define STACK_H

#include "elementopila.h"

class Stack {
    public:
        Stack();

        int size() const;
        bool empty() const;

        void push(const TipoDato& dato);
        void pop() const;
        TipoDato& top() const;
    protected:
        std::shared_ptr<ElementoPila> front = nullptr;
};

#endif // STACK_H
