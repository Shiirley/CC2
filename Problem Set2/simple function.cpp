/*1.3.2 : */
#include<iostream>
using namespace std;
void f( const int a = 5) {
    cout << a*2 << " ";
}

int a = 123;
int main (){
    f (1) ;
    f (a ) ;//246
    int b = 3;
    f (b ) ;
    int a = 4;
    f (a ) ;
    f();
    system("pause");
    return 0;
 }
