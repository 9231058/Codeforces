#include <iostream>

using namespace std;

int main(int argc,char* argv[]){
	long long n, m, k;
	cin >> n >> m >> k;
	if((n - 1) + (m - 1) < k){
		cout << "-1" << endl;
		return 0;
	}
	long long maximal = 0;
	if((k + 1) <= n || (k + 1) <= m){
		maximal = max((n / (k + 1)) * m, n * (m / (k + 1)));
	}else{
		int diff = k + 1 - max(n, m);
		maximal = max((n / (k - diff + 1)) * (m / (diff + 1)), (n / (diff + 1)) * (m / (k - diff + 1)));
	}
	cout << maximal << endl;
}
