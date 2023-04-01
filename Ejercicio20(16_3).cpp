#include <iostream>
#include <stdlib.h>

using namespace std;

int edad;
int dinero;
int dineroTotal;

int main(){

    for (dinero = 10; dinero <= 1000; dinero = dinero * 2){
        
        cout<<"Que edad tienes: "<<endl;
        cin>>edad;
        cout<<"Recibes en el cumpleaños: "<<dinero<<endl;
        dineroTotal = dineroTotal + dinero;
    }

    cout<<"El dinero total que tendria es: "<<dineroTotal<<" y la edad que tengra es: "<<edad<<endl;

    return 0;
}