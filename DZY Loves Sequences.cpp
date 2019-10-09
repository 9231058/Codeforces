#include <iostream>

using namespace std;

const int MAX = 1000 * 1000 + 10;

int main(int argc,char* argv[]){
	int n;
	int A[MAX];
	int seq[MAX];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		seq[i] = 1;
		if(i > 0 && A[i] > A[i - 1]){
			seq[i] = seq[i - 1] + 1;
		}
	}
	int answer = 1;
	for(int i = 0; i < n; i++){
		answer = max(answer, min(seq[i] + 1, n));
		if(i - seq[i] - 1 >= 0 && A[i - seq[i] + 1] - A[i - seq[i] - 1] > 1){
			answer = max(answer, seq[i] + seq[i - seq[i] -1] + 1);
		}
		if(i - (seq[i] - 1) - 1 >= 0 && A[i - (seq[i] - 1) + 1] - A[i - (seq[i] - 1) - 1] > 1){
			answer = max(answer, seq[i] + seq[i - (seq[i] - 1) - 1]);
		}
	}
	cout << answer << endl;
}
