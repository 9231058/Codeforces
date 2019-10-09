#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000 * 1000;

int main(int argc,char* argv[]){
	int n;
	int A[MAX];
	int B[MAX];
	int segment_begin = 0;
	int segment_end = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		B[i] = A[i];
	}
	sort(B, B + n);
	for(int i = 0; i < n; i++){
		if(A[i] != B[i]){
			segment_end = i + 1;
			if(segment_begin == 0){
				segment_begin = i + 1;
			}
		}
	}
	if(segment_begin == 0 && segment_end == 0){
		segment_begin = 1;
		segment_end = 1;
	}
	for(int i = segment_begin, j = segment_end; i <= segment_end; i++, j--){
		if(A[i - 1] != B[j - 1]){
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	cout << segment_begin << " " << segment_end << endl;
}
