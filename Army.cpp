#include <iostream>

using namespace std;

const int MAX=1000;
int D[MAX];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>D[i];
	}
	int a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=a;i<b;i++){
		sum+=D[i];
	}
	cout<<sum<<endl;
}
