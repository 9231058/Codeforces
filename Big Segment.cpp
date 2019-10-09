#include <iostream>

using namespace std;

struct segment{
	int num;
	int i;
	int r;
};

const int MAX1=1000*1000*1000+10;
const int MAX2=1000*100+10;
segment A[MAX2];

int main(){
	int n;
	cin>>n;
	int Max_r=0;
	int Min_i=MAX1;
	for(int i=0;i<n;i++){
		int start,end;
		cin>>start>>end;
		A[i].num=i+1;
		A[i].i=start;
		A[i].r=end;
		if(Max_r<=end)
			Max_r=end;
		if(Min_i>=start)
			Min_i=start;
	}
	for(int i=0;i<n;i++){
		if(A[i].i==Min_i&&A[i].r==Max_r){
			cout<<A[i].num<<endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
}	
