#include<iostream>

using namespace std;

void cambio(int,int,int);
void valNuevo(int&,int&);

int main(){
    int num1=3,num2=5,aux;
    cambio(num1,num2,aux);
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo numero es: "<<num2<<endl;
    valNuevo(num1,num2);
    cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es :"<<num2<<endl;


    return 0;
}
void cambio(int a,int b,int aux){
    aux=a;
    a=b;
    b=aux;
    cout<<"Paso por valor: "<<endl;
    cout<<"El nuevo valor del primer numero es: "<<a<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<b<<endl;
}
void valNuevo(int& xnum, int& ynum){
    cout<<"Paso por referencia: "<<endl;
    cout<<"El nuevo valor del primer numero es: "<<xnum<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<ynum<<endl;

    xnum=1;
    ynum=2;

}
