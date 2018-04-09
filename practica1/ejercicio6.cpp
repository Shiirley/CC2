#include<iostream>
#include<stdio.h>
using namespace std;
void  concatN(char s[],char t[],int tam){
    int i=0;
    for(i=0;i<tam;i++){
        s[i]=t[i];
    }
    for(i=0;i<tam;i++){
        cout<<s[i]+" "+t[i];
    }
}

int main(){
    char s[20]="Hello";
    char t[20]="World";
    concatN(s,t,20);
   
    system("pause");
    return 0;
}
