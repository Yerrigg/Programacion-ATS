/*
    2. Escriba un programa que lea trea números y determine cuál de ellos es el mayor
*/

#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3;

    cout << "Ingrese tres numeros: ";
    cin >> n1 >> n2 >> n3;

    if ((n1==n2) && (n1==n3))
    {
        cout << "\nLos numeros son iguales!";
    }
    else if((n1>n2) && (n1>n3))
    {
        cout << "\nEl numero mayor es: " << n1;
    }
    else if((n2>n1) && (n2>n3))
    {
        cout << "\nEl numero mayor es: " << n2;
    }
    else{
        cout << "\nEl numero mayor es: " << n3;
    }
    return 0;
}
