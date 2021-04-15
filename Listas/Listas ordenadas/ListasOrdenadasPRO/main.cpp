#include <iostream>
#include <conio.h>
#include "lorden.h"
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
struct estudiante {
	string nombre, direccion, carrera;
	int edad;
};

int main(int argc, char** argv) {
	
	lista<estudiante> x;
	int n=1, idest=0;
	while(n!=0){
		cout<<"Ingrese 0 para salir del programa"<<endl;
		cout<<"Ingrese 1 para registrar Estudiante"<<endl;
		cout<<"Ingrese 2 para consultar Estudiante"<<endl;
		cout<<"Ingrese 3 para borrar Estudiante"<<endl;
		cout<<"Ingrese 4 para consultar los registros."<<endl;
		cin>>n;
		switch(n){
			case 1:{
				estudiante est;
				
				cout<<"Ingrese nombre estudiante: "<<endl;
				cin>>est.nombre;
				
				cout<<"Ingrese carrera estudiante: "<<endl;
				cin>>est.carrera;
				
				cout<<"Ingrese direccion estudiante: "<<endl;
				cin>>est.direccion;
				
				cout<<"Ingrese edad estudiante: "<<endl;
				cin>>est.edad;
				
				cout<<"Ingrese codigo estudiante: "<<endl;
				cin>>idest;
				
				x.insertarNodo(idest, est);
								
				break;
			}
			
			case 2:{
				
				int a;
				
				cout<<"Ingrese codigo estudiante: "<<endl;
				cin>>a;
				
				x.obtenerdatoNodo(a);
				
				break;
			}
			
			case 3:{
				
				int a;
				
				cout<<"Ingrese codigo estudiante: "<<endl;
				cin>>a;
				
				if(x.eliminarNodo(a)){
					cout<<"Se eliminó correctamente";
				}else{
					cout<<"No se encontró el estudiante"<<endl;
				}
				
				break;
			}
			
			case 4:{
				
				cout<<"Imprimiendo.."<<endl;
				x.imprimir();
				
				break;
			}
			
			default: {
				
				cout<<"No existe esa opción"<<endl;
				
				break;
			}
		}
	}
	
	return 0;
}
