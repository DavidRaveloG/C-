#include <iostream>
#include "Lib_lista.h"
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
int main(int argc, char** argv) {
	int n=1,i=0;
	

	while(n!=0){
		cout<<"Ingrese 0 para salir del programa"<<endl;
		cout<<"Ingrese 1 para lista de enteros"<<endl;
		cout<<"Ingrese 2 para lista de double"<<endl;
		cout<<"Ingrese 3 para lista de char"<<endl;
		cin>>n;
	   switch(n){
	   		case 1:{
	   			lista <int> x; 
				for(i=0;i<=10;i++){	
					x.insertar_pos(i*2,i);
				}
				x.imprimir();
				cout<<"Se elimina la posicion 5"<<endl;
				x.eliminar(5);
				cout<<"Nueva lista"<<endl;
				x.imprimir();
				cout<<"Buscar dato en la posicion 5"<<endl;
				cout<<x.obtenerDato(5)<<endl;
				cout<<"Ingresar 100 en la posicion incial y 500 en la final "<<endl;
				x.insertar_inicio(100);
				x.insertar_final(500);
				x.imprimir();
				cout<<"1"<<endl;
				break;
			   }
	   		
				
			case 2:{
				lista <double> y; 
				for(i=0;i<=10;i++){	
					y.insertar_pos(i*2.2,i);
				}
				y.imprimir();
				cout<<"Se elimina la posicion 5"<<endl;
				y.eliminar(5);
				cout<<"Nueva lista"<<endl;
				y.imprimir();
				cout<<"Buscar dato en la posicion 5"<<endl;
				cout<<y.obtenerDato(5)<<endl;
				cout<<"Ingresar 10.5 en la posicion incial y 50.5 en la final "<<endl;
				y.insertar_inicio(10.5);
				y.insertar_final(50.5);
				y.imprimir();
				break;
			}
			case 3:{
				lista <char> y; 
				char v;
				for(i=0;i<=10;i++){	
					v= i*10+ '0';
					y.insertar_pos(v,i);
				}
				y.imprimir();
				cout<<"Se elimina la posicion 5"<<endl;
				y.eliminar(5);
				cout<<"Nueva lista"<<endl;
				y.imprimir();
				cout<<"Buscar dato en la posicion 5"<<endl;
				cout<<y.obtenerDato(5)<<endl;
				cout<<"Ingresar X en la posicion incial y Y en la final "<<endl;
				y.insertar_inicio('x');
				y.insertar_final('y');
				y.imprimir();
				break;
			}
			default: {
				cout<<"El numero ingresado no es valido"<<endl;
				break;
			}
				
			
				
	   }
	   	
	
	}
	return 0;
}
