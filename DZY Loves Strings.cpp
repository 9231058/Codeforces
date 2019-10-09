#include <iostream>
#include <string>

using namespace std;

const int NUM_ALPHA = 26;

int main(int argc,char* argv[]){
	int k;
	string s;
	int scores[NUM_ALPHA];
	int score = 0;
	int max_score = -1;
	cin >> s;
	cin >> k;
	for(int i = 0; i < NUM_ALPHA; i++){
		cin >> scores[i];
		max_score = max(max_score, scores[i]);
	}
	for(int i = 0; i < s.size(); i++){
		score += scores[(int) s[i] - (int) 'a'] * (i + 1);
	}
	score += max_score * k * s.size() + max_score * ((k * (k + 1)) / 2);
	cout << score << endl;
}
