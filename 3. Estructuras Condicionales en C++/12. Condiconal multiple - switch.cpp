/*
    La sentencia switch

    switch(expresion){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjutno de instrucciones2;
            break;
        case literal-n:
            conjunto de instruccines-n;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
        }
*/

#include <iostream>

using namespace std;

int amin (){
    int numero;

    cout << "Digite un numero entre 1-5";
    cin >> numero;

    switch(numero){
        case 1: cout << "Es le numero 1"; break;
        case 2: cout << "Es le numero 2"; break;
        case 3: cout << "Es le numero 3"; break;
        case 4: cout << "Es le numero 4"; break;
        case 5: cout << "Es le numero 5"; break;
        default: cout << "No esta en el rango de 1-5"; break;
    }


    return 0;
}
