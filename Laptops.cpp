#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(x != y){
			cout << "Happy Alex" << endl;
			return 0;
		}
	}
	cout << "Poor Alex" << endl;

}
