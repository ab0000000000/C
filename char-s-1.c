#include<stdio.h>
#include<stdlib.h>

int main(){
	char c1[30],c2[30];
	printf("請輸入第一個字串:");
	gets(c1);
	printf("請輸入第2個字串:");
	scanf("%s",c2);
	printf("第一個字串是:%s\n",c1);
	printf("第二個字串是:");
	puts(c2);
	char c3='a',c4='A',c5;
	c5='b';
	printf("字元1=%c\n字元2=%c\n",c3,c3+1);
	printf("字元3=%c\n字元4=%c\n字元5=%c",'A'+1,c4,c5+26);
	return 0;
} 
