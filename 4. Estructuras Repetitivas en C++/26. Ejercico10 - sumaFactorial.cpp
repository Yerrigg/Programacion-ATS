//10. Escriba un programa que calcule el valor de : 1!+2!+.....+n!.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int numero, suma=0, factorial=1;
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial*=i;
		suma+=factorial;
	}
	
	cout<<"El resultado es: "<<suma;
	
	return 0;
}
