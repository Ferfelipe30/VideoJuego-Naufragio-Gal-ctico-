/*Crear una pila que reciba 15 nombres de personas posteriormente sacar los elementos y almacenamientos en un arreglo. 
Finalmente mostrar la pila y el arreglo obtenido.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    string dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, string);
void sacarPila(Nodo *&, string &);
int almacenamiento[15];

int main(){
    Nodo *pila = NULL;
    string nombre;

    for (int i = 1; i <= 15; i++){
        if(almacenamiento[15] == 0){
            cout<<"Dame el nombre "<<i<<": "<<endl;
            cin>>nombre;
            agregarPila(pila, nombre);
        }
    }

    cout<<"Nombres sacados de la pila es: "<<endl;
    while (pila != NULL){
        sacarPila(pila, nombre);
        if (pila != NULL){
            cout<<nombre<<", "<<endl;
        }else{
            cout<<nombre<<".";
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