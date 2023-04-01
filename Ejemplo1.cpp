#include <iostream>

using namespace std;

void multiplicar (int, int, int = 1);

int main(){
    multiplicar(5,4);
    multiplicar(3,2,5);

    system ("pausa");
    return 0;
}

void multiplicar (int x, int y, int z){
    cout<<x*y*z<<endl;
}