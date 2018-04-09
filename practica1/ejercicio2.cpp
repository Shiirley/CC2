//suma recursiva de los elemntos d un array
#include <iostream>

using namespace std;
int sumarecursiva(int A[],int n){
    if (n==0)
        return A[n];
    else
        return A[n-1]+sumarecursiva(A[n],n-1);
}
int sumaiterativa(int B[],int m){
    int cont=0;
    for(int i=0;i<m;i++){
        cont+=B[i];
    }
    return cont;
}
int main(){
    int A[7]={1,2,3,4,5,6,7};
    int B[6]={1,2,2,3,1,1};
    cout<<sumarecursiva(A,7)<<endl;
    cout<<sumaiterativa(B,6)<<endl;
    system("pause");
    return 0;
}
