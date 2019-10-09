#include <iostream>

using namespace std;

const int MAX = 1000 * 1000;

int main(int argc,char* argv[]){
	int n;
	int A[MAX];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int decreasing = 0;
	for(int i = 0; i < n; i++){
		if(A[i] > A[(i + 1) % n]){
			if(!decreasing){
				decreasing = i + 1;
			}else{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	if(!decreasing){
		cout << 0 << endl;
	}else{
		cout << n - decreasing << endl;
	}
}
