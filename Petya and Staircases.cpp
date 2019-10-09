#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> V;

int main(){
	int n,m;
	cin>>n>>m;
	if(m==0){
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		V.push_back(temp);
	}
	sort(V.begin(),V.end());
	if(V[0]==1||V[V.size()-1]==n){
		cout<<"NO"<<endl;
		return 0;
	}
	if(V.size()<3){
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=2;i<V.size();i++){
		if(V[i-1]==V[i]-1&&V[i-2]==V[i]-2){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
