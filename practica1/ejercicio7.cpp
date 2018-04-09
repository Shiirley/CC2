#include<iostream>
using namespace std;
char concatenar(char s[],char t[]){
    int i=0,j=0;
    //int aux=strlen[s];
    while(t[i]!='\0'){
        s[6+i]=t[i];
        i++;
    }
    s[6+i]=' ';
    i++;
    while(t[j]!='\0'){
        s[i+j]=t[j];
        j++;
    }
    s[i+j]='\0';
    cout<<endl;
}
int main(){
    
    char s[20]="Song";
    char t[20]="Mino";
    concatenar(s,t);
    system("pause");
    return 0;
    
}
