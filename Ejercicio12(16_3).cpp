#include <iostream>
#include <stdlib.h>

using namespace std;

int num1;
int num2;
int num3;
int s;

int main(){

    while(s<=200){
        cout<<"Dame un numero: "<<endl;
        cin>>num1;
        cout<<"Dame un numero: "<<endl;
        cin>>num2;
        cout<<"Dame un numero: "<<endl;
        cin>>num3;
        s = num1 + num2 + num3;
        cout<<"La suma de los numeros es: "<<s<<endl;
    }
    
    return 0;
}