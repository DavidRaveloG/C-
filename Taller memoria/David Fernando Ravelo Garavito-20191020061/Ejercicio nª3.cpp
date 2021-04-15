#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include<typeinfo>
using namespace std;
struct nodo {
	int x,y;
    nodo*sig;
};
int main(int argc, char** argv) {
	
	int N, i, j;
	long int mem;
	nodo *cab= NULL, *Aux;
	cin>>N;
	for(i=0;i<N;i++){
		Aux= new nodo;
		
		Aux->x =i;
		Aux->y=N-i;
		Aux->sig= cab;
		cab = Aux;
	}
	 

cout<<"Memoria antes: "<<sizeof(*cab)+ sizeof(*Aux)+sizeof(N)+sizeof(i)+sizeof(j);
//cout<<mem;
	
	Aux=cab;
	while(Aux!=NULL){
		cout<<Aux->x<< Aux->y<<endl;
		Aux=Aux->sig;
	}

}

