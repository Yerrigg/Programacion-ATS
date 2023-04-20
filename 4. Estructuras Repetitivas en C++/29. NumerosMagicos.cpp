#include <iostream>
#include <stdlib.h>
#include <time.h> //para generar numero aleatorio

using namespace std;

int main(){
    int numero, dato, contador = 0;

    srand(time(NULL)); //funcion generar nuemero aleatorio
    dato = 1 + rand() % (100);

    do{
        cout<<"Digite un numero: ";
        cin>>numero;

        if(numero>dato){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n"<<contador<<endl;

    system("pause");

    return 0;
}
