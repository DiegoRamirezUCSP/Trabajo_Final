#ifndef ARRAY_H
#define ARRAY_H
#include "Memento.h"
#include <iostream>

using namespace std;

template <class T>
class Array{
    private:
        T *data;
        int sizee;
        void resizee(int newsize){
            T *ptr = new T[newsize];
            int minSize = ((newsize > sizee)? sizee : newsize);
            for (int i = 0; i < minSize; i++)
                ptr[i] = data[i];
            delete[] data;
            sizee = newsize;
            data = ptr;
        }
    public:
        Array(T *d,int s){
            data = new T[s];
            for(int i = 0; i < s;i++)
                data[i] = d[i];
            this->sizee = s;
        }

        Array(const Array &o){
        data = new T[sizee];
        for(int i = 0;i < sizee; i++)
            data[i]=o.data[i];
            this->sizee = o.sizee;
        }
        void push_backk(T val){
            resizee(sizee+1);
            data[sizee-1] = val;
        }
        void Insert(T val,int pos){
            resizee(sizee + 1);
            for(int i = sizee-1;i > pos;i--)
                data[i] = data[i-1];
            data[pos] = val;
        }
        void removee(int pos){
            if( pos >= 0 && pos < sizee) {
                for(int i = pos; i < sizee - 1; i++)
                    data[i] = data[i + 1];
                resizee(sizee - 1);
            }
        }
        void print(){
            for(int i = 0;i < sizee;i++)
                cout << data[i] << endl;
            cout << endl;
        }
        int getSize(){
            return sizee;
        }

        T getData(int pos){
            return data[pos];
        }

        void swap2(T &a,T &b){
            T p = a;
            a = b;
            b = p;
        }

        void ordenamiento(bool (*fp)(T ,T )){
            for(int i = 0; i < sizee-1; i++){
                for(int j = i + 1; j < sizee;j++){
                    if((*fp)(data[i],data[j]))
                        swap2(data[i],data[j]);
                }
            }
        }

        Memento *createMemento(){
            return new Memento(this->data);
        }

        void reinstateMemento(Memento *mem){
            this->data = mem->_state;
        }

        virtual ~Array(){delete[] data;}
};

#endif // ARRAY_H
