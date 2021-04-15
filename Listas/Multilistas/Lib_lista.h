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
struct nodo {
			T info;
             nodo<T> * sig;};
template <class T>
class lista{
			nodo <T> *cab;
			int tam;	
	public: lista(){
				cab=NULL; 
				tam=0;
			}
			bool lista_vacia();
			int tamano_lista();	
			void insertar(T info);
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
void lista <T>::insertar(T inf){
  nodo  <T> *crear;
   crear = new nodo <T>;
    crear -> info = inf;
    crear-> sig = NULL;
    if(lista_vacia()){
        cab = crear;
    } else {
        nodo <T> *aux;
        aux = cab;
        while(aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = crear;
    }
    tam++;
}
template <class T>
int lista <T>::tamano_lista(){
	return tam;
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
#endif
