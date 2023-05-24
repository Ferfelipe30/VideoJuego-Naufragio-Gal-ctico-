#include <iostream>
#include <string.h>

using namespace std;

void Introduccion();
void Inicio();
void Norte();
void caminoLargo();
void caminoCorto();
void GameOver();
void Final();
string nombre;
bool t;
int direccion;
int caja;
int modo;
int opcion;
int confrontacion;
int astronauta;
int dormir;
int arma;
int eridaniC1 = 150;
int eridaniC2 = 100;
int eridaniC3 = 50;

int main(){
    
    Introduccion();
    Inicio();

    return 0;
}

void Introduccion (){

    cout<<"Es el año 2050 los humanos han evolucionado en muchas areas como la sociedad, la salud y la tecnologia "<<endl
        <<"y se esta comenzando a explorar el espacio exterior. "<<endl
        <<"La nasa esta comenzo a explorar otros planetas y ya se han despupierto y ya se estan modando a ellos y "<<endl
        <<"se esta colonizando. "<<endl
        <<" "<<endl
        <<"Hola soy SARA una inteligencia artificial que te ayudara en esta historia a explorar este nuevo mundo. "<<endl
        <<"Para comenzar ¿como te llamas?: "<<endl;
    cin>>nombre;

    cout<<"Hola "<<nombre<<" eres un astronaito explorador de la NASA has ello muchas misiones explorando otros planetas "<<endl
        <<"hoy te llego un correo de la NASA. "<<endl
        <<"CORREO: La NASA te espera el dia 22 de Junio del 2050 a las 22:03:22 para ir a explorar el planeta Nexory. "<<endl
        <<"Dia 22 de Junio del 2050 / Hora: 22:03:22"<<endl
        <<"Te encuentras en la nave espacial a punto del despege, la NASA te manda a explorar el planeta nexory para "<<endl
        <<"saber si tiene vida inteligente el planeta y si son hostiles o amigables. Para ello te mandan con algunas "<<endl
        <<"herraminetas como armas, municiones, alimentos, medicamnetos y elementos de salud. "<<endl
        <<""<<endl
        <<"Depege en: "<<endl
        <<"1"<<endl
        <<"2"<<endl
        <<"3"<<endl;
    
    cout<<"Ya han pasado 3 meses de viaje estas llegando al planeta Nexory. "<<endl;
    cout<<"La nave esta trabajando a niveles criticos ya que al pasar por un campo de asteroides que rodean al planeta "<<endl
        <<"Nexory la nave esta intentado estableserce pero es muy dificil corregir su trayecto. "<<endl;
    cout<<""<<endl;
    cout<<nombre<<" despierta esta en el planeta Nexory tu nave se extreño esta en la montaña Nadn-5 esta a 500 Km de ella "<<endl
        <<"tus herramientas estan regadas por todo el planeta tienes que ir recogindales en el trascurso de tu camino. "<<endl
        <<"El planeta tiene seres inteligentes llamados Eridani. "<<endl
        <<"Son seres con caracteristicas sobre humanos tiene mucha fuerza, su comunidad esta dividida por clanes que cada "<<endl
        <<"uno de ellos tiene un jefe. "<<endl;
    cout<<"Te recomiento que tengas demaciado cuidado en econtrarte con uno de ellos. "<<endl;
    cout<<"Gracias Sara. "<<endl;
    cout<<"Esta rodeado de plantas y tienes un arma de corto alcanse, tienes 3 cargas que tienen 22 balas, un cuchillo y una "<<endl
        <<"granada de plasma. "<<endl;
}

