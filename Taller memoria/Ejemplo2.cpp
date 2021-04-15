#include <iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char** argv) {
	int N,K,May,*Dato,mem;
	cin>>N;
	for(K=0;K<N;K++){
		Dato= new int [N];
		
	}
	for(K=0;K<N;K++){
		cin>>Dato[K];	
	}
	May=Dato[1];
	for(K=2;K<N;K++){
		if(Dato[K]>May){
			May=Dato[K];
		}
	}
	cout<<May<<endl;
	mem=sizeof(N)+sizeof(K)+sizeof(May)+sizeof(Dato);
	cout<<mem;
	return 0;
}
