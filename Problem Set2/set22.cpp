/*1.2.2 RETURNING POINTERS: Cuando declara una variable local dentro de una función, 
esa variable queda fuera del alcance cuando la función finaliza:
el sistema operativo recupera la memoria asignada y todo lo que estaba almacenado en esa memoria puede borrarse. */
#include<iostream>
using namespace std;

int * getRandNumPtr (){
    int x = rand ();
    return &x ;
}
int main () {

    int * randNumPtr = getRandNumPtr () ;

    cout << * randNumPtr ; // ERROR//está intentando acceder a la memoria que ya no está en uso: x de getRandNumPtr ha sido desasignado.
    SYSTEM("PAUSE");
    return 0;

 }
 

