#include "Caretaker.h"

 Caretaker::Caretaker(){}

Caretaker::~Caretaker(){}

Memento* Caretaker::GetMemento(){
    return this->_memento;
}

void Caretaker::SetMemento(Memento* pMemento){
    this->_memento = pMemento;
}
