#include <iostream> //libreria de entrada y salida de datos consola
#include <math.h> //libreria procesos Matematicos
#include <stdlib.h> // libreria para cambia color

using namespace std;

int main(){
    system ("color 0F" );
    int contador=0, fin=1;
    float suma=0;
    while (fin==1){
        while (contador<10){
                suma=suma+contador;
                contador ++;
        }
    cout<<"la suma total es: "<<suma<<endl;
    suma=pow(suma,3);
    cout<<"la suma al cubo es: "<<suma<<endl<<endl;
    suma=0;
    contador=0;
    cout<<"Desea cerrar el programa?";
    cout<<"(ingrece cero '0' para cerrarlo)"<<endl;
    cout<<"Para repetir el proceso ingrece Uno '1'"<<endl;
    cin>>fin;
    }

    return 0;
}
