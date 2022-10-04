/*
    La setencia if 

    if (condicion){
        Instrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/

#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;//operador de asignacion
    
    cout << "Digite un numero : ";
    cin >> numero;

    if(numero == dato){ //operador de igualdad
        cout << "El numero es 5";
    }
    else{
        cout << "El numero es diferente de 5";
    }

    return 0;
}
