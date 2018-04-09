#include<iostream>
#include<string.h>

using namespace std;

int tam_cad(char Cadena[]);
char Cadena[20];

int main(){

    cout<<"Introduce una frase: ";
    cin.getline(Cadena,20,'\n');
    cout<<"El tamaño de la cadena es: "<<tam_cad(Cadena)<<endl;

    return 0;
}
int tam_cad(char Cadena[]){
    int i=0;
    while(Cadena[i]!='\0'){
        i++;
    }
    return i;
}

