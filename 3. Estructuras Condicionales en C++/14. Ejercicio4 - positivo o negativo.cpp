/*
    4. Comprabar si un numero digitado por el usuario 
    es positivo o negativo.
*/

#include <iostream>

using namespace std;

int main(){
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El numero es cero!";
    }
    else if(numero < 0)
    {
        cout << "El numero es negativo";
    }
    else 
    {
        cout << "El numero es positivo";
    }

    return 0;
}
