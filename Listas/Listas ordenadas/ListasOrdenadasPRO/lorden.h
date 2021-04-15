#ifndef LORDEN_H
#define LORDEN_H
#include <iostream>

using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/

template <class T>
struct nodo {
	T info;
    nodo<T> *sig;
	int id;	
};

template <class T>
class lista{
	nodo <T> *cab;
	int tam;
	
	public: lista(){
		cab=NULL; 
		tam=0;
	}
	
	void imprimir();
	void insertar();
	bool lista_vacia();
	int tamano_lista();		
	bool eliminar(int pos);
	T obtenerdatoPos(int pos);
	
	void insertarNodo(int id, T x);
	T obtenerdatoNodo(int id);
	bool eliminarNodo(int id);
			
};

template <class T>
bool lista<T>::lista_vacia(){
	if(cab==NULL || tam==0)
    	return true;
 	else
 		return false;
}

template <class T>
int lista<T>::tamano_lista(){
	return tam;
}

template <class T>
T lista<T>::obtenerdatoPos(int pos){
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
		nodo<T> *aux;
		aux = cab;
		int pos = 0;
		while (aux!= NULL && pos <= tam+1){
			cout<<"Estudiante #"<<pos+1<<": "<<endl;
			cout<<"Codigo: "<<aux->id<<endl;
			cout<<"Nombre: "<<aux->info.nombre<<endl;
            cout<<"Direccion: "<<aux->info.direccion<<endl;
            cout<<"Edad: "<<aux->info.edad<<endl;
            aux = aux->sig;
            pos++;
		} 
	}
}

// ORDENADAS

template <class T>
void lista<T>::insertarNodo(int id, T x){
	nodo<T> *data, *aux, *aux1;
	
	data = new nodo<T>;
		
	data->id = id;
	data->info = x;
	
	if(cab==NULL){
		data->sig = NULL;
		cab = data;
	}else{
		if(data->id < cab->id){
			data->sig = cab;
            cab = data;
		}else{
			aux = cab;
			aux1 = cab;
			while((aux1->sig!=NULL) && (aux1->id <= data->id)){
				aux = aux1;
				aux1 = aux->sig;
			}
			if(aux1->id <= data->id){
				aux1->sig = data;
			}else{
				data->sig = aux1;
				aux->sig = data;
			}
		}
	}
	tam++;
}


template <class T>
T lista<T>::obtenerdatoNodo(int id){
	nodo <T> *aux;
	aux = cab;
	int x = 1;
	
	while(x<tam && aux != NULL){
		aux = aux->sig;
		if(aux->id == id){
			return aux->info;
		}
		x++;
	}
}

template <class T>
bool lista<T>::eliminarNodo(int id){ 
	nodo <T> *aux;
	aux = cab;
	int x = 1;
	
	while(x<tam && aux != NULL){
		aux = aux->sig;
		if(aux->id == id){
			delete aux;
			tam--;
			return true;
		}
		x++;
	} 
	
	return false;
}

#endif
