#include<iostream>
#include "ArbolesO.h"
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ram�rez R�tiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
int main(){
	ARBOL a; NODO *p;  int i;
	cout<<"N�mero a insertar? (fin =999)..."<<endl;
	cin>>i;
	while(i!=999){
       if (a.ins_arbol(i)==-1) cout<<"Ya existe"<< endl;
       cout<<"N�mero a insertar? (fin =999)..."<<endl;
       cin>>i;
	   }
	cout<<"N�mero a retirar (fin=999)"<<endl;
	cin>>i;
	while(i!=999){
       if (a.retira_arbol(i)==-1) cout<<"No existe"<< endl;
       cout<<"N�mero a retirar? (fin =999)..."<<endl;
       cin>>i;
	   }
	cout<<"Inorden"<<endl;
    a.inorden(a.raiz_arbol());
    cout<<"Posorden"<<endl;
    a.posorden(a.raiz_arbol());
    cout<<"Preorden"<<endl;
	a.preorden(a.raiz_arbol());    
return 0;
}
