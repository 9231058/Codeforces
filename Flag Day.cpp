#include <iostream>

using namespace std;

const int MAX=1000*100+10;
int C[MAX];
int D[MAX][3];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>D[i][0]>>D[i][1]>>D[i][2];
		C[D[i][0]]=C[D[i][1]]=C[D[i][2]]=0;
	}
	for(int i=0;i<m;i++){
		bool R=false,G=false,B=false;
		if(C[D[i][0]]){
			if(C[D[i][0]]==1)
				R=true;
			else if(C[D[i][0]]==2) 
				G=true;
			else 
				B=true;
		}
		if(C[D[i][1]]){
			if(C[D[i][1]]==1) 
				R=true;
			else if(C[D[i][1]]==2) 
				G=true;
			else 
				B=true;
		}
		if(C[D[i][2]]){
			if(C[D[i][2]]==1) 
				R=true;
			else if(C[D[i][2]]==2) 
				G=true;
			else 
				B=true;
		}
		if(!C[D[i][0]]){
			if(!R){
				C[D[i][0]]=1;
				R=true;
			}
			else if(!G){ 
				C[D[i][0]]=2, 
				G=true;
			}
			else{ 
				C[D[i][0]]=3; 
				B=true;
			}
		}
		if(!C[D[i][1]]){
			if(!R){
				C[D[i][1]]=1;
				R=true;
			}
			else if(!G){
				C[D[i][1]]=2;
				G=true;
			}
			else{ 
				C[D[i][1]]=3; 
				B=true;
			}
		}
		if(!C[D[i][2]]){
			if(!R){
				C[D[i][2]] = 1;
				R=true;
			}
			else if(!G){
				C[D[i][2]] = 2;
				G=true;
			}
			else{
				C[D[i][2]] = 3;
				B=true;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<C[i]<<" ";
	}
}
