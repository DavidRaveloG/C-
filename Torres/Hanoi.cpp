#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
/* Método de alta presición para la medición de operaciones*/
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b){
  	LARGE_INTEGER freq;
  	QueryPerformanceFrequency(&freq);
  	return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}
void moverDiscos (int n, int torre1, int torre2, int torre3){
   
   
}

int main(void) {
	
	int cont=0, N=1, i;
	ofstream archivo;
	archivo.open("N.txt");  
	LARGE_INTEGER t_ini, t_fin;
	double secs;
	
	while(true){	
		int **M=new int*[N];
		for(int i=0; i<N;i++){
			M[i]=new int[N];
		}
		cout<<"cantidad de discos: "<<N<<endl;
		QueryPerformanceCounter(&t_ini);
		moverDiscos(N,1,2,3);
		QueryPerformanceCounter(&t_fin);
		secs = performancecounter_diff(&t_fin, &t_ini);
		printf("%.16g milliseconds\n", secs * 1000.0);
		archivo<<"N: "<<N<<endl;
		archivo<<"tiempo: "<<secs*1000.0<<endl;
		N++;
	}
	 return 0;
}
