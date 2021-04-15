#ifndef Liblsita_H
#define Lib_lista_H
#include <iostream>

using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/

template <class T>
struct nodo {T info;
             nodo<T> * sig;};
template <class T>
class lista{
			nodo <T> *cab;
			int tam;	
	public: lista(){
				cab=NULL; 
				tam=0;
			}
			void imprimir();
			bool lista_vacia();
			int tamano_lista();	
			void insertar_pos(T info, int pos);
			void insertar_final(T inf);
			void insertar_inicio(T inf);
			
			bool eliminar(int pos);
			T obtenerDato (int pos);			
};
template <class T>
bool lista<T>::lista_vacia(){
	if(cab==NULL)
    	return true;
 	else
 		return false;
}

template <class T>
void lista <T>::insertar_pos(T inf, int pos){
	int x;
 	if (pos>tam)
		insertar_final(inf);
 	else 
	 if (pos == 0)
 			insertar_inicio(inf);
 		else{
		 	nodo <T> *nuevo, *Aux;
 	     	nuevo = new nodo <T>;
 	     	nuevo->info = inf;
 	     	Aux=cab;
 	    	 x=1;
 	    	while(x<pos-1 && Aux!= NULL){
		 		Aux=Aux->sig;
 	      		x++;
		  }
		nuevo->sig = Aux->sig;
		Aux->sig= nuevo;
		tam++; 
	 }	
}
template <class T>
int lista <T>::tamano_lista(){
	return tam;
}

template <class T>
void lista<T>::insertar_final(T infN){ 
	nodo <T> *n;
 	n = new nodo <T>;
  	n->info= infN;
  	n->sig = NULL;
  	if(tam == 0){
	  cab = n;}
  	else{
	  nodo <T> *aux;
      aux = cab;
    while(aux->sig != NULL){
	 	aux = aux->sig;}
     	aux->sig = n;
     	aux->info=n->info;
    }
  	tam++;
}

template <class T>
void lista<T>::insertar_inicio(T infN){ 
	nodo <T> *n;
  	n = new nodo <T>;
 	n->info= infN;
  	n->sig = cab;
  	cab = n;
 	tam++;
}
template <class T>
T lista<T>::obtenerDato(int pos){
	nodo <T> *aux;
	aux = cab;
	int x = 1;
	while(x<pos && aux != NULL){
		aux = aux->sig;
		x++;
		
	}
	return aux->info;
	
}

template <class T>
bool lista<T>::eliminar(int pos){ 
	if(tam >= pos){ 
		nodo <T> *temp;
       	temp = cab;
       if(pos == 1){
	   		cab = temp->sig;
          	delete temp;
        }
       else{
	   		for(int i=1;i<pos-1;i++){
			   temp = temp->sig;
			   }          
         	nodo <T> *aux;
          	aux = temp->sig;
          	temp->sig = aux->sig;
          	delete aux;
         }
        tam--;
        return true;          
     }
 	else
     	return false;
}	
template <class T>
void lista<T>:: imprimir (){
	if(lista_vacia()){
		cout<<" la lista no tiene informacion"<<endl;
	}
	else{
		cout<<"La informacion de la lista es : "<<endl;
		nodo<T> * aux;
		aux = cab;
		int pos = 1;
		while (aux != NULL && pos < tam){
			cout<<" info "<<pos<<": "<<aux->info<<endl;
			aux = aux ->sig;
			pos++;
		}
	}
}

#endif
