/*
7. La calificación final de un estudiante es la media ponderada de tres notas:
la nota de prácticas que cuantea en 30% de l total, la nota teórica que cuenta un 60%
y la nota de participación que cuenta el 10% restante. Escribia un programa
que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.
*/

 #include <iostream>

 using namespace std;

 int main () {
    float notaPractica, notaTeorica, notaParticipacion, notaFinal=0;

    cout<<"Ingrese la nota de practica: ";
    cin>>notaPractica;
    cout<<"Ingrese la nota de teoría: ";
    cin>>notaTeorica;
    cout<<"Ingrese la nota de particiáción: ";
    cin>>notaParticipacion;

    notaPractica *= 0.30; // practica = pracitca * 0.30
    notaTeorica *= 0.60;
    notaParticipacion *= 0.10; 

    notaFinal = notaPractica + notaTeorica + notaParticipacion;
    cout.precision(3);
    cout<<"\nLa nota final es: "<<notaFinal<<endl;


    return 0;
 }
