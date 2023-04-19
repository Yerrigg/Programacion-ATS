//14. En una clase de 5 alumnos se han realizado tres examenes y se requiere determinr el número de: 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	float n1, n2 ,n3;
	int aproboAll=0, aproboOne=0, aproboEnd=0;
	
	
	
	for(int i=1;i<=5; i++){
		cout<<"\n\tESTUDIANTE "<<i<<endl;
		
		cout<<"Ingrese nota 1: ";
		cin>>n1;
		cout<<"Ingrese nota 2: ";
		cin>>n2;
		cout<<"Ingrese nota 3: ";
		cin>>n3;
		
		
		if((n1>10.5) && (n2>10.5) && (n3>10.5)){
			aproboAll++;
		}
		
		if((n1>=10.5) || (n2>10.5) || (n3>10.5)){
			aproboOne++;
		}
		
		if((n1<10.5) && (n2<10.5) && (n3>10.5)){
			aproboEnd++;
		}
		
	}
	
	//salida
	cout<<"Aprobaron todo: "<<aproboAll<<endl;
	cout<<"Aprobo al menos uno: "<<aproboOne<<endl;
	cout<<"Aprobo el ultimo examen: "<<aproboEnd<<endl;
	
	system("pause");
	return 0;
}
