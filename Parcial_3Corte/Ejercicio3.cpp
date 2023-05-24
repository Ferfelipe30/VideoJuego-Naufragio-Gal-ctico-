#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    srand(getpid());
    Nodo *pila = NULL;
    int num;
    int l[num];

    cout<<"Cuantos numeros aleatorios deseas: "<<endl;
    cin>>num;
    for (int i = 0; i < num; i++){
        l[i] =  1+rand()%(10-1);
        agregarPila(pila, l[i]);
    }

    while (pila != NULL){
        sacarPila(pila, num);
        if (pila != NULL){
            cout<<num<<", ";
        }else{
            cout<<num<<".";
        }
    }

    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento agregado satisfactoriamente. "<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;
}