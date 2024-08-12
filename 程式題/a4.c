#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		if(x%4==0){
			printf("¶|¦~\n");
		}else{
			printf("¥­¦~\n");
		}
	}
	return 0;
}
