#include <iostream>

using namespace std;

const int MAX=1000+10;
int P[MAX];
int C[MAX][2];

int main(){
	long int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
        	cin >> P[i];
    	for (int i=0;i<n-1;i++){
        	C[i][0]=min(P[i],P[i+1]);
        	C[i][1]=max(P[i],P[i+1]);
   	}
	for(int i=0;i<n-1;i++){
           	for(int j=i-1;j<n-1;j++){
			if(C[i][0]>C[j][0]&&C[i][0]<C[j][1]&&C[i][1]>C[j][1]){
                		cout << "yes";
                		return 0;
            		}
            		else if(C[i][0]<C[j][0]&&C[j][0]<C[i][1]&&C[j][1]>C[i][1]){
                 		cout << "yes";
                 		return 0;
                	}
		}
	}
	cout<<"no";
	return 0;
}
