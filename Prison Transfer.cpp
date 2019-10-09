#include <iostream>
#include <memory.h>

using namespace std;

const int MAX=2*1000*1000;
int main(int argc,char** argv){
	int n,t,c;
	int serv[MAX];
	memset(serv,0,MAX);
	cin>>n>>t>>c;
	int index=0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp>t){
			index++;
		}else{
			serv[index]++;
		}
	}
	index++;
	int answer=0;
	for(int i=0;i<index;i++){
		if(serv[i]>=c){
			answer+=serv[i]-c+1;
		}
	}
	cout<<answer<<endl;
}
