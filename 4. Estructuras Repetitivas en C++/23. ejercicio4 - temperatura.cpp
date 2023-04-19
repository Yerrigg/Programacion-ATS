/*
    4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int temp;
        cout << "Ingrese la temperatura: ";
        cin >> temp;
  
    for(int i=1; i<=6; i++){
        cout << temp << endl;
    }

    return 0;
}
