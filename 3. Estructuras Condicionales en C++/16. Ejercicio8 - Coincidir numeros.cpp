/*
    Escribe un programa que lea de la entrada estándar tres números. 
    Después debe leer un cuarto número e indicar si el número coincide 
    con alguno de los introducios con anterioridad.
*/

#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3,n4;

    cout << "Ingrese el tres numero: ";
    cin >> n1 >> n2 >> n3;

    cout << "Ingrese un cuarto numero: ";
    cin >> n4;

    if((n1==n4)||(n2==n4)||(n3==n4)){
        cout << "El cuarto numero coincide con algun numero introducido anteriormente";
    }
    else{
        cout << "El cuarto numero no coincide con los anteriores";
    }
   
    return 0;
}
