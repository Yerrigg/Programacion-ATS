#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero; 

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i=2;numero>1;i++){
        while(numero%i==0){
            cout<<i<<" ";
            numero /= i;
            
        }
    }

    cout<<"\n";
    system("pause");

    return 0; 
}
