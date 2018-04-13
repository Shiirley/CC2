/*1.2.1 POINTERS TO POINTERS: */
#include<iostream>
using namespace std;
void setString(char **strPtr){
    int x;
    cin>>x;
    if(x<0)
        *strPtr="Negative!";
    else
        *strPtr="Nonnegative!";
}
//para permitir que las funciones establezcan los valores de los punteros en su
//funciones de llamada. 
int main(){
    char *str;
    setString(&str);
    cout<<str<<endl;
    system("pause");
    return 0;
}
