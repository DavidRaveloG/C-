#include <iostream>
#include "lib.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,*entero; // con valores enteros
 	entero= CrearArreglo(5);
 	for(i=0;i<5;i++){
 		entero[i]=i*5;
 		cout<<entero[i]<<endl;
	}
	
	return 0;
}
