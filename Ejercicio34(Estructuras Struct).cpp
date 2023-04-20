/*Un “struct” que almacene datos de una canción en formato MP3: Artista, Título, Duración (en segundos), 
Tamaño del fichero (en KB). Un programa debe pedir los datos de una canción al usuario, almacenarlos en dicho 
“struct” y después mostrarlos en pantalla.*/

//Autor: Juan Felipe Fernandez Gomez.

#include <iostream>
#include <string>

using namespace std;

struct cancion{
    string Artista;
    string Titulo;
    int Duracion;
    int TamañoDeFichero;
};

int main(){
    cancion c;

    cout<<"Dame el nombre del artista: "<<endl;
    cin>>c.Artista;
    cout<<"Dame el titulo de la cancion: "<<endl;
    cin>>c.Titulo;
    cout<<"Dame la duracion de la cancion (en segundos): "<<endl;
    cin>>c.Duracion;
    cout<<"Dame el tamaño del fichero de la cancion (en KB): "<<endl;
    cin>>c.TamañoDeFichero;

    cout<<c.Artista<<" "<<c.Titulo<<" "<<c.Duracion<<" "<<c.TamañoDeFichero<<endl;

    return 0;
}