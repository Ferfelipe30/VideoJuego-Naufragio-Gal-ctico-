#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int añoNacimiento;
int añoActual = 2023;
int edad;

int main(){
    setlocale(LC_CTYPE, "Spanish");

    cout<<"Cual es tu año de nacimiento: ";
    cin>>añoNacimiento;
    cout<<"Tu año de nacimento que tu diste fue: "<<añoNacimiento << "\n";

    edad = añoActual-añoNacimiento;

    cout<<"Tu edad es: "<<edad;

    return 0;
}