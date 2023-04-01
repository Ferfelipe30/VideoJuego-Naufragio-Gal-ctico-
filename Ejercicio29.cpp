/*Realizar un programa que imprima 20 numeros aleatorios entre 100 y 200*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    for (int i = 0; i <= 19; i++){
        cout<<100+rand()%(201-100)<<endl;
    }
    return 0;
}