#include <iostream>

using namespace std;


int main(){
    int numero, contar=0;

    do{
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(numero>0)
            contar ++;

    }while(numero != 0);

    cout<<"\nCantidad numeros: "<< contar;



    return 0;
}
