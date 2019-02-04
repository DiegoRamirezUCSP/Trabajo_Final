#ifndef PACIENTE_H
#define PACIENTE_H
#include "Persona.h"
#include "vector"
#include <fstream>


class Paciente : public Persona{
    public:
        Paciente(){}
        Paciente(string nom,int ed,int id,string es, string sin) : Persona(nom,ed,id),estado(es),enfermedad(sin){}
        Paciente(const Paciente &o){
            nombre = o.nombre;
            edad = o.edad;
            ID = o.ID;
            estado = o.estado;
            enfermedad = o.enfermedad;
        }
        void set1(){
        Paciente NEWPaciente;

        string Nname;
        cin >> Nname;
        this->nombre = Nname;

        int Nage;
        cin >> Nage;
        this->edad = Nage;

        int NID;
        cin >> NID;
        this->ID = NID;

        string Nestado;
        cin >> Nestado;
        this->estado = Nestado;

        string Nenfer;
        cin >> Nenfer;
        this->enfermedad = Nenfer;

        //NEWPaciente(Nname,Nage,NID,Nestado,Nenfer);
        }
        string getEstado(){
            return estado;
        }
        string getEnfermedad(){
            return enfermedad;
        }
        friend ostream& operator<<(ostream&,Paciente&);
    private:
        string estado,enfermedad;

};

#endif // PACIENTE_H

ostream& operator<<(ostream& o,Paciente& a){
    o << "Nombre: " << a.Getnombre() <<  "\nEdad: " << a.Getedad() << "\nID: " << a.GetID()
        << "\nEstado: " << a.getEstado() << "\nEnfermo de : " << a.getEnfermedad() << "\n";
    return o;
}
