//suma recursiva de los elementos de un array
#include <iostream>

using namespace std;
int vec[100],tam;//variables globales
void ingresar(){
    cout<<"\nTamaño del arreglo: ";cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<i+1<<". numero: ";cin>>vec[i];
    }
}
int sumarecursiva(int vec[],int tam){
    if (tam==0)
        return 0;
    else
        return vec[tam-1]+sumarecursiva(vec,tam-1);
}
int sumaiterativa(int vec[],int tam){
    int cont=0;
    for(int i=0;i<tam;i++){
        cont+=vec[i];
    }
    return cont;
}
int main(){
    ingresar();
    cout<<"\nLa suma recursiva: "<<sumarecursiva(vec,tam)<<endl;
    cout<<"\nLa suma iteriativa: "<<sumaiterativa(vec,tam)<<endl;
    system("pause");
    return 0;
}
