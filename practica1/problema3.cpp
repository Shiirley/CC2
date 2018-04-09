#include <iostream>

using namespace std;
//INSERTION SORT
int insertionSort(int A[],int n){
    int i,pos,aux;
    for(i=0;i<n;i++){
        pos=i;
        aux =A[i];
        while ((pos>0)&&(aux<A[pos-1])){
            A[pos]=A[pos-1];
            pos--;
        }
        A[pos]=aux;
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
//MERGE SORT

int main()
{
    int V[6]={1,8,6,5,3,0};
    insertionSort(V,6);
    return 0;
}
