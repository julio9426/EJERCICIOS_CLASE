#include<iostream> //Librerias

using namespace std;
float N1,N2,N3; //Asignacion de variables

int main(){
    cout<<"Ingrese Numero 1: ";//Pide datos al usuario
    cin>>N1;
    cout<<"Ingrese Numero 2: ";
    cin>>N2;
    cout<<"Ingrese Numero 3: ";
    cin>>N3;

    if (N1>N2&&N1>N2){
        cout<<"El mayor es: "<<N1;
    }
    else if (N2>N1&&N2>N3){
        cout<<"El mayor es: "<<N2;
    }
    else{
        cout<<"El mayor es: "<<N3;
    }
    return 0;
}

