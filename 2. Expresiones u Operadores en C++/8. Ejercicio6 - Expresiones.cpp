/*
6. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final de media de los cuatro alumnos.
*/

#include <iostream>

using namespace std;

int main() {
    float a1, a2, a3, a4;
    int notaFinalMedia;


    cout<<"Ingrese la nota final de alumno 1: ";
    cin>>a1;
    cout<<"Ingrese la nota final de alumno 2: ";
    cin>>a2;
    cout<<"Ingrese la nota final de alumno 3: ";
    cin>>a3;
    cout<<"Ingrese la nota final de alumno 4: ";
    cin>>a4;

    notaFinalMedia = (a1+a2+a3+a4)/4;

    cout<<"\nLa nota final media es: "<<notaFinalMedia <<endl;

    return 0;
}
