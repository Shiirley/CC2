#include<iostream>
using namespace std;
int ingresar(int B[10][10],int filas,int columnas){
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"ingrese el elemento: ["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    }cout<<endl;
}
int mostrar(int B[10][10],int filas,int columnas){
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            
            cout<<" "<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void multiplicacion(int a[10][10],int b[10][10],int f,int c,int n){
    int producto[10][10];
    int temp;
    for(int i=0;i<f;i++){
        for(int k=0;k<n;k++){
            temp=0;
            for(int j=0;j<c;j++){
                temp+=a[i][j]*b[j][k];
                producto[i][k]=temp;
            }
        }
    }
    cout<<"\nPRODUCTO DE LA MATRIZ A Y B\n"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<n;j++){
            
            cout<<" "<<producto[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int f,c,m,n;
    int A[10][10],B[10][10];
    cout<<"Filas de A: ";cin>>f;
    cout<<"Columnas de A: ";cin>>c;
    cout<<"\nFilas de B: ";cin>>m;
    cout<<"Columnas de B: ";cin>>n;
    
    if(c==m){
        ingresar(A,f,c);
        mostrar(A,f,c);  
        ingresar(B,m,n);
        mostrar(B,m,n);
        multiplicacion(A,B,f,c,n);
    }else{
        cout<<"no se pueden multiplicar estas matrices"<<endl;
    }
    system("pause");
    return 0;
}
