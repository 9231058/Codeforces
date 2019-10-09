#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[]){
	string s1, s2;
	cin >> s1 >> s2;
	if(s1 == s2){
		cout << "array" << endl;
		return 0;
	}
	int index_s1 = 0;
	int index_s2 = 0;
	for(index_s1 = 0; index_s1 < s1.size(); index_s1++){
		if(s1[index_s1] == s2[index_s2]){
			index_s2++;
		}
	}
	if(index_s2 == s2.size()){
		cout << "automaton" << endl;
		return 0;
	}
	if(s1.size() < s2.size()){
		cout << "need tree" << endl;
		return 0;
	}
	for(int i = 0; i < s2.size(); i++){
		if(count(s1.begin(), s1.end(), s2[i]) < count(s2.begin(), s2.end(), s2[i])){
			cout << "need tree" << endl;
			return 0;
		}
	}
	if(s1.size() == s2.size()){
		cout << "array" << endl;
	}else{
		cout << "both" << endl;
	}
}
