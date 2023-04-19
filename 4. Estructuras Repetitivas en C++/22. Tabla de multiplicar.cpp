/*
    1. Realice un programa que soliciete de la entrada estánder un entero del 1 al 10 y muester en la salida estándar su tabla de multiplicar.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;

    do{
        cout << "Digite un numero[1-10]: ";
        cin >> numero;
    }while((numero<1) || (numero>10));

    for(int i=1; i<=20; i++){
        cout << numero << " * " << i << " = "<< numero*i<<endl;
    }

    cout << "\n\n";
    system("pause");
    return 0;
}
