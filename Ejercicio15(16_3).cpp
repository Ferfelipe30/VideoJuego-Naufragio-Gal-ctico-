#include <iostream>
#include <stdlib.h>

using namespace std;

char x;

int main(){
    cout<<"Dema una opcion S o N"<<endl;
    cin>>x;

    while (x == 'S'){
        cout<<"EL programa se ejecuto con exto"<<endl;
        x = 't';
    }

    while(x == 'N'){
        cout<<"El programa se detiene"<<endl;
        x = 't';
    }
    
    return 0;
}