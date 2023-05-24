/*Pilas: 
Estructura LIFO: Last in first out
Operaciones basicas: 
Push: Insertar, ingresar
Pop: Sacar, eliminar
Forma de una pila: 
Dato=>*siguiente Cada elemento es un nodo.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);//Prototivo de la funcion meter.
void sacarPila(Nodo *&, int &);//Prototipo de la funcion sacar.

int main(){
    Nodo *pila = NULL;
    int num;

    cout<<"Ingresar un numero: "<<endl;
    cin>>num;
    agregarPila(pila, num);

    cout<<"Ingresar un numero: "<<endl;
    cin>>num;
    agregarPila(pila, num);

    cout<<"Ingresar un numero: "<<endl;
    cin>>num;
    agregarPila(pila, num);

    while (pila != NULL){
        sacarPila(pila, num);
        if(pila != NULL){
            cout<<num<<",";
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