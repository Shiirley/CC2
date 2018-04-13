/*1.1.3 RAMDOM NUMBER GENERATION FUNCTIONS: */
#include<iostream>
#include<cstdlib>//defines rand(),srand(),RAND_MAX
#include<ctime>// ctime funtions-define time()
using namespace std;

int main(){
    srand(time(0));
    int randNum=rand();
    cout<<"A random number: "<<randNum<<endl;
    system("pause");
    return 0;
}
