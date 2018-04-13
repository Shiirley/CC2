/*1.1.2 CONSTANT ARGUMENTS: Una variable declarada const no se puede cambiar, es decir, es una constante. 
No obstante, la palabra const s�lo se tiene en cuenta durante el tiempo de compilaci�n.
El compilador emite un error cuando encuentra una instrucci�n que quiere asignar un valor a una constante,*/
#include<iostream>
using namespace std;
void print(const long &x){
    cout<<x<<endl;
}

int main(){
    long x=234923592;
    print(x);
    system("pause");
    return 0;
}
