#include<iostream>

using namespace std;

int febrero;

int main(){

    cout<<"¿Cuantos dias tiene febrero este año?"<<endl;
    cin>>febrero;

    if(febrero == 29){
        cout<<"El año es bisiesto"<<endl;
    }else{
        cout<<"El año no es bisiesto"<<endl;
    }

    return 0;
}