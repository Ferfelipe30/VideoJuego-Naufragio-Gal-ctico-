#include <iostream>

using namespace std;

struct productos{
    int codigo;
    string Nombre;
    double precio;
    int cantidad;
};

int main(){
    int n;
    double total;

    cout<<"Cuantos productos desea almacenar: "<<endl;
    cin>>n;

    struct productos *p = new productos[n];

    cout<<"Vas a indroduccir un producto: "<<endl;

    for(int i=0; i<n; i++){
        cout<<"Codigo: "<<endl;
        cin>>p[i].codigo;
        cout<<"Nombre del producto: "<<endl;
        cin>>p[i].Nombre;
        cout<<"Precio: "<<endl;
        cin>>p[i].precio;
        cout<<"Cantidad: "<<endl;
        cin>>p[i].cantidad;
    }

    for (int i = 0; i < n; i++){
        cout<<p[i].codigo<<" "<<p[i].Nombre<<" "<<p[i].precio<<" "<<p[i].cantidad<<endl;
    }

    for (int i = 0; i < n; i++){
        total = p[i].precio + p[i++].precio;
    }

    cout<<"El precio total del inventario es: "<<total<<endl;
    
    
    return 0;
}