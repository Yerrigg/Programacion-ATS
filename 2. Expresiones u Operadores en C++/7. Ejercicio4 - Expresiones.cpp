/*
4. Esciribe la siguiente expersión como expresión en C++:
a + (b/(c-d))
*/

#include <iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    cout << "Ingrese el valor de d: "; cin >> d;

    resultado = a + (b / (c-d));

    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}
