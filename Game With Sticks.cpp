#include <iostream>

using namespace std;

int main(int argc,char* argv[]){
	int n,m;
	cin >> n >> m;
	int answer = min(n, m);
	if(answer % 2 == 0){
		cout << "Malvika" << endl;
	}else{
		cout << "Akshat" << endl;
	}
}
