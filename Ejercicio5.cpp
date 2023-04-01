#include<iostream>

using namespace std;

double nota1;
double nota2;
double nota3;
double promedio;

int main(){

    cout<<"cual es la nota 1: ";
	cin>>nota1;
	cout<<"La nota 1 es: "<<nota1<<endl;
	cout<<"cual es la nota 2: ";
	cin>>nota2;
	cout<<"La nota 2 es: "<<nota2<<endl;
	cout<<"cual es la nota 3: ";
	cin>>nota3;
	cout<<"La nota 3 es: "<<nota3<<endl;
	
	promedio = (nota1+nota2+nota3)/3;
	
	cout<<"El promedio de las notas es: "<<promedio;

    if(promedio>=3.0){
        cout<<"El estudiante paso el AÑO"<<endl;
    }else{
        cout<<"El estudiante perdio el AÑO"<<endl;
    }

    return 0;
}