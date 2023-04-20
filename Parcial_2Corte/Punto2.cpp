#include <iostream>

using namespace std;

void juego(int);
void ganador(int, int);
int y;
int boot;
int puntojugador;
int puntoboot;

int main(){
    int x;
    cout<<"Menu: 1- Jugar; 2- Salir"<<endl;
    cin>>x;

    switch(x){
    case 1:
        cout<<"Vamos a jugar piedra, papel y tijeras: "<<endl;
        for (int i = 1; i <= 5; i++){
            cout<<"1 es piedra. "<<endl;
            cout<<"2 es papel. "<<endl;
            cout<<"3 es tijeras"<<endl;
            cout<<"Escoge la opcion que deseas escoger: "<<endl;
            cin>>y;
            juego(y);
        }
        ganador(puntojugador, puntoboot);
        
        break;
    
    case 2:
        cout<<"Saliste."<<endl;
        break;

    default:
        cout<<"Error"<<endl;
        break;
    }
    
    cout<<"Menu: 1- Jugar; 2- Salir"<<endl;
    cin>>x;

    return 0;
}

void juego(int y){
    boot = 1+rand()%(4-1);
    cout<<"La maquina saco: "<<boot<<endl;
    if(y == boot){
        cout<<"Tiene un empate no tienen  puntos."<<endl;
    }else if(y==1 && boot==2){
        cout<<"Punto para la maquina."<<endl;
        puntoboot ++;
    }else if(y==1 && boot==3){
        cout<<"Punto para el jugador. "<<endl;
        puntojugador ++;
    }else if(y==2 && boot==1){
        cout<<"Punto para el jugador."<<endl;
        puntojugador ++;
    }else if(y==2 && boot==3){
        cout<<"Punto para la maquina."<<endl;
        puntoboot ++;
    }else if(y==3 && boot==1){
        cout<<"Punto para la maquina."<<endl;
        puntoboot ++;
    }else if(y==3 && boot==2){
        cout<<"Punto para el jugador."<<endl;
        puntojugador ++;
    }
    
}

void ganador(int puntojugador, int puntoboot){
    cout<<"Los puntos del jugador son: "<<puntojugador<<endl;
    cout<<"Los puntos del boot o maquina es: "<<puntoboot<<endl;
    if(puntojugador < puntoboot){
        cout<<"El ganador es la maquina"<<endl;
    }else if(puntojugador > puntoboot){
        cout<<"EL ganador es el jugador."<<endl;
    }
}