#include<iostream>
#include<conio.h>
using namespace std;


int main(){
    char cadena[]="1235,hola";
    int numero = 0;
    for(int i=0;cadena[i] != '\0';i++){
          numero = numero * 10 + (cadena[i] - '0');
    }
    cout<< numero<<endl; 
    system("pause");
    return 0;
}
