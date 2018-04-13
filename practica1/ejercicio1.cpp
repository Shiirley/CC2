

#include <iostream>

using namespace std;
void referencia(int &x){
    x+=10;
}
//paso por valor
int valor(int y,int x){
    return y+x;
}
int main(){
    int num=10,n=5,m=6;
    referencia(num);
    cout<<"Paso por referencia: "<<num<<endl;
    cout<<"Paso por valor: "<<valor(n,m)<<endl;
    system("pause");
    return 0;
}
