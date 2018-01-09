#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int num, num2;
	
	cout<<"Ingrese dos numeros"<<endl;
	cin>>num>>num2;

	
	if(num==num2){
		cout<<"/**********************************\ "<<endl;
		cout<<"/********* son iguales ************\ "<<endl;
		cout<<"/**********************************\ "<<endl;
	}
	
	else if(num!=num2){
		cout<<"/**********************************\ "<<endl;
		cout<<"/******** no son iguales **********\ "<<endl;
		cout<<"/**********************************\ "<<endl;
	}
	
	else{
		cout<<"No es un numero valido"<<endl;
	}
	
	system("pause");
	return 0;
}
