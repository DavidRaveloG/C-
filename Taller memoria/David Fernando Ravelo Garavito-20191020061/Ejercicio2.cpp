#include <iostream>

#include <stdio.h>
using namespace std;
int main(int argc, char** argv) {
	int N,i,j,**a,mem;
	cin>>N;
	a=new int * [N];
	mem=sizeof(N)+sizeof(i)+sizeof(j)+sizeof(a);
	for(i=0;i<N;i++){
		a[i]= new int [N];
		for(j=0;j<N;j++){
			a[i][j]=j*i;
		}
	}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				cout<< a[i][j]<<" ";
				mem=mem+sizeof(a[i][j]);
			}
			mem=mem+sizeof(a[i]);
			cout<<endl;
			delete a[i];
		}
	cout<<mem;
	return 0;
}
