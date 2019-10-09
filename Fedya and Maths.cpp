#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
	string number;
	cin >> number;
	int mod;
	if(number.size() >= 2){
		mod = static_cast<int>(number[number.size() - 1]) + 10 * static_cast<int>(number[number.size() - 2]);
	}else{
		mod = static_cast<int>(number[0]);
	}
	if(mod % 4 == 0){
		cout << 4 << endl;
	}else{
		cout << 0 << endl;
	}
}
