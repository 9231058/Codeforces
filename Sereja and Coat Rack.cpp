#include <iostream>
#include <algorithm>

using namespace std;

const int MAX=1000*10;
int A[MAX];

int main(){
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int m;
	cin>>m;
	sort(A,A+n);
	int sum=0;
	if(m<=n){
		for(int i=0;i<m;i++)
			sum+=A[i];
		cout<<sum<<endl;
	}
	else{
		for(int i=0;i<n;i++)
			sum+=A[i];
		cout<<sum-(m-n)*d<<endl;
	}
}
