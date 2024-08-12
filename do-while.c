#include<stdio.h>
#include<stdlib.h>
int main(){
	int count=0,num,sum=0;
	char ans;
	do{
		count++;
		printf("輸入第%d個整數",count);
		scanf("%d",&num);
		sum+=num;
		printf("是否繼續Y/N?");
		ans=getche();
		printf("\n\n");
	}while(ans=='y'||ans=='Y');
	printf("共輸入%d個整數，總合為%d\n\n",count,sum);
	return 0; 
}
