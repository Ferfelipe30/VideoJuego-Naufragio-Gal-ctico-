#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;

double nota1;
double nota2;
double nota3;
double nota4;
double nota5;
double promedio;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	cout<<"cual es la nota 1: ";
	cin>>nota1;
	cout<<"La nota 1 es: "<<nota1<<endl;
	cout<<"cual es la nota 2: ";
	cin>>nota2;
	cout<<"La nota 2 es: "<<nota2<<endl;
	cout<<"cual es la nota 3: ";
	cin>>nota3;
	cout<<"La nota 3 es: "<<nota3<<endl;
	cout<<"cual es la nota 4: ";
	cin>>nota4;
	cout<<"La nota 4 es: "<<nota4<<endl;
	cout<<"cual es la nota 5: ";
	cin>>nota5;
	cout<<"La nota 5 es: "<<nota5<<endl;
	
	promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	
	cout<<"El promedio de las notas es: "<<promedio;
	
	return 0;
}
