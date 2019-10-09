#include <iostream>
#include <cmath>

using namespace std;

int main(int argc,char* argv[]){
	int a1, a2, a3;
	int b1, b2, b3;
	int n;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	n -= ceil((float)(a1 + a2 + a3) / 5);
	n -= ceil((float)(b1 + b2 + b3) / 10);
	if(n >= 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
