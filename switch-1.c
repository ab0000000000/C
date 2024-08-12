#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	printf("請輸入Y或N:");
	scanf("%c",&c);
	switch(c){
		case'y':
		case'Y':
			printf("同意");
			break;
		case'n':
		case'N':
			printf("不同意");
			break;	
		default:
			printf("輸入錯誤");
			break;
	}
	return 0;
}
