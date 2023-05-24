#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    string dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, string);
void sacarPila(Nodo *&, string &);

int main(){
    Nodo *pila = NULL;
    string num;
    int m;

    cout<<"Cuantos caracteres deseas introduccir: "<<endl;
    cin>>m;

    for (int i = 0; i < m; i++){
        cout<<"Dame un caracter: "<<endl;
        cin>>num;
        agregarPila(pila, num);
    }

    cout<<" "<<endl;

    cout<<"Sacamos los caracteres de la pila: "<<endl;
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

void agregarPila(Nodo *&pila, string n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento agregado satisfactoriamente. "<<endl;
}

void sacarPila(Nodo *&pila, string &n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;
}