#include <iostream>

using namespace std;

void voltajes (double, double, double);
double promedioV;
double x;
double y;
double z;

int main(){

    cout<<"Dame el primer dato del voltaje: "<<endl;
    cin>>x;
    cout<<"Dame el segundo dato del voltaje: "<<endl;
    cin>>y;
    cout<<"Dame el tercer dato del voltaje: "<<endl;
    cin>>x;

    voltajes (x,y,z);

    return 0;
}

void voltajes(double x, double y, double z){

    promedioV = x + y + z / 3;
    cout<<"El promedio de los voltajes es: "<<promedioV<<endl;

    if (promedioV < 115){
        cout<<"VOLTAGE CORRECTO"<<endl;
    }else if (promedioV >= 115 && promedioV < 220){
        cout<<"ALTO VOTAJE"<<endl;
    }else if (promedioV >= 220){
        cout<<"PELIGRO"<<endl;
    }
    
    
}