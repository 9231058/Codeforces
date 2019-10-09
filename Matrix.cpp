#include <stdio.h>
#include <iostream>

using namespace std;

const int MAX1=4000*10;
const int MAX2=1000*1000*10;
long long A[MAX1];
long long D[MAX1];
long long B[MAX2];

int main(){
	int k;
	scanf("%d",&k);
	getchar();
	int n=0;
	char c=getchar();
	while(c!='\n'){
		A[n]=(int)(c-'0');
		n++;
		c=getchar();
	}
	for(int i=0;i<n;i++){
		if(i==0)
			D[i]=A[i];
		else
			D[i]=A[i]+D[i-1];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i>0)
				B[D[j]-D[i-1]]++;
			else
				B[D[j]]++;
		}
	}
	long long num=0;
	if(k!=0)
		for(int i=1;i<=9*n;i++)
			if((k%i==0)&&(k/i<=9*n))
				num+=B[i]*B[k/i];
			else;
	else
		num=B[0]*(n*(n+1)-B[0]);
	cout<<num<<endl;
}
