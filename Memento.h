#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>
#include <string>

using namespace std;

class Memento{
    private:
        Memento(const string& state);
        ~Memento();
        void SetState(const string& state);
        string GetState();
        string _state;
};

#endif // MEMENTO_H
