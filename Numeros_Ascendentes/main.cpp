/*
Algoritmo: Imprime numeros en forma ascendente
Creado por: Julio Cesar Pulgarin
*/
#include <iostream> //librerias

using namespace std;
int n1=0, n2=0; //Declaro de variables
int main()
{
    cout << "Ingrese el primer Numero: "; //Se pide al Usuario que ingrese un numero
    cin >> n1; //Se lee el primer numero numero
    cout << "Ingrese el segundo Numero: "; //Se pide al Usuario que ingrese un numero
    cin >> n2; //Se lee el segundo numero numero

    if (n1<n2){ // Si el numero 1 es menor entonces
        cout << "el resultado es: "<<n1<<", "<<n2;
     }
    else{
        cout<<"el resultado es: "<<n2<<", "<<n1;
    }

    return 0;
}
