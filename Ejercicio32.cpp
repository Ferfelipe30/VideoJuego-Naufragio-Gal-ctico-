/*Baloto es un juego novedoso de tipo loto en linea, de suerte y azar, donde el jugador elige 
5 numeros del 1 al 43 y una super balota con numeros del 1 al 16 a traves de una terminal de ventas. 
Para mas informacion dirijase a jugar y ganar.
Genera otro numero de baloto, muestrelo y diga si entre los dos hubo algun numero coincidente*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    srand(getpid());
    int num1 = 1+rand()%(44-1);
    int num1a = 1+rand()%(44-1);
    int num2 = 1+rand()%(44-1);
    int num2a = 1+rand()%(44-1);
    int num3 = 1+rand()%(44-1);
    int num3a = 1+rand()%(44-1);
    int num4 = 1+rand()%(44-1);
    int num4a = 1+rand()%(44-1);
    int num5 = 1+rand()%(44-1);
    int num5a = 1+rand()%(44-1);
    int superBalota = 1+rand()%(17-1);
    int asuperBaloto = 1+rand()%(44-1);
    
    for (int i = 0; i < 1; i++){
        cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" ---- "<<superBalota<<endl;
        cout<<num1a<<" "<<num2a<<" "<<num3a<<" "<<num4a<<" "<<num5a<<" ---- "<<asuperBaloto<<endl;
        if(num1 == num1a){
            cout<<"El numero 1 es igual en las dos loterias"<<num1<<" "<<num1a<<endl;
        }else if(num2 == num2a){
            cout<<"El numero 2 es igual en las dos loterias"<<num2<<" "<<num2a<<endl;
        }else if (num3 == num3a){
            cout<<"El numero 3 es igual en las dos loterias"<<num3<<" "<<num3a<<endl;
        }else if(num4 == num4a){
            cout<<"El numero 4 es igual en las dos loterias"<<num4<<" "<<num4a<<endl;
        }else if(num5 == num5a){
            cout<<"El numero 5 es igual en las dos loterias"<<num5<<" "<<num5a<<endl;
        }else if(superBalota == asuperBaloto){
            cout<<"El superbaloto es igual en las dos loterias"<<superBalota<<" "<<asuperBaloto<<endl;
        }else{
            cout<<"Ninguno de los numeros de la loteria son iguales"<<endl;
        }
        
    }
        
    return 0;
}