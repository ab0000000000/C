#include<stdio.h>
#include<stdlib.h>

int main(){
	char c1[30],c2[30];
	printf("�п�J�Ĥ@�Ӧr��:");
	gets(c1);
	printf("�п�J��2�Ӧr��:");
	scanf("%s",c2);
	printf("�Ĥ@�Ӧr��O:%s\n",c1);
	printf("�ĤG�Ӧr��O:");
	puts(c2);
	char c3='a',c4='A',c5;
	c5='b';
	printf("�r��1=%c\n�r��2=%c\n",c3,c3+1);
	printf("�r��3=%c\n�r��4=%c\n�r��5=%c",'A'+1,c4,c5+26);
	return 0;
} 
