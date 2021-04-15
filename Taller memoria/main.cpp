#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N,May,Dato,mem,i;
	cin>>N;
	cin>>May;
	for( i=2;i<=N;i++){
		cin>>Dato;
		if(Dato>May) 
		May=Dato;	
	}
	cout<<May;
	mem=sizeof(N)+sizeof(May)+sizeof(Dato)+sizeof(i);
	cout<<mem;
	return 0;
}
