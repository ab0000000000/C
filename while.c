#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,fac=1;
	printf("請輸入一個整數:");
	scanf("%d",&n);
	int i=1;
	printf("%d!=",n);
	while(i<=n){
		if(i<n){
			printf("%d*",i);
		}
		if(i==n){
			printf("%d",i);
		}
		fac*=i;
		i++;
	}
	printf("=%d",fac);
	printf("\n\n");
	return 0;
}
