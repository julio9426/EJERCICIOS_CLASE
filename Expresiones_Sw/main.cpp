#include<iostream> //Librerias

using namespace std;

//Asignacion de variables
int Num=0;
float V=0,T=0;

//Funcion principal
int main(){

    //Interaccion con el Usuario, ingreso y lectura de datos
    cout<<"Selecciones expresion a resolver"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Ingrese '1'... Expresion 1"<<endl;
    cout<<"Ingrese '2'... Expresion 2"<<endl;
    cout<<"Ingrese '3'... Expresion 3"<<endl;
    cin>>Num;
    cout<<"Ingrese el Voltaje: ";
    cin>>V;

    switch(Num){
        case 1:
            T=100*V;
            break;
        case 2:
            T=100-V;
            break;
        case 3:
            T=100/V;
            break;
        default:
            cout<<"Opción no disponible"<<endl;
            break;
    }
    cout<<"El resultado es: "<<T;
    return 0;
}

