#include<iostream>
using namespace std;
char copiar(char a[],char b[],int tam1,int tam2){
    for(int i=0;i<tam2;i++){
        b[i]=a[i];
    }
    for (int i=0;i<tam1;i++){
        return a[i];
    }
    cout<<endl;
}
int main(){
    char s[100]="IKON";
    char t[100]="WINNER";
    int tams=100;
    int tamt=100;
    cout<<"Antes de copiar: "<<endl;
    cout<<"\ns="<<s<<" y t="<<t<<endl;
    copiar(t,s,tams,tamt);
    cout<<"\nDespues de copiar: "<<endl;
    cout<<"\ns="<<s<<" y t="<<t<<endl;
    system ("pause");
    return 0;
}
