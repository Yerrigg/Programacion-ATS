//8. Escriba un programa que calucle el valor de 1+3+5...+2n-1

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>n;
	
	for(int i=0;i<=2*n-1;i+=2){
		suma +=i;
	}
	
	cout<<"La suma es: "<<suma;
	
	
	return 0;
}
