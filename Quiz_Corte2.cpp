/*Un equipo de sudamerica quiere a clasificar al mundial pero solo hay 4 clasificados y 1 al repechaje pero no 
sabe en en que puesto quedo. Debe generar un programa que diga en que puesto quedo el  equipos de sudamerica aleatoria mente y deacurdo al numero 
que salga esos son los clasificados, recuerde del 1 al 4 son clasificados al mundial y el 5 es al repechaje*/

//Autor: Juan Felipe Fernandez Gomez. 
#include <iostream>
#include <cstdlib>

using namespace std;

template<class v1>
void equipos (v1);
int x;
string equipo;

int main(){
    srand(getpid());
    cout<<"Cuantos equipos hay en suadamerica: "<<endl;
    cin>>x;
    cout<<"Dame el nombre del equipo: "<<endl;
    cin>>equipo;

    equipos(x);
    return 0;
}

template<class v1>
void equipos(v1 x){
    int equipo1 = 1+rand()%((x+1)-1);

    for (int i = 0; i < 1; i++){
        cout<<"El "<<equipo<<" quedo de: "<<equipo1<<endl;

        if(equipo1 == 1){
            cout<<"El equipo "<< equipo<< " paso al mundial en el puesto: "<<equipo1;
        }else if(equipo1 == 2){
            cout<<"El equipo "<< equipo<< " paso al mundial en el puesto: "<<equipo1;
        }else if(equipo1 == 3){
            cout<<"El equipo "<< equipo<< " paso al mundial en el puesto: "<<equipo1;
        }else if(equipo1 == 4){
            cout<<"El equipo "<< equipo<< " paso al mundial en el puesto: "<<equipo1;
        }else if(equipo1 == 5){
            cout<<"El equipo "<<equipo<<" paso al repechaje: "<<equipo1<<endl;
        }else{
            cout<<"El equipo "<<equipo<<" no clasifico al mundial: "<<equipo1<<endl;
        }
    }
    
}