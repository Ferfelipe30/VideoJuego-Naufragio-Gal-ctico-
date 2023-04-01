#include<iostream>

using namespace std;

int H;
int M;
int S;

int main(){
    
    cout<<"Dame la hora: "<<endl;
    cin>>H;
    cout<<"Dame el minuto: "<<endl;
    cin>>M;
    cout<<"Dame el segundo: "<<endl;
    cin>>S;

    if(H>=0 && H<=24){
        cout<<"La hora es validad"<<endl;
    }else if(M>=0 && M<=60){
        cout<<"Los minutos es valido"<<endl;
    }else if(S>=0 && S<=60){
        cout<<"Los segundos son validos"<<endl;
    }else{
        cout<<"La hora o los minutos o los segundos esta mal"<<endl;
    }

    return 0;
}