/*Realizar un programa que genere una fecha futura de manera aleatoria. La fecha geredad corresponde al dia en que 
se casara*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(getpid());
    int dia = 1+rand()%(32-1);
    int mes = 1+rand()%(13-1);
    int año = 2023+rand()%(2030-2023);
    for (int i = 0; i < 1; i++){
        cout<<dia<<"/"<<mes<<"/"<<año<<endl;
    }
    
    return 0;
}