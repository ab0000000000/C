#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum=0;
	printf("\n");
	for(n=1;n<=10;n++){
		sum+=n;
		printf("%d",n);
		if(n<10){
			printf("+");
		}
	}
	printf("=%d\n\n",sum);
	return 0;
}
