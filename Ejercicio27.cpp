#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    for (int i = 0; i < 10; i++){
        cout<<1+rand()%(101-1)<<endl;
        /*Numeros alatorios del 1 al 100*/
    }
    return 0;
}