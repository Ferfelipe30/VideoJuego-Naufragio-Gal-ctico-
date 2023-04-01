#include <iostream>
#include <stdlib.h>

using namespace std;

int x;
int s;
int i;

int main(){

    cout<<"Dame un numero: "<<endl;
    cin>>x;

    for (i = x; i >= 0; i--){
        cout<<i<<endl;
    }
    s = x + i; 
    cout<<"El resuldao de la suma es: "<<s<<endl;
    return 0;
}