void Inicio(){
    cout<<"Estas a 1000 metros al sur de donde se estrello la nave y los suministros estan regados por todas partes tienes "<<endl
        <<"que tener cuidado ya que hay colinias por todas partes. "<<endl;
    cout<<"A donde te quieres dirigir: "<<endl<<"1- Norte"<<endl<<"2- Este"<<endl<<"3- Oeste"<<endl;
    cin>>direccion;
    switch (direccion){
    case 1:
        cout<<"Esta en direccion Norte. "<<endl;
        cout<<"Llevas caminando 2 min pero te encuentras con una colonia, de Eridani deberas rodear o pelear cual vas a escoger: 1. rodear o 2. pelear? "<<endl;
        cin>>modo;
        if(modo == 2){
            cout<<"Decidiste pelear pero son demaciados y te Mueres. "<<endl;
            GameOver();
        }else if(modo == 1){
            cout<<"Decidiste rodear pero te encuentras con un Eridani. "<<endl
                <<"Decide pelear 1.cuerpo a cuerpo o 2.pistola. "<<endl;
            cin>>confrontacion;
            if(confrontacion == 1){
                cout<<"El eridani que te encontraste es de clase 2 tiene una fuerza de "<<eridaniC2<<" vas a pelear cuerpo a cuerpo."<<endl;
                cout<<"Presiona la tecla 5 hasta que lo venzas si no lo haces te mueres. "<<endl;
                for (astronauta = 0; astronauta < eridaniC2; astronauta++){
                    cin>>astronauta;
                    eridaniC2 = eridaniC2 - astronauta;
                    cout<<"El eridani tiene de vida "<<eridaniC2<<endl;
                }
                cout<<"El Eridani esta muerto tienes que correr ya que puede llegar mas de ellos. "<<endl;
            }else if (confrontacion == 2){
                cout<<"El eridani que te encontraste es de clase 2 tiene una fuerza de "<<eridaniC2<<" vas a pelear con pistola."<<endl;
                cout<<"Preciona la tecla 9 hasta que lo venzas si no lo haces te mueres. "<<endl;
                for (astronauta = 0; astronauta < eridaniC2; astronauta++){
                    cin>>astronauta;
                    eridaniC2 = eridaniC2 - astronauta;
                    cout<<"El eridani tiene de vida "<<eridaniC2<<endl;
                }
                cout<<"El Eridani esta muerto tienes que correr ya que puede llegar mas de ellos. "<<endl;
            }
        }
        Norte();
        break;

    case 2:
        cout<<"Esta en direccion Este: "<<endl;
        cout<<"Llevas caminando 10 min pero encuentras con que hay un campamento de Eridanis de 1000 habitantes. "<<endl;
        cout<<"Uno de ellos te miran y te capturan."<<endl;
        cout<<"Despues de ser capturado te torturan y te mueres."<<endl;
        GameOver();
        break;

    case 3:
        cout<<"Esta en direccion Oeste: "<<endl;
        cout<<"Llevas caminando 15 min y te encunetras con una caja de municiones. "<<endl;
        cout<<"Pero al seguir caminado te encuentras que no hay un camino de facil acceso ya que hay un derrrunbe de piedras. "<<endl;
        cout<<"Tendras que seguir con el camino del Norte. "<<endl;
        Norte();
        break;

    default:
        cout<<"Error"<<endl;
        break;
    }
}

void Norte(){
    cout<<"Llevas caminado 2 horas en el camino: "<<endl;
    cout<<"Va a nochecer y necesitas comer algo. "<<endl;
    cout<<"Tienes dos opciones dormir en un 1. arbol alto o 2. Cueva "<<endl;
    cout<<"- SARA"<<endl;
    cout<<"SARA: Dime "<<nombre<<" que desas saber. "<<endl;
    cout<<"Que peligros hay de dormir en un arbol en esta zona: "<<endl;
    cout<<"SARA: Al dormir en un arbol alto hay una probabilidad muy alta de ser comido por aves carnivoras y ser atacado por "<<endl
        <<"Animales que viven en los arboles como las arañas, pero hay una baja probavilidad de un ataque de los eridani. "<<endl;
    cout<<"Y que peligros hay de dormir en una Cueva. "<<endl;
    cout<<"SARA: Al dormir en una cueva hay una probabilidad muy alta de ser atacado por los eridani y animales que viven el las cuevas. "<<endl;
    cout<<"Que opcion decides escoger: "<<endl;
    cin>>dormir;
    if (dormir == 1){
        cout<<"Escogiste la opcion de dormir en un arbol alto. "<<endl;
        cout<<"Dormiste en el arbol y no paso nada te encuentras perfectamente. "<<endl;
        cout<<"Ahora te encuentras a 1 un dia de camino del nave que se estrello para llegar a haya hay dos opciones: "<<endl
            <<"1. Por la opcion larga donde hay 2 campamentos de eridanis y se espera que hayan entre 4 a 2 municiones y herramientas. "<<endl
            <<"2. Por la opcion corta es hay 5 campamentos de eridanis y no se espera que hayan herramientas ni municiones. "<<endl;
        cout<<"Que opcion decides escoger. "<<endl;
        cin>>opcion;
        if(opcion == 1){
            caminoLargo();
        }else if (opcion == 2){
            caminoCorto();
        }
    }else if(dormir == 2){
        cout<<"Escogiste la opcion de dormir en la cueva. "<<endl;
        cout<<"Pero en la cueva te encuantras unos eridanis de nivel 3 con una vida de "<<eridaniC3<<" ellos te matan al instate. "<<endl;
        GameOver();
    }
}

