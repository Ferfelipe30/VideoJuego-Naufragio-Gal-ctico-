/*Una compañia de seguros tiene contratados a n vendedores. Cada uno hace n ventas a la semana. Su politica 
de pagos es que un vendedor recibe un sueldo base y un 10% extra por comisiones de sus ventas. El gerente de su 
compañia desea saber cuanto dinero obtendra en la semana cada vendedor por concepto de comisiones por las ventas 
realizadas y cuanto tomando en cuenta su base y sus comisiones.

Al final mostrar un resumen con la cantidad de empleados ingresados y or cada uno mostrar la cantidad de empleados 
ingresados y por cada uno mostrar la cantidad de ventas el salario base y las comisiones que recibira.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

template <class v1>
void empleados (v1);
string Empleado;
int n = 0;
int i;
double dinero;
double porcentaje;
double Ventas;
double sueldoBase;

int main(){
    cout<<"Cuantos empleados tienes: "<<endl;
    cin>>n;
    cout<<"Cual es el sueldo base de los empleados: "<<endl;
    cin>>sueldoBase;
    empleados(n);
    return 0;
}

template <class v1>
void empleados(v1 n){
    for (i = 0; i <= n; i++){
        cout<<"Dame el nombre del empleado: "<<endl;
        cin>>Empleado;
        cout<<"Valor de las ventas que hace a la semana: "<<endl;
        cin>>Ventas;
        cout<<"El sueldo base de los empleados es: "<<sueldoBase<<endl;
        porcentaje = (Ventas/100)*10;
        cout<<"El porcentaje por las ventas es: "<< porcentaje<<endl;
        dinero = sueldoBase+porcentaje;
        cout<<"El dinero todal que recibe el empleado es: "<<dinero<<endl;
    }
}