#include <iostream>

using namespace std;

int auto1;
int auto2;
int trayecto;

int main(){

    cout<<"De cuanto es el trayecto esta desde 1000 a 5000 metros: "<<endl;
    cin>>trayecto;

    for (int i = 0; i <= trayecto; i++){
        auto1 = 1+rand()%(56-1);
        auto2 = 1+rand()%(56-1);
        cout<<"El trayecto es: "<<i<<" Con una velocidad del Auto1 "<<auto1<<"m/s"<<" Con una velocidad del auto 2 "<<auto2<<"m/s"<<endl;
        if(i == trayecto){
            if(auto1 < auto2){
                cout<<"El auto 2 es el GANADOR"<<endl;
            } else if(auto1 > auto2){
                cout<<"El auto 1 es el GANADOR"<<endl;
            }
        }
    }
    
    return 0;
}