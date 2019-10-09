#include <iostream>

using namespace std;

int main(){
	int n;
	int m;
	cin>>n>>m;
	bool flag=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			bool temp;
			cin>>temp;
			if(temp&&(i==1||j==1||i==n||j==m))
				flag=true;
		}
	}
	if(flag)
		cout<<"2"<<endl;
	else
		cout<<"4"<<endl;
}
