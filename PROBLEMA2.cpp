#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int num;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	
	if(num%2==0){
		cout<<"No es un numero valido"<<endl;
	}
	
	else if(num>0){
		cout<<"El numero es positivo"<<endl;
	}
	else if(num<0){
		cout<<"El numero es negativo"<<endl;
	}
	
	system("pause");
	return 0;
}
