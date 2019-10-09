#include <iostream>
#include <queue>

using namespace std;

const int MAX = 100*10;

int main(int argc,char* argv[]){
	queue<int> line;
	int n, m;
	int want[MAX];
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> want[i];
		line.push(i);
	}
	int out;
	while(line.size() != 0){
		int temp;
		temp = line.front();
		line.pop();
		want[temp] -= m;
		if(want[temp] <= 0){
			out = temp;
		}else{
			line.push(temp);
		}
	}
	cout << out + 1 << endl;
}
