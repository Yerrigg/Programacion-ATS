//12. Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+.....n

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, suma=0, par=0, impar=0, negativo=0;
	
	cout<<"Ingrese numero: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%2==0){
			negativo= i * -1;
			par+=negativo;
		}
		else{
			impar-=i;
		}	
	}
	
	suma = par + impar;
	
	cout<<"El resulatdo es: "<<suma;
	
	return 0;
}
