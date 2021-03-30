#include "stack.h"

Stack::Stack() : front{nullptr}
{

}

int Stack::size() const
{
    auto iterator = front;
    int num{0};
    while(iterator != nullptr){
        iterator = iterator->next;
        num++;
    }
    return num;
}

bool Stack::empty() const
{
    if(front == nullptr){
        return true;
    }else{
        return false;
    }
}

// Inserts an element to the top of the stack (first element in list)
void Stack::push(const TipoDato& dato) {
    auto elem = std::make_shared<ElementoPila>(ElementoPila{dato});
    if (front != nullptr) {
        elem->next = front;
        front = elem;
    } else {
        front = elem;
    }
}

// Removes the element at the top of the stack (removes first element)
void Stack::pop() const {
    if (front != nullptr) {
        front == front->next;
    }
}

// Returns the element at the top of the stack (returns first element)
TipoDato& Stack::top() const{
    return front->dato;
}
