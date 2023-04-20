/*Realiza un programa que simule los datos de del parques. Si se genere dos muneros iguales el usuario sera
ganador, solamenta tiene tres intentos de lograrlo. Utilice funciones para solucionar el ejercicio.*/

//Autor: Juan Felipe Fernandez Gomez

#include <iostream>
#include <cstdlib>

using namespace std;

void dados (int, int);
int dado1;
int dado2;

int main(){
    srand (getpid());

    cout<<"Lanza los dados: "<<endl;
    for (int i = 1; i <= 3; i++){
        dado1 = 1+rand()%(7-1);
        dado2 = 1+rand()%(7-1);
        cout<<"Intento: "<<i<<endl;
        cout<<"El valor del dado 1 es: "<<dado1<<endl;
        cout<<"El valor del dado 2 es: "<<dado2<<endl;

        dados(dado1,dado2);

    }
    
    return 0;
}

void dados (int dado1, int dado2){
    if(dado1 == dado2){
        cout<<"Es Ganador WIN"<<endl;
    }else{
        cout<<"No son Iguales los dados"<<endl;
        cout<<"Has perdido"<<endl;
    }
}