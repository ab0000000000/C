#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,max,fac=1;
	printf("輸入正整數max:");
	scanf("%d",&max);
	for(i=1;;i++){
		fac*=i;
		if(max<fac){
			break;
		}
	}
	printf("n=%d\n%d!=%d<=%d",i-1,i-1,fac/i,max);
	return 0;
}
