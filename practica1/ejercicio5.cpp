#include<iostream>
using namespace std;
int sizeN(char c[]){
    int tam=0;
    while(c[tam]!='\0'){
        tam++;
    }
    return tam;
}
int sizeP(char *p){
    int tam=0;
    while(*p!='\0'){
        tam++;
        p++;
    }
    return tam;    
}
int main(){
    char *cad="hola";
    cout<<"Tama�o de un arreglo: "<<sizeN(cad)<<endl;
    cout<<"Tama�o de un arreglo mediante punteros: "<<sizeP(cad)<<endl;
    system("PAUSE");
    return 0;
}
