/*Pedir una contraseña (3 intentos máximo) hasta que la clave sea 123 o 456, 
usando do<instruction>while(condition)*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	char clave[3];
	int contador=3;
	
	do{
		cout<<"Ingrese la contraseña"<<endl;
		cin>>clave;
		contador=contador-1;		
	}while(clave!="123" || clave!="456" || contador>0);
	if (clave=="123" || clave=="456"){
		cout<<"Contraseña correcta";
	}else{
		cout<<"Contraseña incorrecta, usted agotó sus intentos";
	}
	getch();
	return 0;
}
