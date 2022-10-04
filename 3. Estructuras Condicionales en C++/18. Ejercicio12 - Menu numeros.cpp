/*
    12. Hacer un menú que considere las siguientes opciones:

    Caso 1: Cubo de un número
    Caso 2: Número par o impar
    caso 4: Salir
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int opc, numero ,cubo;

    cout << "\nMENU - Cubo, par o impar de un numero" << endl;
    cout << "1. El cubo de numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opciones: ";
    cin >> opc;


    switch(opc)
    {
        case 1:
            cout << "\nIngrese un numero: ";
            cin >> numero;
            cubo = pow(numero,3);
            cout << "El cubo es: " << cubo; break;
        case 2:
            cout << "\nIngrese un numero: ";
            cin >> numero;

            if(numero%2==0){
                cout << "El numero es par!"; break;
            }
            else{
                cout << "El numero es impar!"; break;
            }
        case 3: break;
    }

 return 0;
}
