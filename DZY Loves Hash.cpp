#include <iostream>

using namespace std;

const int MAX = 1000 + 10;

bool buckets[MAX];

int main(int argc,char* argv[]){
	int n, p;
	cin >> p >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(!buckets[temp % p]){
			buckets[temp % p] = true;
		}else{
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
