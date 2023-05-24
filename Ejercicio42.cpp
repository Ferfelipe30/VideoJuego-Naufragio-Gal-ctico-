/*Realice un programa que contenga el siguiente menu: 
1. Insertar un caracter a la pila.
2. Mostrar todos los elementos de la pila.
3. Salir */

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int num;
    int m;

    cout<<"Menu: "<<endl<<"1. Insertar un caracter a la pila. "<<endl<<"2. Mostrar todos los elementos de la pila. "<<endl<<"3. Salir"<<endl;
    cout<<"Escoge una opcion: "<<endl;
    cin>>m;

    switch(m){
    case 1:
        cout<<"Dame un numero: "<<endl;
        cin>>num;
        agregarPila(pila, num);
        cout<<"Menu: "<<endl<<"1. Mostrar todos los elementos de la pila. "<<endl<<"2. Salida. "<<endl;
        cin>>m;
        switch (m){
        case 1:
            while (pila != NULL){
                sacarPila(pila, num);
                if (pila != NULL){
                    cout<<num<<", ";
                }else{
                    cout<<num<<".";
                }
            }
            break;
        
        case 2:
            cout<<"Saliste del programa."<<endl;
            break;

        default:
            cout<<"ERROR"<<endl;
            break;
        }
        break;

    case 2:
        while (pila != NULL){
            sacarPila(pila, num);
            if (pila != NULL){
                cout<<num<<", ";
            }else{
                cout<<num<<".";
            }
        }
        break;

    case 3:
        cout<<"Saliste del Programa."<<endl;
        break;
    
    default:
        cout<<"ERROR"<<endl;
        break;
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