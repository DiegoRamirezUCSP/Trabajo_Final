#ifndef MITDOCTOR_H
#define MITDOCTOR_H
#include <iostream>
#include "Persona.h"
#include <fstream>
using namespace std;


class MITDoctor : public Persona{
    public:
        MITDoctor(){}
        MITDoctor(string nom, int ed,int id, double suel,string pos): Persona(nom,ed,id)
        ,sueldo(suel), Posicion(pos){}
        MITDoctor(const MITDoctor &o){
            nombre = o.nombre;
            edad = o.edad;
            ID = o.ID;
            sueldo = o.sueldo;
            Posicion = o.Posicion;
        }
        double getSueldo(){
            return sueldo;
        }
        string getPosicion(){
            return Posicion;
        }

        void set1(){
        string Nname;
        cin >> Nname;
        this->nombre = Nname;

        int Nage;
        cin >> Nage;
        this->edad = Nage;

        int NID;
        cin >> NID;
        this->ID = NID;

        double Nsueldo;
        cin >> Nsueldo;
        this->sueldo = Nsueldo;

        string Npos;
        cin >> Npos;
        this->Posicion = Npos;
        }

        friend ostream& operator<<(ostream&,MITDoctor&);
    private:
        double sueldo;
        string Posicion;
};
#endif // MITDOCTOR_H

ostream& operator<<(ostream& o,MITDoctor& a){
    o << "Nombre: " << a.Getnombre() <<  "\nEdad: " << a.Getedad() << "\nID: " << a.GetID()
        << "\nSueldo: $" << a.getSueldo() << "\nPosicion: " << a.getPosicion() << "\n";
    return o;
}
