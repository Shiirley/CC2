#include<iostream>
using namespace std;
void concat(char t[],char s[]){
    int c=sizeof(s);
    int i=0;
    while(t[i]!='\0'){
        s[c+i]=t[i];
        i++;
    }
}
//Error
char concatenar(char *t,char *s){
    
        while(*t!='\0'){
            *(s+5)=*(t++);
        }
        return *s;
}
    

int main(){
    
    char s[20]="Song";
    char t[20]="Mino";
    concat(t,s);
    cout<<s<<endl;
    concatenar(t,s);
    cout<<s<<endl;
    system("pause");
    return 0;
    
}
