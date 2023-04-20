/*Realizar un progrma de un colegio donde tiene un estudiante: Detener pedirle nombre, apellido, grado, datos personales,
y hacer que muestre esos datos en panatalla..*/

//Autor: Juan Felipe Fernandez Gomez.

#include <iostream>

using namespace std;

struct persona{
    string nombre;
    string apellido;
    string telefono;
    string direccion;
};

struct estudiante{
    struct persona Persona;
    int añoDeNacimiento;
    int mesDeNacimiento;
    int diaDeNacimiento;
    int grado;
    string Correo;
};

int main(){
    
    estudiante E;

    cout<<"Hola ere estudiante del colegio necesitamos unos datos: "<<endl;
    cout<<"Nombre: ";
    cin>>E.Persona.nombre;
    cout<<"Apellido: ";
    cin>>E.Persona.apellido;
    cout<<"Numero de telefono Celular: ";
    cin>>E.Persona.telefono;
    cout<<"Direccion: ";
    cin>>E.Persona.direccion;
    cout<<"Año de nacimiento: ";
    cin>>E.añoDeNacimiento;
    cout<<"Mes de nacimiento: ";
    cin>>E.mesDeNacimiento;
    cout<<"Dia de nacimiento: ";
    cin>>E.diaDeNacimiento;
    cout<<"Grado que esta cursonado: ";
    cin>>E.grado;
    cout<<"Correo Electronico: ";
    cin>>E.Correo;

    cout<<"El nombre dado es: "<<E.Persona.nombre<<endl;
    cout<<"El apellido dado es: "<<E.Persona.apellido<<endl;
    cout<<"El numero de telefono celular es: "<<E.Persona.telefono<<endl;
    cout<<"La direccion dada es: "<<E.Persona.direccion<<endl;
    cout<<"La fecha de nacimiento es: "<<E.diaDeNacimiento<<"/"<<E.mesDeNacimiento<<"/"<<E.añoDeNacimiento<<endl;
    cout<<"El grado que esta cursando es: "<<E.grado<<endl;
    cout<<"El correo dado es: "<<E.Correo<<endl;

    return 0;
}