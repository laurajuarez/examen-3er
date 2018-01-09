#include<iostream>
#include<string>
using namespace std;

int main(){
     int n, cuadrado;
     cout<<"Ingrese un numero: "<<endl;
     cin>>n; 
     
	 while(n>=0){
     	cuadrado=n*n;
     	cout<<cuadrado<<endl;
     	
     	cout<<"Introduzca otro numero"<<endl;
     	cin>>n;
     	
     	if(n<0){
     		cout<<"Introduzca un numero valido"<<endl;
		 }
	 }
	
	
	system("pause");
	return 0;
}
