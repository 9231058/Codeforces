#include <iostream>
#include <cmath>

using namespace std;

int main(int argc,char* argv[]){
	int n, m;
	cin >> m >> n;
	long double sum = 0;
	for(int i = 0; i < m; i++){
		sum += pow((double) i / m, n);
	}
	cout << m - sum << endl;
}
