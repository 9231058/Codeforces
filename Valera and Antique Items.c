#include <stdio.h>

int main(int argc,char* argv[]){
	int n,v;
	int min[100];
	scanf("%d %d",&n,&v);
	int index;
	int number=0;
	for(index=1;index<=n;index++){
		int k;
		scanf("%d",&k);
		int i=0;
		min[index]=1000*1000;
		for(i=0;i<k;i++){
			int s;
			scanf("%d",&s);
			if(min[index]>s){
				min[index]=s;
			}
		}
		if(min[index]<v){
			number++;
		}
	}
	printf("%d\n",number);
	for(index=1;index<=n;index++){
		if(min[index]<v){
			printf("%d ",index);
		}
	}
	return 0;
}
