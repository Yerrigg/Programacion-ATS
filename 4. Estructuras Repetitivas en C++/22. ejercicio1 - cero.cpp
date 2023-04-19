/*
    Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, contar = 0;

    do{
        cout << "Ingrese un numero: ";
        cin >> numero;
        if(numero>0){
            contar++;
        }
    }while(numero != 0);

    cout << "\nLa cantidad de numeros es: " << contar;

    getch();

    return 0;
}
