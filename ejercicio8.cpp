#include<iostream>
using namespace std;

void intercambiar(char cad[], int pos1, int pos2)
{
	char aux=cad[pos1];
	cad[pos1]=cad[pos2];
	cad[pos2]=aux;
}
int main(){
    char cadena[]="Winner";
    intercambiar(cadena,0,5);
    cout<<cadena<<endl;
    system("pause");
    return 0;
}
