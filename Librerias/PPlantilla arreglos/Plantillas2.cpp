#include <iostream>
#include "lib2.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int aContador = 5;    
	const int bContador = 7;    
 	const int cContador = 6;   
	int a[ aContador ] = { 1, 2, 3, 4, 5 };
 	double b[ bContador ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
 	char c[ cContador ] = "HOLA";  // 5a. posición para el carácter nulo

  	cout << "El arreglo a contiene:" << endl;
 	 imprimirArreglo( a, aContador );  

  	 cout << "El arreglo b contiene:" << endl;
 	 imprimirArreglo( b, bContador );  

  	 cout << "El arreglo c contiene:" << endl;
  	imprimirArreglo( c, cContador );  

	return 0;
}
