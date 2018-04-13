#include<iostream>
using namespace std;

void printNum (int number ) { 
    cout<< number ;
}
/*void printNum () { 
    std :: cout << number ;
   
}*/
int doubleNumber(int num){
    num=num*2;
    return num;
}
int main () {
    int num=35;
    printNum (num) ;
    cout<<"\n"<<doubleNumber(num);
    
    
    system("Pause");
    return 0;

 }




 
