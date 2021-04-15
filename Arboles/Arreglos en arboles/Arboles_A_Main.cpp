#include<iostream>
#include "Arboles_Arreglos.h"
#include <vector>
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
int main(){
	ARBOL a; 
	NODO *p;
	int i[]={1,2,3,4,5},b[]={6,7,8,9,10,11,12},c[]={55,100,200} ,k;
	cout<<"Primer arreglo "<<endl;
	cout<<"{";
	while(i[k]!=NULL){
		cout<<i[k]<<",";
		k++;
	}
	k=0;
	cout<<"}"<<endl;
	cout<<"Ingresa arreglo 1"<<endl;
	
	a.ins_arbol(i);
	cout<<"Segundo arreglo "<<endl;
	cout<<"{";
	while(b[k]!=NULL){
		cout<<b[k]<<",";
		k++;
	}
	k=0;
	cout<<"}"<<endl;
	
	
	cout<<"Ingresa arreglo 2"<<endl;
	a.ins_arbol(b);
	cout<<"Tercer arreglo "<<endl;
	cout<<"{";
	while(c[k]!=NULL){
		cout<<c[k]<<",";
		k++;
	}
	cout<<"}"<<endl;
	a.ins_arbol(c);
	cout<<"Arbol :"<<endl; 
	a.Mostrar(a.raiz_arbol());
	cout<<"Elimina segundo arreglo"<<endl;
	a.retira_arbol(b);
	cout<<"Nuevo arbol"<<endl;
	
	a.Mostrar(a.raiz_arbol());
	
}
