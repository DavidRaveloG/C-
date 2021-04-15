#include <cstdlib>
#include <iostream>
/*  f(n,tam) = 10 + N + 3*N*tam   */
using namespace std;

struct nodo {
	int x,y;
    nodo *sig;
};

int main(int argc, char** argv) {
	
	nodo **arr, *Aux;
	int N, tam, j, i;
	
	cout<<"Escriba el valor de N ";
	cin>>N;
	
	cout<<"Escriba el valor de tam ";
	cin>>tam;
	
	arr= new nodo *[N];
	
	for(i=0; i<N; i++)
		arr[i]=NULL;
		
	for(i=0; i<N; i++){
		for(j=1; j<=tam; j++){
			Aux=new nodo;
			Aux->x=j;
			Aux->y=N+j*i;
			Aux->sig = arr[i];
			arr[i]= Aux;
		}
	}
	
    for(i=0; i<N; i++){
		Aux = arr[i];
	 	cout<<"lista "<<i<<endl;
	 	
	 	while(Aux!=NULL){
		 	cout<<Aux->x<<" "<<Aux->y<<endl;
	 	 	Aux=Aux->sig; 
		}
		
	 	for(Aux=arr[i]->sig; Aux!=NULL; Aux=Aux->sig) {
		 	delete arr[i];
			arr[i]=Aux; 
		}
		
 		delete arr[i];
	}
	
	cout<<endl;
	cout<<"Memoria usada: "<<sizeof(N) + sizeof(tam) + sizeof(j) + sizeof(i) + sizeof(**arr) + sizeof(*Aux) + sizeof(arr)*N + ((sizeof(*Aux)*tam)*N)<<endl;
	
	delete []arr;
    return EXIT_SUCCESS;
}

