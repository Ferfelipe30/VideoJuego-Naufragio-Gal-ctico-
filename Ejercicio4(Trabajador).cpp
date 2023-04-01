#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;

//Declaracion de variables.
string Nombre;
string puesto;
int sueldoBase = 50000; //Diarios.
int horasExtras = 8000; 
int turnoNocturno = 12000;
int turnoDiurno;
int turnosNocturnos;

int main(){
    setlocale(LC_CTYPE, "Spanish");
    
    cout<<"¿Como es tu nombre?"<<endl;
    cin>>Nombre;
    cout<<"¿Que puesto tienes?"<<endl;
    cin>>puesto;
    cout<<"Tu nombre es: "<<Nombre<<" el puesto que tienes es: "<<puesto<<endl;

    turnoDiurno = 4*sueldoBase;
    turnosNocturnos = 3*turnoNocturno;

    cout<<"El sueldo de esta semana base fue de: "<<turnoDiurno<<endl;
    cout<<"Los turnos nocturnos de esta semana fueron 3 que equivalen: "<<turnosNocturnos<<endl;

    double salud = 20/100; //El descuento de salud es de 20%.
    double pension = 10/100; //El descuento de pension es de 10%.
    double riesgoProfecionales = 6/100; //El descuento de riesgos profecionales es de 6%.

    double sueldo = sueldoBase*salud*pension*riesgoProfecionales;

    cout<<"El sueldo recibido es de: "<<sueldo;
}