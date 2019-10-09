#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX=1000*1000;

int main(){
	int A[MAX];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	if(n==1){
		cout<<-1<<endl;
		return 0;
	}
	if(n==2){
		if(A[0]==A[1]){
			cout<<1<<endl;
			cout<<A[0]<<endl;
		}
		else if((A[0]+A[1])%2==0){
			cout<<3<<endl;
			cout<<2*A[0]-A[1]<<" "<<(A[0]+A[1])/2<<" "<<2*A[1]-A[0]<<endl;
		}
		else{
			cout<<2<<endl;
			cout<<2*A[0]-A[1]<<" "<<2*A[1]-A[0]<<endl;
		}
		return 0;
	}
	bool allEqual=true;
	for(int i=0;i<n-1;i++)
		if(A[i]!=A[i+1])
			allEqual=false;
	if(allEqual){
		cout<<1<<endl;
		cout<<A[0]<<endl;
		return 0;
	}
	vector <int> V;
	int number=0;
	if((-A[0]+A[n-1])%(n-1)==0){
		int d=(-A[0]+A[n-1])/(n-1);
		bool flag=false;
		for(int i=0;i<n-1;i++){
			if(A[i]+d!=A[i+1]){
				flag=true;
				break;
			}
		}
		if(!flag){
			number++;
			V.push_back(A[0]-d);
			number++;
			V.push_back(A[n-1]+d);
		}
	}
	if((-A[0]+A[n-1])%n==0){
		int d=(-A[0]+A[n-1])/n;
		int Tnumber=0;
		bool happen=false;
		for(int i=0;i<n-1;i++){
			if((A[i+1]-A[i]==2*d)&&happen){
				Tnumber=0;
				break;
			}
			if((A[i]+d!=A[i+1])&&(A[i+1]-A[i]!=2*d)){
				Tnumber=0;
				break;
			}
			if(A[i+1]-A[i]==2*d){
				V.push_back(A[i]+d);
				Tnumber++;
				happen=true;
			}
		}
		number+=Tnumber;
	}
	cout<<number<<endl;
	for(int i=0;i<number;i++){
		cout<<V[i]<<" ";
	}
	if(number!=0)
		cout<<endl;
}
