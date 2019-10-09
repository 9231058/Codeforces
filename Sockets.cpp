#include <iostream>
#include <algorithm>

using namespace std;

const int MAX=100;
int A[MAX];

bool func(int i,int j){
	return i>j;
}

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	if(m<=k){
		cout<<0<<endl;
		return 0;
	}
	sort(A,A+n,func);
	int getPower=k;
	int getUse=0;
	for(int i=0;i<n;i++){
		if(A[i]!=1){
			getPower+=A[i]-1;
			getUse++;
		}
		if(getPower>=m){
			cout<<getUse<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
}
