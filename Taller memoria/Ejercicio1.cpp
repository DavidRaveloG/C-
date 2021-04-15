#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	int N, i,j,*a;
	cin>>N;
	for(int i=0; i<N;i++){
		a=new int[N];
		for(j=0;j<N;j++){
			a[j]=j*i;
			cout<< a[j]<<endl;
		}
	
		delete[]a;
	}
	cout<<sizeof(N)+sizeof(i)+sizeof(j)+sizeof(a);
	return 0;
}
