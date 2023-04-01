#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    for (int i = 0; i < 10; i++){
        cout<<rand()%51<<endl;
        /*Numeros alatorios del 0 al 50*/
    }
    return 0;
}