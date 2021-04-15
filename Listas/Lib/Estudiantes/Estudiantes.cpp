#include <iostream>
#include "Estudiantes_lib.h"
using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
struct estudiante {
	string nombre, direccion, carrera;
	int edad;
};
int main(int argc, char** argv) {
	estudiante est;
	est.carrera="Ingenieria de sistemas";
	est.direccion="Calle 64 #56-89";
	est.edad= 19;
	est.nombre= " Juan lopez";
	nodo <estudiante> nuevo;
	nuevo.clave= 20191020061;
	nuevo.info = est;
	lista <estudiante> list;
	
	return 0;
	
	}
