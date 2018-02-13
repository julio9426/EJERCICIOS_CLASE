#include<iostream> //Librerias
using namespace std;
int N; //Asignacion de variables

int main(){
    cout<<"Ingrese Numero: "; //el usuario ingresa un numero
    cin>>N; // lee el numero
    if (N>0){ //si el numero es mayor a cero entonces
        if (N%2==0){ // Si N mod2 igual a cero enttonces
            cout<<"-------"<<endl;
            cout<<"| PAR |"<<endl; // Imprime Par
            cout<<"-------"<<endl;
        }
        else{
            cout<<"---------"<<endl;
            cout<<"| IMPAR |"<<endl; // Imprime Par
            cout<<"---------"<<endl;
        }
    }
    return 0;
}
