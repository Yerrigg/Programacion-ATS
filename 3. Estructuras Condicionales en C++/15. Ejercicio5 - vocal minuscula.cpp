/*
    5. Escriba un programa que lea de la entrada estándar un caracter e indique
    en la salida estándar si el carácter es una vocal minuscula o no. 
*/

#include <iostream>

using namespace std;

int main(){
    char letra; 

    cout << "Digite un caracter: ";
    cin >> letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minuscula"; break;
        default: cout << "NO es un vocal minuscula"; break;
    }

    return 0;
}
