#include<iostream>

using namespace std;

string letra;
int num;

int main(){
    int x;
    cout<<"Que deseas introduccir: "<<endl;
    cout<<"1. Letra "<<endl;
    cout<<"2. Numero "<<endl;
    cin>>x;

    switch (x){
    case 1:
            cout<<"Dame una letra"<<endl;
            cin>>letra;

            if(letra == "a" && letra == "e" && letra == "i" && letra == "o" && letra == "u"){
                cout<<"La letra ingresada en una vocal"<<endl;
            }else{
                cout<<"La letra ingresada en una consonante"<<endl;
            }
        break;

    case 2:
            cout<<"Dame un numero: "<<endl;
            cin>>num;
            if(num >= 0 && num <= 9){
                cout<<"El numero dado es del 0 al 9"<< num <<endl;
            }else{
                cout<<"El numero dado no es del 0 al 9"<<endl;
            }
        break;
    
    default:
        cout<<"Error"<<endl;
        break;
    }
}