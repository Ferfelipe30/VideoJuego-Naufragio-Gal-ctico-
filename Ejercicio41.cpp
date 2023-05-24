/*Crear programa para agregar numeros enteros a una pila, hasta que el usuario lo decida (al pulsar s para seguir o
n para finalizar) despues mostrar todos los numeros introducidos en la pila. */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);
char l;

int main(){
    Nodo *pila = NULL;
    int num;

    do{
        cout<<"Dame un numero: "<<endl;
        cin>>num;
        agregarPila(pila, num);
        cout<<"Quieres seguir agregando numeros."<<endl;
        cin>>l;
    }while (l == 's');

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
    Nodo *nuevo_nodo = new Nodo(); // Crear espacio en memoria para el nuevo nodo.
    nuevo_nodo -> dato = n; // Darle el vlaor n del parametro al dato.
    nuevo_nodo -> siguiente = pila; // Apuntar al siguiente nodo, en principio es null.
    pila = nuevo_nodo; // cambiar el valor de pila por el nuevo nodo.
    cout<<"Elementos agregados satisfactoriamente."<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;
}