/*
1. Escribe la siguiente expresión como expresión en C++:
a.- (a/b) + 1
*/

#include <iostream>

using namespace std;

int mai (){
    float a,b, resultado = 0;

    cout << "Digite el valor de a: "; cin >> a;
    cout << "Digite el valor de b: "; cin >> b;

    resultado = (a/b) + 1;

    cout.precision(2); //Catidad de digitos que quieres como resultado
    cout << "El resultado es: " << resultado << endl;
    
    return 0;
}
