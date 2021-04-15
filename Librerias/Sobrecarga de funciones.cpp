#include <iostream>
#include "lib1.h";
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int * entero, i;
	int resultadoInt = cuadrado( 7 );         // llamada a la versión int
    double resultadoDouble = cuadrado( 7.5 ); // llamada a la versión double

    cout << "\nEl cuadrado del int 7 es " << resultadoInt<< "\nEl cuadrado del double 7.5 es " << resultadoDouble << endl;
	
	return 0;
}
