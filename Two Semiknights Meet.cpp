#include <iostream>
#include <queue>

using namespace std;

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		bool chess[8][8];
		bool see[8][8];
		int D[8][8]={{0}};
		int C[8][8]={{0}};
		int startx,starty;
		int endx,endy;
		bool flag=false;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				see[i][j]=false;
				char ch;
				cin>>ch;
				switch(ch){
					case 'K':
						if(flag){
							endx=i;
							endy=j;
						}
						else{
							startx=i;
							starty=j;
							flag=true;
						}
					case '.':
						chess[i][j]=true;
					case '#':	
						chess[i][j]=false;
				}
			}
		}
		queue <int> Qx;
		queue <int> Qy;
		D[startx][starty]=0;
		C[startx][starty]=0;
		Qx.push(startx);
		Qy.push(starty);
		while(!Qx.empty()){
			int X=Qx.front();
			int Y=Qy.front();
			if(X<6&&Y<6&&C[X+2][Y+2]==0){
				C[X+2][Y+2]=1;
				D[X+2][Y+2]=D[X][Y]+1;
				see[X+2][Y+2]=true;
				Qx.push(X+2);
				Qy.push(Y+2);
			}
			if(X<6&&Y>1&&C[X+2][Y-2]==0){
				C[X+2][Y-2]=1;
				D[X+2][Y-2]=D[X][Y]+1;
				see[X+2][Y-2]=true;
				Qx.push(X+2);
				Qy.push(Y-2);
			}
			if(X>1&&Y<6&&C[X-2][Y+2]==0){
				C[X-2][Y+2]=1;
				D[X-2][Y+2]=D[X][Y]+1;
				see[X-2][Y+2]=true;
				Qx.push(X-2);
				Qy.push(Y+2);
			}
			if(X>1&&Y>1&&C[X-2][Y-2]==0){
				C[X-2][Y-2]=1;
				D[X-2][Y-2]=D[X][Y]+1;
				see[X-2][Y-2]=true;
				Qx.push(X-2);
				Qy.push(Y-2);
			}
			Qx.pop();
			Qy.pop();
			C[X][Y]=2;
		}
		if(see[endx][endy])
			if(D[endx][endy]%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
