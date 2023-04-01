#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    for (int i = 0; i < 10; i++){
        cout<<250+rand()%(421-250)<<endl;
        /*Numeros alatorios del 250 al 420*/
    }
    return 0;
}