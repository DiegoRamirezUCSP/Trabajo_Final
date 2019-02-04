#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"

class Caretaker{
    public:
        Caretaker();
        ~Caretaker();
        void SetMemento(Memento*);
        Memento* GetMemento();
    private:
        Memento* _memento;
};

#endif // CARETAKER_H
