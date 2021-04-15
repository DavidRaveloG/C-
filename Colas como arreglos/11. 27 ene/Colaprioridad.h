#include <iostream>
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
using namespace std;
#ifndef lib_h
#define lib_h

class Cola{
	int *Arr, tam, PosAct;
	public: Cola(int x){
		Arr = new int [x+1];
		tam=x+1;
		PosAct=1;
	}
	bool insertar(int);
	void atender();
	void imprimirArreglo();
	bool cola_llena();
};
bool Cola::insertar(int pr){
	bool cl= cola_llena();
	if(cl==false){
		int posLibre= PosAct;
		
		int padre= posLibre/2;
		while(PosAct > 1 && padre > 0 && pr > Arr[padre]){
			Arr[posLibre]=Arr[padre];
			posLibre=padre;
			padre=posLibre/2;
		}
		Arr[posLibre]=pr;
		PosAct++;
		return true;
	}
	return false;	
}
void Cola::atender(){
	int Elim=PosAct-1, temp,padre;
	padre=1;
	temp=Arr[Elim];
	Arr[Elim]=0;
	Arr[padre]=0;
	PosAct=PosAct-1;
	while(true){
	
		if(temp>Arr[padre*2] && temp>Arr[(padre*2)+1]){
			Arr[padre]=temp;
			break;
		}
		if(Arr[padre*2]>temp && Arr[padre*2]>Arr[(padre*2)+1]){
			Arr[padre]=Arr[padre*2];
			Arr[padre*2]=0;
			padre=padre*2;
		}
		if(Arr[(padre*2)+1]>temp && Arr[(padre*2)+1]>Arr[padre*2]){
			Arr[padre]=Arr[(padre*2)+1];
			Arr[(padre*2)+1]=0;
			padre=(padre*2)+1;
		}	
	}	
		
}
void Cola::imprimirArreglo(){
	for(int i=1;i<PosAct;i++){
		cout<<Arr[i]<<" | ";
	}
	cout<<endl;
}
bool Cola::cola_llena(){
	if(PosAct > tam){
		return true;
	}
	else{
		return false;
	}
}
#endif /* lib_h */
