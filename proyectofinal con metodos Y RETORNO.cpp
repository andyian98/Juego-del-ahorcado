#include<iostream>
#include<conio.h>
using namespace std;


//declaración de funcion
void cargar_Array (char palabra_Original[],int dim);
void dibujarAsteriscos();
void dibujarGuiones(int dim);
bool comparador(char palabra_Original[], char palabra_Intento[], int dim);
//variables globales
bool coinciden;
int dim=0, cant_Vidas=0;

int main(){	
	bool variablederetorno;
		
	cout<<"Cuantas letras tiene la palabra a adivinar?"<<endl;
	cin>>dim;	
	char palabra_Original[dim], palabra_Intento[dim];
	
	cargar_Array (palabra_Original,dim);	

	cout<<"\nCuantos intentos tendra el jugador?"<<endl;
	cin>>cant_Vidas;
	
	dibujarAsteriscos;
	
	cout<<"\nLa palabra tiene "<<dim<<" letras "<<endl;
	dibujarGuiones(dim);
	cout<<"\nCantidad de vidas disponibles: "<<cant_Vidas<<endl;	
	
	
	variablederetorno=comparador(palabra_Original,palabra_Intento,dim);
	
	if(coinciden==true){
		cout<<"\nFELICITACIONES! GANASTE";
	}else{
		cout<<"\nPERDISTE";
	}	
	getch();
	return 0;
}

	void cargar_Array (char palabra_Original[],int dim){
		for (int i=0; i<=(dim-1); i++){
		cout<<"\nIngrese la "<<i+1<<" letra de la palabra"<<endl;
		cin>>palabra_Original[i];
		}
	}	
	
	void dibujarAsteriscos(){
		for (int i=0; i<=19; i++){
			cout<<"*";
		}
	}	
	
	void dibujarGuiones(int dim){
		for (int i=0; i<=(dim-1); i++){
		cout<<" _ ";
		}
	}
	
	bool comparador(char palabra_Original[], char palabra_Intento[], int dim){
			
		for (int i=0; i<=(dim-1); i++){	
			do{		
				cout<<"\nIngrese la "<<i+1<<"º letra de la palabra a adivinar"<<endl;
				cin>>palabra_Intento[i];
			
					if(palabra_Original[i]==palabra_Intento[i]){
						coinciden=true;
						i=i+1;
					}else{
						coinciden=false;
						cant_Vidas=cant_Vidas-1;
						cout<<"Letra "<<i+1<<" incorrecta. Quedan "<<cant_Vidas<<" vidas"<<endl;
						}
			}while (i<dim && cant_Vidas>0);	
		}
		return coinciden;		
	}

