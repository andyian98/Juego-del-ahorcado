#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funci�n

int encontrarmax (int x, int y);

int main(){
	
	int n1=0, n2=0;
	int cualnum;
	cout<<"Digite dos numeros please"<<endl;
	cin>>n1;
	cin>>n2;
	
	cualnum<-encontrarmax(n1,n2);
	cout<<"El numero mayor entre los digitados es: "<<cualnum;
	
	getch();
	return 0;
}


//Definici�n de funci�n
int encontrarmax (int n1, int n2){
	int numax=0;
	if (n1>n2){
		numax=n1;
	}else{
		numax=n2;
	}
	return numax;	
} 
