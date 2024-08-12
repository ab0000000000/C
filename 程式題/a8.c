#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i==0){
			int a=0;
			while(n%i==0){
				n=n/i;
				a++;
			}
			if(a==1){
				printf("%d",i);
			}else{
				printf("%d^%d",i,a);
			}
			if(n!=1){
				printf(" * ");
			}
		}
	}
	return 0;
}
