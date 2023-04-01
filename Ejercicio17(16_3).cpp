#include <iostream>
#include <stdlib.h>

using namespace std;

int s;

int main(){
    for (int i = 0; i <= 100; i = i + 2){
        cout<<i<<endl;
        s = s +i;
    }
    cout<<"La suma es igual a: "<<s<<endl;
    
    return 0;
}