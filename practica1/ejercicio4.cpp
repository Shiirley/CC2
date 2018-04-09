#include<iostream>
using namespace std;
void multiplicacion(int a[2][2],int b[2][2]){
    int producto[2][2];
    int temp;
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            temp=0;
            for(int j=0;j<2;j++){
                temp+=a[i][j]*b[j][k];
                producto[i][k]=temp;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<producto[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int A[2][2]={{1,2},{2,1}};
    int B[2][2]={{2,1},{1,2}};
    multiplicacion(A,B);
    system("pause");
    return 0;
}
