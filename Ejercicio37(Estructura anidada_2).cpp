/* Un consecionario tiene almacenado una sierta gama de autos y camionetas realiza un programa que digite el vehiculo
y muestre sus caracteristicas. */

//Autor: Juan Felipe Fernandez Gomez.

#include <iostream>
#include <string>

using namespace std;

struct consecionario{
    string nombreDelConcesionario;
    double cantidadDeDinero;
    int tipoDeAuto;
    string marca;
    double precio;
};

struct Carro{
    struct consecionario CON;
    string modelo;
    int cilindrage;
    double motor;
    int rin;
    int velocidadMAX;
};

struct Camionetas{
    struct consecionario CON;
    Carro Car;
    bool Parrilla;
};


int main(){
    Camionetas CAM;

    cout<<"Hola"<<endl;
    cout<<"Dame el nombre del consecionario: ";
    cin>>CAM.CON.nombreDelConcesionario;
    cout<<"Cuanto dinero tiene para comprar un auto: ";
    cin>>CAM.CON.cantidadDeDinero;
    cout<<"Que tipo de auto busca: "<<endl<<"1- Carro Automovil "<<endl<<"2- Camioneta Campero: "<<endl;
    cin>>CAM.CON.tipoDeAuto;
    
    switch (CAM.CON.tipoDeAuto){
    case 1:
        cout<<"Dame la marca: ";
        cin>>CAM.CON.marca;
        cout<<"Dame le modelo: ";
        cin>>CAM.Car.modelo;
        cout<<"Dame el cilindrage: ";
        cin>>CAM.Car.cilindrage;
        cout<<"Dame el motor: ";
        cin>>CAM.Car.motor;
        cout<<"Dame el numero de rin: ";
        cin>>CAM.Car.rin;
        cout<<"Dame la velocidad maxima: ";
        cin>>CAM.Car.velocidadMAX;
        cout<<"Dame el precio: ";
        cin>>CAM.CON.precio;

        if(CAM.CON.cantidadDeDinero >= CAM.CON.precio){
            cout<<"El carro fue comprado. "<<endl;

            cout<<CAM.CON.marca<<" | "<<CAM.Car.modelo<<" | "<<CAM.Car.motor<<" | "<<CAM.Car.cilindrage<<" | "<<
            CAM.Car.rin<<" | "<<CAM.Car.velocidadMAX<<" | "<<CAM.CON.precio<<" | "<<CAM.CON.nombreDelConcesionario<<
            " | "<<CAM.CON.cantidadDeDinero<<" | "<<"La compra fue Exitosa"<<endl;
        }else{
            cout<<"El carro no se puede comprar. "<<endl;

            cout<<CAM.CON.marca<<" | "<<CAM.Car.modelo<<" | "<<CAM.Car.motor<<" | "<<CAM.Car.cilindrage<<" | "<<
            CAM.Car.rin<<" | "<<CAM.Car.velocidadMAX<<" | "<<CAM.CON.precio<<" | "<<CAM.CON.nombreDelConcesionario<<
            " | "<<CAM.CON.cantidadDeDinero<<" | "<<"La no se puede Hacer"<<endl;
        }
        break;

    case 2:
        cout<<"Dame la marca: ";
        cin>>CAM.CON.marca;
        cout<<"Dame le modelo: ";
        cin>>CAM.Car.modelo;
        cout<<"Dame el cilindrage: ";
        cin>>CAM.Car.cilindrage;
        cout<<"Dame el motor: ";
        cin>>CAM.Car.motor;
        cout<<"Dame el numero de rin: ";
        cin>>CAM.Car.rin;
        cout<<"Dame la velocidad maxima: ";
        cin>>CAM.Car.velocidadMAX;
        cout<<"Tiene parrilla: ";
        cin>>CAM.Parrilla;
        cout<<"Dame el precio: ";
        cin>>CAM.CON.precio;

        if(CAM.CON.cantidadDeDinero >= CAM.CON.precio){
            cout<<"La Camioneta fue comprada. "<<endl;

            cout<<CAM.CON.marca<<" | "<<CAM.Car.modelo<<" | "<<CAM.Car.motor<<" | "<<CAM.Car.cilindrage<<" | "<<
            CAM.Car.rin<<" | "<<CAM.Car.velocidadMAX<<" | "<<CAM.CON.precio<<" | "<<CAM.CON.nombreDelConcesionario<<
            " | "<<CAM.CON.cantidadDeDinero<<" | "<<"La compra fue Exitosa"<<endl;
        }else{
            cout<<"La Camioneta no se puede comprar. "<<endl;

            cout<<CAM.CON.marca<<" | "<<CAM.Car.modelo<<" | "<<CAM.Car.motor<<" | "<<CAM.Car.cilindrage<<" | "<<
            CAM.Car.rin<<" | "<<CAM.Car.velocidadMAX<<" | "<<CAM.CON.precio<<" | "<<CAM.CON.nombreDelConcesionario<<
            " | "<<CAM.CON.cantidadDeDinero<<" | "<<"La no se puede Hacer"<<endl;
        }
        break;
    
    default:
        cout<<"ERROR se digita 1 o 2 debendiendo la opcion";
        break;
    }

    return 0;
}