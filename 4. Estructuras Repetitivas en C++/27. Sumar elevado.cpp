//11. Escriba un program que calcule el valor de: 2^1+2^2+.... +2^n

#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(){
	int suma = 0, elevado = 0, n;
	
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>n;
	
	for(int i=1; i<=n;i++){
		elevado = pow(2, i);
		suma+=elevado;
	}
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");
	
	return 0;
}
