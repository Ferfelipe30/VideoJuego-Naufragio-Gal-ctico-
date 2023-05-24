/*Struct: 
*/

#include <iostream>

using namespace std;

struct persona{
    char nombre [30];
    int telefono;
};

int main(){
    struct persona persona1;
    struct persona persona2;
    
    cout<<"Ingrese el nombre de la persona 1: "<<endl;
    cin.getline(persona1.nombre,30,'\n');
    cout<<"Ingrese el nombre de la persona 2: "<<endl;
    cin.getline(persona2.nombre,30,'\n');
    cout<<"Ingresa el telefono de la persona 1: "<<endl;
    cin>>persona1.telefono;
    cout<<"Ingresa el telefono de la persona 2: "<<endl;
    cin>>persona2.telefono;

    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Telefono: "<<persona1.telefono<<endl;

    cout<<"Nombre: "<<persona2.nombre<<endl;
    cout<<"Telefono: "<<persona2.telefono<<endl;

    return 0;
}
