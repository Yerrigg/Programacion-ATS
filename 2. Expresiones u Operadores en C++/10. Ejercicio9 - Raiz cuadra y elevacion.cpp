/*
9. Realice un programa que calucule el valor que toma la siguiente función
para unos valores dados de x e y: 
f(x,y) = sqrt(x) / (pow(y,2)-1)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x,y, resultado = 0; 

    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese el valor de y: "; cin >> y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout << "\nEl resultado es: " << resultado << endl;
    

    return 0; 
}
