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

    if(promedio >= 0 && promedio < 1){
        cout<<"Estudiante reprobado"<<endl;
    }else if(promedio >= 1 && promedio < 2.5){
        cout<<"Estudiante en condicionamiento"<<endl;
    }else if(promedio >= 2.5 && promedio < 2.9){
        cout<<"Estudiante con probabilidad de aprobar"<<endl;
    }else if(promedio >= 3 && promedio < 4){
        cout<<"Estudiante Aprobado"<<endl;
    }else if(promedio >= 4 && promedio <5){
        cout<<"Estudiante aprobabo con exelente promedio"<<endl;
    }else{
        cout<<"error"<<endl;
    }
    
    return 0;
}