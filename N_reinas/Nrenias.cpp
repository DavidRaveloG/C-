#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/
int sol = 0;
/* Método de alta presición para la medición de operaciones*/
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b){
  	LARGE_INTEGER freq;
  	QueryPerformanceFrequency(&freq);
  	return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}
bool seguro(vector<vector<int> > & tab, int N, int lin, int col)
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		if(tab[lin][i] == 1)
			return false;
	}


	for(i = 0; i < N; i++)
	{
		if(tab[i][col] == 1)
			return false;
	}
	for(i = lin, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if(tab[i][j] == 1)
			return false;
	}
	for(i = lin, j = col; i < N && j < N; i++, j++)
	{
		if(tab[i][j] == 1)
			return false;
	}

	for(i = lin, j = col; i >= 0 && j < N; i--, j++)
	{
		if(tab[i][j] == 1)
			return false;
	}
	for(i = lin, j = col; i < N && j >= 0; i++, j--)
	{
		if(tab[i][j] == 1)
			return false;
	}

	return true;
}
void executar(vector<vector<int> > & tab, int N, int col)
{
	if(col == N)
	{
		sol++;
		return;
	}

	for(int i = 0; i < N; i++)
	{
		if(seguro(tab, N, i, col))
		{	
			tab[i][col] = 1;
			executar(tab, N, col + 1);
			tab[i][col] = 0;
		}
	}
}

int main(int argc, char *argv[])
{
	int N = 1;
		ofstream archivo;
	archivo.open("N2.txt");  
	LARGE_INTEGER t_ini, t_fin;
	double secs;
while(true){
	sol=0;
	vector<vector<int> > tab;

	for(int i = 0; i < N; i++)
	{
		vector<int> linha(N);
		tab.push_back(linha);
	}
	cout<<N<<" reinas"<<endl;
	QueryPerformanceCounter(&t_ini);
	executar(tab, N, 0);
	QueryPerformanceCounter(&t_fin);
	secs = performancecounter_diff(&t_fin, &t_ini);
	cout << "Encontradas " << sol << " soluciones"<<endl; 
	printf("%.16g seconds\n", secs );
	archivo<<"N: "<<N<<endl;
	archivo<<"tiempo: "<<secs<<endl;
	N++;
}



	return 0;
}
