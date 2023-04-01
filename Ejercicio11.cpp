/*EL programa tiene el objetivo de mostrar lo aprendido en clase hasta el dia de hoy en estructuras de informacion
con la idea de que uno es un entrenador  y tiene que esoger un  equipo de futbol y dar la posiscion en el que quedo en la liga el equipo
y haci saber si gano o no*/

#include <iostream>
#include <string.h>

using namespace std;

string entrenador;
int x;
string alineacion;
int posicionLiga;

int main(){
    cout<<"Como es tu nombre: "<<endl;
    cin>>entrenador;
    cout<<"El nombre del entrenador es: "<<entrenador<<endl;
    cout<<"Tienes que escojer un equipo de futbol tienes estos equipos para entrenar cual escoges: "<<endl<<
           "1. Chelse"<<endl<<
           "2. Atletico de Madrid"<<endl<<
           "3. Real Madrid"<<endl<<
           "4. Barcelona"<<endl<<
           "5. Manchister Unided"<<endl<<
           "6. Manchister City"<<endl<<
           "7. Liverpool"<<endl;
    cin>>x;

    switch (x){
    case 1:
        cout<<"El equipo que escojiste es el Chelse"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 5){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de la PREMIER LEAGUE"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }
        break;

    case 2:
        cout<<"El equipo que escojiste es el Atletico de Madrid"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 4){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de LA LIGA"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;

    case 3:
        cout<<"El equipo que escojiste es el Real Madrid"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 4){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de LA LIGA"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;

    case 4:
        cout<<"El equipo que escojiste es el Barcelona"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 4){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de LA LIGA"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;

    case 5:
        cout<<"El equipo que escojiste es el Manchister Unided"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 5){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de la PREMIER LEAGUE"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;

    case 6:
        cout<<"El equipo que escojiste es el Manchister City"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 5){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de la PREMIER LEAGUE"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;

    case 7:
        cout<<"El equipo que escojiste es el Liverpool"<<endl;
        cout<<"Dame la alinecion de tu equipo: "<<endl;
        cin>>alineacion;
        cout<<"La alineacion del equipo es: "<<alineacion<<endl;

        cout<<"La temporada termino ya ¿En que posicion de la tabla de la liga quedo el equipo? ";
        cin>>posicionLiga;

        if(posicionLiga <= 5){
            cout<<"El equipo clasifico a la champions"<<endl;
            if (posicionLiga == 1){
                cout<<"El equipo es campeon de la liga de la PREMIER LEAGUE"<<endl;
            }            
        }else{
            cout<<"El equipo sigue en la liga"<<endl;
        }

        break;
    
    default:
        cout<<"ERROR"<<endl<<
              "No escogiste ningun equipo que esta en la lista."<<endl;
        break;
    }

    cout<<"Fin del Programa"<<endl;

    return 0;
}