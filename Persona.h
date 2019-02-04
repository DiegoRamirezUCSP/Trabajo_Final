#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <fstream>
#include "Memento.h"
using namespace std;

class Persona{
    protected:
        int edad;
        int ID;
        string nombre;
    public:
        Persona(){}
        Persona(string nom, int ed, int id): nombre(nom) , edad(ed) , ID(id){}
        string Getnombre(){
            return nombre;
        }
        int Getedad(){
            return edad;
        }
        int GetID(){
            return ID;
        }

        virtual void set1(void) = 0;
        friend bool operator>(Persona&,Persona&);
        friend bool operator<(Persona&,Persona&);

};

bool operator>(Persona& a,Persona& b){
    return a.GetID() > b.GetID();
}

bool operator<(Persona& a,Persona& b){
    return a.GetID() < b.GetID();
}


#endif // PERSONA_H
