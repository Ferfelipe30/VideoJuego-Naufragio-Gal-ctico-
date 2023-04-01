#include <iostream>
#include <stdlib.h>

using namespace std;

int galon = 1;
int litro = 3785;
int total;

int main(){

    for (galon = 10; galon <= 20; galon++){
        total = galon * litro;
        cout<<"El galon por libro es: "<<total<<endl;
    }
    
    
    

    return 0;
}