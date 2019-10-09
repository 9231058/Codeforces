#include <iostream>

using namespace std;

int main(int argc,char* argv[]){
	int n;
	cin >> n;
	int index = 1;
	for(; index < n; index += 2){
		for(int i = 0; i < (n - index) / 2; i++){
			cout << "*";
		}
		for(int i = 0; i < index; i++){
			cout << "D";
		}
		for(int i = 0; i < (n - index) / 2; i++){
			cout << "*";
		}
		cout << endl;
	}
	for(; index >= 1; index -= 2){
		for(int i = 0; i < (n - index) / 2; i++){
			cout << "*";
		}
		for(int i = 0; i < index; i++){
			cout << "D";
		}
		for(int i = 0; i < (n - index) / 2; i++){
			cout << "*";
		}
		cout << endl;
	}
}
