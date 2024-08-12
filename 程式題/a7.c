#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[1000];
	int i;
	gets(a);
	for(i=0;i<strlen(a);i++){
		printf("%c",a[i]-7);
	}
	return 0;//-7
}
