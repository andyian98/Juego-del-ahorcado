/*Pedir una contrase�a (3 intentos m�ximo) hasta que la clave sea 123 o 456, 
usando do<instruction>while(condition)*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	char clave[3];
	int contador=3;
	
	do{
		cout<<"Ingrese la contrase�a"<<endl;
		cin>>clave;
		contador=contador-1;		
	}while(clave!="123" || clave!="456" || contador>0);
	if (clave=="123" || clave=="456"){
		cout<<"Contrase�a correcta";
	}else{
		cout<<"Contrase�a incorrecta, usted agot� sus intentos";
	}
	getch();
	return 0;
}
