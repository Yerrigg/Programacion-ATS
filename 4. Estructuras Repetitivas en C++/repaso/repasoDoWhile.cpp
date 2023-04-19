/*La sentencia do while

    do{
        conjunto de instrcciones;
    }while(expresión lógica);
*/

#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
    int i;

    i = 10;

    do{
        cout<<i<<endl;
        i--;//aumenta el iterador de uno en uno
    }while(i>=1);

    system("pause>0");
    return 0;
}
