/*1.3.2 : POINTERS TO ARRAY ELEMENTS*/
#include<iostream>
using namespace std;


int main(){
    const int ARRAY_LEN = 100;
    int arr [ ARRAY_LEN ];
    int * p = arr ;
    int * q = & arr [0];
    system("pause");
    return 0;
}
