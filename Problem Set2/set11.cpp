//1.1.1 DEFAULT ARGUMENTS
#include<iostream>
using namespace std;
void printNTimes(char *msg,int n){
    for(int i=0;i<n;++i){
        cout<<msg<<endl;
    }
}
void printNTimes1( char * msg , int n = 1) {
    for ( int i = 0; i < n ; ++i ) {
        cout << msg <<endl;
    }
}
void printNTimes2 ( char * msg = " \ n", int n = 1) {//para escribir k lineas nuevas se usa el '\n'
    for ( int i = 0; i < n ; ++ i ) {
        cout << msg <<endl;
    }
}
 
int main(){
    char *msg="hola";
    int n=4;
    printNTimes(msg, n);
    printNTimes1(msg, n);
    printNTimes2(msg, n);
    system("pause");
    return 0;
}
