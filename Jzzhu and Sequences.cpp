#include <iostream>

using namespace std;

const long long MOD = 1000 * 1000 * 1000 + 7;

long long A[2][2] = {{1, 1}, {-1, 0}};
long long B[2][2] = {{1, 1}, {-1, 0}};

void Bpower(int n);

int main(int argc,char* argv[]){
	long long a, b;
	cin >> a >> b;
	long long n;
	cin >> n;
	long long answer;
	if(n == 1){
		answer = a % MOD;
	}else if(n == 2){
		answer = b % MOD;
	}else{
		Bpower(n - 2);
		b = (b * B[0][0]) % MOD + (a * B[1][0]) % MOD;
		answer = b % MOD;
	}
	if(answer >= 0){
		cout << answer << endl;
	}else{
		cout << answer + MOD << endl;
	}
}
void Bpower(int n){
	if(n == 1){
		return;
	}
	if(n % 2 == 1){
		Bpower(n - 1);
		long long temp[2][2];
		temp[0][0] = (A[0][0] * B[0][0] + A[0][1] * B[1][0]) % MOD;
		temp[0][1] = (A[0][0] * B[0][1] + A[0][1] * B[1][1]) % MOD;
		temp[1][0] = (A[1][0] * B[0][0] + A[1][1] * B[1][0]) % MOD;
		temp[1][1] = (A[1][0] * B[0][1] + A[1][1] * B[1][1]) % MOD;
		B[0][0] = temp[0][0];
		B[0][1] = temp[0][1];
		B[1][0] = temp[1][0];
		B[1][1] = temp[1][1];
	}else{
		Bpower(n / 2);
		long long temp[2][2];
		temp[0][0] = (B[0][0] * B[0][0] + B[0][1] * B[1][0]) % MOD;
		temp[0][1] = (B[0][0] * B[0][1] + B[0][1] * B[1][1]) % MOD;
		temp[1][0] = (B[1][0] * B[0][0] + B[1][1] * B[1][0]) % MOD;
		temp[1][1] = (B[1][0] * B[0][1] + B[1][1] * B[1][1]) % MOD;
		B[0][0] = temp[0][0];
		B[0][1] = temp[0][1];
		B[1][0] = temp[1][0];
		B[1][1] = temp[1][1];

	}
}
