#include<iostream>
using namespace std;
int sum ( const int x, const int y ,const int z) {//solo habia dos parametros
    return x + y +z;
}

int main () {
    cout << sum (1, 2, 3)<<endl; // Should print 6
    system("pause");
    return 0;
}
