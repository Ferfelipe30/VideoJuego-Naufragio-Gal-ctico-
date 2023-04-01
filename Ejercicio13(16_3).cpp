#include <iostream>
#include <stdlib.h>

using namespace std;

int x;

int main(){

    while (x <= 100){
        cout<<"Dame un numero: "<<endl;
        cin>>x;
        cout<<"El numero es: "<<x<<endl;
    }
    
    return 0;
}