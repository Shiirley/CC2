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
    cout<<endl;
}
//MERGE SORT
//QUICK SORT
void quickSort(int arr[],int izq,int der){
    int i=izq,j=der,temp;
    int p=arr[(izq+der)/2];
    while(i<=j){
        while(arr[i]<p) i++;
        while(arr[j]>p) j--;
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(izq<j){
        quickSort(arr,izq,j);
    }
    if(i<der){
            quickSort(arr,i,der);
        }
}

int main()
{
    int V[6]={1,8,6,5,3,0};
    insertionSort(V,6);
    quickSort(V,0,5);
    for(int i=0;i<6;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
