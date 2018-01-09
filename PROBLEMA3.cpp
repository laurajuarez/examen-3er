#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>num1>>num2;
	
	if(num1>num2){
		cout<<"El numero mayor es: "<<num1<<endl;
		cout<<"El numero menor es: "<<num2<<endl;
    }
    
    if(num2>num1){
    	cout<<"El numero mayor es: "<<num2<<endl;
    	cout<<"El numero menor es: "<<num1<<endl;
	}
	
	cout<<"El rango es: "<<endl;
	
	while(num1<num2){
		num1++;
		cout<<num1<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
