#include<iostream>
#include<stdio.h>
using namespace std;
//COPIAR USANDO ARREGLOA
char  copiarN(char s[],char t[]){
    int i=0;
    while(t[i]!='\0'){
        s[i]=t[i];
        i++;
    }
}
//FUNCION COPIAR USANDO PUNTEROS
void copyP(char *c1,char *c2){
    while(*c1!='\0'){
        *c2=*c1;
        c1++;
        c2++;
    }
    *c2='\0';
}   
    

int main(){
    char s[20]="Hello";
    char t[20]="World";
    cout<<"**********USANDO ARREGLOS*******\n";
    cout<<"Antes \ns= "<<s<<endl;
    cout<<"t= "<<t<<endl;
    copiarN(s,t);
    cout<<"\nDespues\ns= "<<s<<endl;
    cout<<"t= "<<t<<endl;
    cout<<"*********USANDO PUNTEROS********\n";
    copyP(s,t);
    cout<<"\nDespues\ns= "<<s<<endl;
    system("pause");
    return 0;
}
