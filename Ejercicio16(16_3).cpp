#include <iostream>
#include <stdlib.h>

using namespace std;

int x;

int main(){

    cout<<"Dame un numero: "<<endl;
    cin>>x;
    
    while (x >= 1 && x <= 10){
        cout<<"El numero dado es: "<<x<<endl;
        
        cout<<"Dame un numero: "<<endl;
        cin>>x;
    }

    cout<<"Solo se permiten numeros de 1 a 10"<<endl;
    
    return 0;
}