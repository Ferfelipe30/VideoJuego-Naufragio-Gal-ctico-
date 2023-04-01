/*Realizar un programa que genere 7 numeros de loteria, uno por cada dia de la semana*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    for (int i = 0; i <= 6; i = i+1){
        cout<<1000+rand()%(10000-1000)<<endl;
    }
    return 0;
}