void caminoLargo(){
    cout<<"Escogiste la opcion del camino largo."<<endl;
    cout<<"Llevas 2 horas caminando y te encuentras con una caja, la abres adentro se encuntra una arma de largo alcance tiene 4 "<<endl
        <<"balas y 3 recargas con 8 balas."<<endl
        <<"1 hora despues de camino te encunetras con un campamento de eridanis pero es de noche y puedes aprovechar de eso y pasar camuflado "<<endl
        <<"por el campamento. "<<endl;
    cout<<"Comienza a camuflarce por el campamento pero tiene que comenzar a disparar que arma escoges 1- Ametralladora o 2- Rifle de Largo Alcance"<<endl;
    cin>>arma;
    if(arma == 1){
        cout<<"El arma que escogiste es Ametralladora "<<endl;
        cout<<"Pero no apuntas bien y te atraban. "<<endl;
        GameOver();
    }else if(arma == 2){
        cout<<"El arma que escogiste es Rifle de Largo Alcance "<<endl;
        cout<<"Esto permite que tengas una mejor vision y un mayor alcance de tus objetivos. "<<endl;
        cout<<"Luego de pasar por el primer campamento de dejas 14 bajas, pero pierdes el arma al escabar del campamento. "<<endl;
        cout<<"Llevas 2 horas caminando pero te encunetras otra caja. (Presiona la tecla 8 para abrir la caja.)"<<endl;
        cin>>caja;
        if (caja == 8){
            cout<<"En la caja se encuentra una caja de salud que te recupera de todas las lecciones y 10 municiones de 12 balas. "<<endl;
        }
        Final();
    }    
}

void caminoCorto(){
    cout<<"Escogiste la opcion del camino corto."<<endl;
    cout<<"Llevas 1 hora de camino y te encunetras un campamento de eridanis."<<endl;
    cout<<"Tambien hay una caja de herramientas. (Presiona la tecla 5 para abrirla)"<<endl;
    cin>>caja;
    if(caja == 5){
        cout<<"Has abierto la caja. "<<endl
            <<"Adentro hay una escobeta y 20 balas con un escudo."<<endl;
    }
    cout<<"Entras al campamento ya que ves que no hay eridanis hasta el momento. "<<endl;
    cout<<"Pero espera es una trampa y te acaptura los eridanis."<<endl;
    GameOver();
}

void Final(){
    cout<<"Estas a 4 Km de la nave pero para llegara a ella tienes que pasar por un campamento de eridanis. "<<endl;
    cout<<"SARA en el campamento que tipos de eridanis se encuentran en ella ? "<<endl;
    cout<<"SARA: Los eridanis que se encuentran hay son 2 de clase 3 "<<eridaniC3<<", 5 de clase 2 "<<eridaniC2<<", 10 de clase 1 "<<eridaniC1<<endl;
    cout<<"Tienes dos opciones 1. Pasar por el campamento en la noche o 2. Puedes rodear el campamento."<<endl;
    cin>>opcion;
    if (opcion == 1){
        cout<<"Escogiste pasar por el campamento en la noche."<<endl;
        cout<<"Es de noche vas a comenzar a pasar por el campamento. "<<endl;
        cout<<"Esta pasando por un puesto de control de eridanis pero no te han visto. Pero espera estan sospechando de tu lugar de camuflage."<<endl;
        cout<<"Tienes que tomar una decision 1. salir de tu camuflage o  2. esperar y seguir hay."<<endl;
        cin>>opcion;
        if(opcion == 1){
            cout<<"Decidiste salir del camuflaje pero te dispara. "<<endl;
            GameOver();
        }else if(opcion == 2){
            cout<<"Decidiste quedarte camuflado y fue buena desicion. "<<endl;
            cout<<"Puedes seguir ya nadie sospecha."<<endl;
            cout<<"Ya casi vas a salir del campamento y tienes que tomar una decicion tienes el jefe de campamento a la vista y a tiro "<<endl
                <<"pero tienes el riesgo de ser descupierto que decides hacer."<<endl;
            cout<<"Disparas o no disparas: (true o flase)"<<endl;
            cin>>t;
            if(t == true){
                cout<<"Has disparado al jefe."<<endl
                    <<"Pero no te pasa nada y puedes seguir corriendo."<<endl;
                cout<<"Por haber matado al jefe te ganaste un recompesa de la NASA. "<<endl;
                cout<<"Has llegado a la nave. "<<endl;
                cout<<"Has finalizado, Gracias por Jugar."<<endl;
            }else if(t == false){
                cout<<"No has decidido no disparar. "<<endl;
                cout<<"Has llegado a la nave. "<<endl;
                cout<<"Has finalizado, Gracios por Jugar."<<endl;
            }
        }
    }else if(opcion == 2){
        cout<<"Escogiste rodear el campamento. "<<endl;
        cout<<"Pero te encuentras con un grupo de eridanis que te capturan. "<<endl;
        GameOver();
    }    
}

void GameOver(){
    cout<<"Te has Muerto."<<endl;
}