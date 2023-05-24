/*Puntero: sirve para almacenar direcciones de memoria.
con * imprime el valor dentro de la variable en este caso 5 pero sin el * imprime el valor en la memoria*/

#include <iostream>

using namespace std;

int main(){
    /*int numero = 5;
    int *puntero;
    puntero = &numero;
    cout<<puntero<<endl;*/

    int numero = 5;
    int * puntero;
    puntero = &numero;
    numero = 12;
    cout<<*puntero<<endl;

    return 0;
}