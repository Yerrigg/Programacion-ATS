/*1. Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;


    //para comprobar si el dato ingresado es correcto.
    do{
        cout <<"Digite un numero: ";
        cin >> numero;
    }while((numero<1) || (numero>10));

    for(int i=1; i<=20; i++){
        cout<<numero<< " * "<<i<<" = "<<numero*i<<endl;
    }

    cout<<"\n\n";

    system("pause>0");

    return 0;
}
