#include<iostream>

using namespace std;

int num1;
int num2;
int num3;
int num4;

int main(){

    cout<<"Dame un numero 1: "<<endl;
    cin>>num1;
    cout<<"Dame el numero 2: "<<endl;
    cin>>num2;
    cout<<"Dame el numero 3: "<<endl;
    cin>>num3;
    cout<<"dame el numero 4: "<<endl;
    cin>>num4;

    if (num1>=num2 && num1>=num3 && num1>=num4){
        cout<<"El numero 1 "<<num1<< " es el mayor de todos"<<endl;
    }else if (num2>=num1 && num2>=num3 && num2>=num4){
        cout<<"El numero 2 "<<num2<< " es el mayor de todos"<<endl;
    }else if (num3>=num1 && num3>=num2 && num3>=num4){
        cout<<"El numero 3 "<<num3<< " es el mayor de todos"<<endl;
    }else if (num4>=num1 && num4>=num2 && num4>=num3){
        cout<<"El numero 4: "<<num4<< ", es el mayor de todos"<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    

    return 0;
}