#include <stdio.h>
#include <iostream>
#include <windows.h>
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
void margelist (int a[], int start1, int end1,int start2,int end2){
	int T=sizeof(a);
	int i,ind=1,finalStart=start1,finalEnd=end2,*b;
	for(i=0;i<end2;i++){
		b= new int [end2];
	}
	while(start1<=end1 && start2<=end2){
		if(a[start1]<a[start2]){
			b[ind]=a[start1];
			start1= start1+1;
		}
		else{
			b[ind]=a[start2];
			start2=start2+1;
		}
		ind=ind+1;
	}
	if(start1<=end1){
		for(i=start1;i<=end1;i++){
			b[ind]=a[i];
			ind=ind+1;
		}
	}
	else{
		for(i=start2;i<=end2;i++){
			b[ind]=a[i];
			ind=ind+1;
		}
	}
	ind=1;
	for(i=finalStart;i<=finalEnd;i++){
		a[i]=b[ind];
		ind=ind+1;
	}
}
void margesort (int a[],int first, int last){
	int mid;
	if(first<last){
		mid=(first+ last)/2;
		margesort(a,first,mid);
		margesort(a,mid+1,last);
		margelist(a,first,mid,mid+1,last);
	}
}





int main(void) {
	
	int cont=0, N, i,k=0,b=0, First,Last;
	  
	LARGE_INTEGER t_ini, t_fin;
	double secs;
	cin>>N;
	int a[N];
	for(i=N;i>0;i--){
		a[cont]=i;
		cont++;
	}
	First=0;
	Last=N-1;
	cout<< "Imprimiendo arreglo antes de ordenar"<< endl;
	for (i = 0; i < N ; i++) {
	    cout<< a[i] << ", ";
	}	
	cout<<endl;
	

	QueryPerformanceCounter(&t_ini);
	margesort(a,First,Last);
	QueryPerformanceCounter(&t_fin);
	secs = performancecounter_diff(&t_fin, &t_ini);
  	cout << "Imprimiendo arreglo despues de ordenar"<< endl;
	  for (i = 0; i < N; i++)
	    cout << a[i] << ", ";
	cout<<endl;
	printf("%.16g milliseconds\n", secs * 1000.0);

	 return 0;
}
