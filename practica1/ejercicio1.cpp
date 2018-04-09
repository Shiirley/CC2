//paso por referencia
#include <iostream>

using namespace std;

void referencia(int &x){
    x+=10;
}
//paso por valor
void valor(int y){
    y+=10;
}
int main(){
    int num=10,n=30;
    referencia(num);
    cout<<num<<endl;
    valor(n);
    cout<<n<<endl;
    system("pause");
    return 0;
}
