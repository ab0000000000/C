#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1=34,n2=100,n3=-67;
	int max;
	printf("三個整數分別為 %d,%d,%d\n",n1,n2,n3);
	if(n1>n2){
		if(n1>n3){
			max=n1;
		}else{
			max=n3;
		}
	}else{
		if(n2>n3){
			max=n2;
		}else{
			max=n3;
		}
	}
	printf("\n比較結果:最大數為%d\n\n",max);
	return 0;
}
