#include<iostream>
using namespace std;

int time=0;
float valve=0.0, aumento=0.0;
char categoria;

int main(){
    cout<<"Ingrese Sueldo: ";
    cin>>valve;
    cout<<"Ingrese Tiempo de Servicio: ";
    cin>>time;

    if (time>20 && time<=30){
        categoria= 'A';
    }
    else if (time>15 && time<=20){
        categoria= 'B';
    }
    else if (time>10 && time<=15){
        categoria= 'C';
    }
    else {
        categoria= 'D';
    }

    switch(categoria){
        case 'A':
            aumento=valve+(valve*0.15);
            break;
        case 'B':
            aumento=valve+(valve*0.12);
            break;
        case 'C':
            aumento=valve+(valve*0.10);
            break;
        case 'D':
            aumento=valve+15;
            break;
    }

    cout<<"La categoria es: "<<categoria<<endl;
    cout<<"El sueldo total (con aumento) es: "<<aumento;
    return 0;
}
