/*
    La sentencia do while 

    do{
        conjunto de instruccioes; 
    }while(expersión lógica);
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int i;

    i = 10;

    do{
        cout<<i<<endl;
        i--; //aumenta-decremento el iterador de uno en uno
    }while(i>=1);

    system("pause");
    return 0;
}
