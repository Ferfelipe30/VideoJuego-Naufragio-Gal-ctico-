/*Un programa que permita guardar datos de "imágenes" (ficheros de ordenador que contengan fotografías o cualquier 
otro tipo de información gráfica). De cada imagen se debe guardar: nombre (texto), ancho en píxeles (por ejemplo 
2000), alto en píxeles (por ejemplo, 3000), tamaño en Kb (por ejemplo 145,6). El programa debe ser capaz de 
ver las fichas (número y nombre de cada imagen), buscar la ficha que tenga un cierto nombre.*/

//Autor: Juan Felipe Fernandez Gomez.

#include <iostream>
#include <string>

using namespace std;

struct Imagenes{
    string nombre;
    int anchoPixeles;
    int altoPixeles;
    double tamañoKB;
};

int main(){
    Imagenes i;

    cout<<"Dame el nombre de la imagen: "<<endl;
    cin>>i.nombre;
    cout<<"Dame el tamaño del archivo de la imagen (en KB): "<<endl;
    cin>>i.tamañoKB;
    cout<<"Dame el ancho de la imagen (en Pixeles): "<<endl;
    cin>>i.anchoPixeles;
    cout<<"Dame el alto de la imagen (en Pixeles): "<<endl;
    cin>>i.altoPixeles;

    cout<<i.nombre<<" "<<i.tamañoKB<<" "<<i.anchoPixeles<<" "<<i.altoPixeles<<endl;
    return 0;
} 