#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int Salario;
int Salario2;
int incentivo;
int incentivo2;
int incentivo3;
int incentivo4;
int incentivo5;
int incentivoT;
int LunesZapatos = 15;
int MartesZapatos = 23;
int MiercolesZapatos = 21;
int JuevesZapatos = 26;
int ViernesPantalones = 15;
int LunesZapatos1;
int MartesZapatos1;
int MiercolesZapatos1;
int JuevesZapatos1;
int ViernesPantalones1;


int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	cout<<"Dame el valor de un salario base de un dia completo de 8 horas: "<<endl;
	cin>>Salario;
	Salario2 = Salario * 8;
	cout<<"El salario base de un dia de 8 horas es de "<<Salario2<<endl;
	
	cout<<"Dame el valor de producion del dia lunes de zapatos: "<<endl;
	cin>>LunesZapatos1;
	cout<<"La producion de zapatos del lunes es de "<<LunesZapatos<<endl;
	cout<<"Dame el valor de producion del dia martes de zapatos: "<<endl;
	cin>>MartesZapatos1;
	cout<<"La producion de zapatos del martes es de "<<MartesZapatos<<endl;
	cout<<"Dame el valor de producion del dia miercoles de zapatos: "<<endl;
	cin>>MiercolesZapatos1;
	cout<<"La poducion de zapatos el miercoles es de "<<MiercolesZapatos<<endl;
	cout<<"Dame el valor de producion del dia jueves de zapatos: "<<endl;
	cin>>JuevesZapatos1;
	cout<<"La producion de zapatos el jueves es de "<<JuevesZapatos<<endl;
	cout<<"Dame el valor de producion del dia viernes de pantalones: "<<endl;
	cin>>ViernesPantalones1;
	cout<<"La producion de pantalones el viernes es de "<<ViernesPantalones<<endl;
	
	if(LunesZapatos <= LunesZapatos1){
		incentivo = (Salario2/100 * 20)+Salario2;
		cout<<"El salario con el 20% es de "<<incentivo<<endl;	
		if(MartesZapatos <= MartesZapatos1){
			incentivo2 = (Salario2/100 *20)+Salario2;
			cout << "El salario con el 20% de una mayor producion es de "<<incentivo2<<endl;	
			if(MiercolesZapatos <= MiercolesZapatos1){
				incentivo3 = (Salario2/100 * 15)+Salario2;
				cout << "El salario con el 15% de una mayor producion es de "<<incentivo3<<endl;	
				if(JuevesZapatos <= JuevesZapatos1){
					incentivo4 = (Salario2/100 * 15)+Salario2;
					cout << "El salario con el 15% de una mayor producion es de "<<incentivo4<<endl;	
					if(ViernesPantalones <= ViernesPantalones1){
						incentivo5 = (Salario2/100 * 15)+Salario2;
						cout << "El salario con el 15% de una mayor producion es de "<<incentivo5<<endl;	
						cout<<"El empleado a cumplido con la produccion diaria"<<endl;
					}else{
						incentivo5 = Salario2;
						cout<<"El empledo no a llegado a complir si producion diaria"<<endl;
					}
				}else{
					incentivo4 = Salario2;
					incentivo5 = Salario2;
					cout<<"El empledo no a llegado a complir si producion diaria"<<endl;	
				}
			}else{
				incentivo3 = Salario2;
				incentivo4 = Salario2;
				incentivo5 = Salario2;
				cout<<"El empledo no a llegado a complir si producion diaria"<<endl;
			}
		}else{
			incentivo2 = Salario2;
			incentivo3 = Salario2;
			incentivo4 = Salario2;
			incentivo5 = Salario2;
			cout<<"El empledo no a llegado a complir si producion diaria"<<endl;
		}
	}else{
		incentivo = Salario2;
		incentivo2 = Salario2;
		incentivo3 = Salario2;
		incentivo4 = Salario2;
		incentivo5 = Salario2;
		cout<<"El empledo no a llegado a complir si producion diaria"<<endl;
	}
	
	incentivoT = incentivo + incentivo2 + incentivo3 + incentivo4 + incentivo5;
	cout<<"El salario semanas es de "<<incentivoT<<endl;
	
	return 0;
}
