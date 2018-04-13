/*1.2.2 RETURNING POINTERS: Cuando declara una variable local dentro de una funci�n, 
esa variable queda fuera del alcance cuando la funci�n finaliza:
el sistema operativo recupera la memoria asignada y todo lo que estaba almacenado en esa memoria puede borrarse. */
#include<iostream>
using namespace std;

int * getRandNumPtr (){
    int x = rand ();
    return &x ;
}
int main () {

    int * randNumPtr = getRandNumPtr () ;

    cout << * randNumPtr ; // ERROR//est� intentando acceder a la memoria que ya no est� en uso: x de getRandNumPtr ha sido desasignado.
    SYSTEM("PAUSE");
    return 0;

 }
 

