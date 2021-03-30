#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack pila;

    pila.push(TipoDato{"avion"});
    pila.push(TipoDato{"volcan"});
    pila.push(TipoDato{"barco"});

    cout << pila.size() << endl;

    return 0;
}
