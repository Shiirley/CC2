#include<iostream>
#include<cstdlib> // contains some math functions
using namespace std;

int difference ( const int x , const int y) {
    int diff = abs( x - y ) ;
    return diff; // abs ( n) returns absolute value of n
}

int main () {
    cout << difference (24 , 1238) ;
    system("PAUSE");
    return 0;
 }
