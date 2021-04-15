#include <iostream>
#include "Colaprioridad.h"
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
using namespace std;

int main(int argc, char** argv) {
	Cola cola(15);
	
	cola.insertar(100);
	cola.imprimirArreglo();
	cola.insertar(90);
	cola.imprimirArreglo();
	cola.insertar(80);
	cola.imprimirArreglo();
	cola.insertar(110);
	cola.imprimirArreglo();
	cola.insertar(95);
	cola.imprimirArreglo();
	cola.insertar(120);
	cola.imprimirArreglo();
	cola.insertar(130);
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.insertar(108);
	cola.imprimirArreglo();
	cola.insertar(96);
	cola.imprimirArreglo();
	cola.insertar(99);
	cola.imprimirArreglo();
	cola.insertar(114);
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	cola.atender();
	cola.imprimirArreglo();
	
	return 0;
}
