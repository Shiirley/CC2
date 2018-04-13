#include<iostream>
using namespace std;
const int ARRAY_LEN = 10;

int main () {

    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
    // other elements
    int c=sizeof(arr)-1;
    int * xPtr = arr ;
    int *yPtr = arr + c;

    cout <<*xPtr <<" "<<*yPtr ; // Should output 10 0
    system("Pause");
    return 0;

}
