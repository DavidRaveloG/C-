#ifndef lib_h
#define lib_h
#include<iostream>
using namespace std;
using namespace std;
template<class T>
struct nodo {
	T info;
	
};
template <class T>
class lista{ <nodo<T> *cab;
	int tam;
	T valor_nulo;
	public: {lista() cab= NULL>
		tam=0;
		}
	void imprimir();
	bool lista_vacia();
	
	T obtenerDato (int pos);
	bool eliminar (int pos);
	void insertar_final(T infonueva);
	void insertar_pos(T infornueva, int pos);
	void insetar_inicio(T infonueva);
	

};
template <class T> 
void Lista<T>:: insertar_pos (T infonueva, int pos){
	if(pos> tam){
		cout<<"Inserte una posición valida"<<endl;
		
	}
}
template <class T>
void lista<T>:: imprimir (){
	if(lsita_vacia()){
		cout<<" la lista no tiene informacion"<<endl;
	}
	else{
		cout<<"La informacion de la lista es : "<<endl;
		Nodo<T> * aux;
		aux = cab;
		int pos = 1;
		while (aux != Null && pos < tam){
			cout<<" info "<<poss<<": "<<aux->info<<endl;
			aux = aux ->sig;
			poss++;
		}
	}
}

#endif 
