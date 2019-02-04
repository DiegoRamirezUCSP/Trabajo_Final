#include <iostream>
#include "MITDoctor.h"
#include <Array.h>
#include <Paciente.h>
#include <fstream>
#include "Caretaker.h"
using namespace std;
template<class T>
bool mayor(T a,T b){
    return a > b;
}
template<class T>
bool menor(T a,T b){
    return a < b;
}

string enfermedades[] = {"fiebre","presion alta","Tuberculosis","envenenamiento"};
Array<string> enfer(enfermedades,4);
string estado[] = {"sano","grave","critico"};
Array<string> es(estado,3);

int main(){
    system("color 1b");
    Paciente p("Diego",14,1,es.getData(1),enfer.getData(1));
    Paciente a("Jose",20,6,es.getData(1),enfer.getData(1));
    Paciente d("Maria",26,4,es.getData(0),enfer.getData(2));
    Paciente e("Alan",18,2,es.getData(2),enfer.getData(2));
    Paciente w[] = {p,a,d,e};
    Array<Paciente> hospital(w,4);

    MITDoctor b("Alex",14,1,234.00,"psiquiatra");
    MITDoctor c("Alfredo",20,6,200.00,"psicologo");
    MITDoctor q("Rosa",26,4,300.00,"Pediatra");
    MITDoctor x("Silvia",18,2,400.00,"neurologo");
    MITDoctor l[] = {b,c,q,x};
    Array<MITDoctor> consutorio(l,4);


   // Caretaker *ptaker = new Caretaker();
    //ptaker->SetMemento(consutorio.createMemento());
    int i;
    cout << "bienvenido al Seguro social:\n" <<
    "1)Ver informacion de pacientes.\n2)Ver informacion de doctores\n"
    << "3)Registrar un pacientwe\n";
    cout << "Que desea : ";
    cin >> i;
    switch(i){
    case 1:
    {
        int p,s1;
        cout << "De que forma?\n1)Mayor\n2)Menor\n3)Recientes :\n ";
        cin >> p;
        if(p == 1){
            hospital.ordenamiento(mayor);
            hospital.print();
        }else if(p == 2){
            hospital.ordenamiento(menor);
            hospital.print();
        }else{
            hospital.print();
        }
        cout << "Desea salir : \n1)si\n2)no\n ";
        cin >> s1;
         if(s1 == 1){
            system("cls");
           cout << "Gracias, vuelva pronto.\n";
            return 0;
        }else
            system("cls");
    }
        break;
    case 2:
    {
        int j,salir2;
        cout << "De que forma?\n1)Mayor\n2)Menor\n3)Recientes :\n ";
        cin >> j;
        if(j == 1){
            consutorio.ordenamiento(mayor);
            consutorio.print();
        }else if(j == 2){
            consutorio.ordenamiento(menor);
            consutorio.print();
        }else{
            consutorio.print();
        }
        cout << "Desea salir : \n1)si\n2)no\n ";
        cin >> salir2;
        if(salir2 == 1){
            system("cls");
            cout << "Gracias, vuelva pronto.\n";
            return 0;
        }else
            system("cls");
    }
        break;
    case 3:
     {
        Paciente newPaciente;
        newPaciente.set1();
        hospital.push_backk(newPaciente);
     }
    break;
    default:
        cout << "No es una opcion valida\n\n\n\n";
        return 0;

    }

    return main();

}
