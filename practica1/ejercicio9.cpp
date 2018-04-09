#include<iostream>
#include<cstring>
using namespace std;

bool esPalindrome(char A[],char B[]){
    int tam=strlen(A);
    for(int i=(tam-1);i>=0;i--){
        B[tam-1-i]=A[i];
    }
    B[tam]='\0';
    if(strcmp(A,B)==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    char cad[50],cadAux[50];
    cout<<"Ingrese una palabra: ";gets(cad);
    if(esPalindrome(cad,cadAux)==true){
        cout<<"Es palindrome."<<endl;
    }else{
        cout<<"No es palindrome."<<endl;
    }
    system ("pause");
    return 0;
    
    
}
