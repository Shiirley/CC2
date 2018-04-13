/*1.3.1 ARRAYS AND POINTERS : */
#include<iostream>
using namespace std;


int main(){
    const char *suitNames[]={"Clubs","Diamonds","Spades","Clubs"};
    cout<<"Enter a suit number(1-4): ";
    unsigned int suitNum;
    cin>>suitNum;
    if(suitNum <=4){
        cout<<suitNames[suitNum-1];
    }
    system("pause");
    return 0;
}
