/*
    1. Escriba un programa que lea dos números y determine cuál de ellos es mayor.
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cout << "Digite 2 numeros: ";
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        cout << "\nLos numeros son iguales!";
    }
    else if (n1 > n2)
    {
        cout << "\nEl numero mayor es: " << n1;
    }
    else
    {
        cout << "\nEl numero mayor es: " << n2;
    }

    return 0;
}
