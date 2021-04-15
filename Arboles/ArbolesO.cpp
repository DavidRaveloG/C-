#ifndef Liblsita_H
#define Lib_lista_H
#include <iostream>
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ram�rez R�tiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
struct NODO{ 
		   int info;
           NODO *izq, *der;
		   };
class ARBOL{
	NODO *raiz;
	public:	ARBOL( ){
		raiz=NULL;
		}
	NODO *raiz_arbol( ){
		return raiz;
		}
	int ins_arbol (int);
	NODO *buscar_arbol (int, NODO *, NODO *);
	void borrar_nodo(NODO *, NODO *);
	NODO *buscar(int, NODO **, NODO *);
	int retira_arbol(int);
	void inorden(NODO *);
	void preorden(NODO *);
	void posorden(NODO *);
	void destruir (NODO *p);
	~ARBOL( );
	};
NODO *ARBOL::buscar_arbol(int n, NODO *p, NODO *q){
	if (p==NULL) return q;
	if (n < p->info){
		q=p;
		q=buscar_arbol(n,p->izq,q);
		return q;
	}
	else if (n > p->info) {
		q=p;
		q=buscar_arbol(n,p->der,q);
		return q;
	}
	    else return NULL;
	}
int ARBOL:: ins_arbol(int n){
	NODO *q;
	if (raiz == NULL){
		raiz= new NODO;
		raiz->info =n;
		raiz->izq=raiz->der=NULL;
		return 0;
	}
	q=buscar_arbol(n,raiz,NULL);
	if (q==NULL) return -1;
	NODO *nuevo;
	nuevo= new NODO;
	nuevo->info = n;
	nuevo->izq=nuevo->der=NULL;
	if (n<q->info) q->izq=nuevo;
	else  q->der=nuevo;
	return 0;
	}
void ARBOL::borrar_nodo (NODO *q, NODO *p){
	NODO  *r, *s,*t;
	if (p->izq==NULL) r=p->der;
	else if (p->der==NULL) r=p->izq; 
	else {
		s =p;
		r=p->der;
		t=r->izq;
		while(t!=NULL){
			s=r; r=t; t=t->izq;
		}
		if (p!=s){
			s->izq=r->der;
		    r->der=p->der; 
		}
		r->izq =p->izq;
	}
		if (q==NULL) raiz= r;
		else if (p==q->izq) q->izq =r;
		else q->der = r;
		delete p;
	}
#endif
