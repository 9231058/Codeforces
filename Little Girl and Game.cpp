#include <iostream>
#include <string>

using namespace std;

bool alpha[26];

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		alpha[s[i]-97]^=1;
	}
	int sum=0;
	for(int i=0;i<26;i++){
		sum+=alpha[i];
	}
	if(!sum||s.size()%2)
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;
}

