#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	printf("�п�JY��N:");
	scanf("%c",&c);
	switch(c){
		case'y':
		case'Y':
			printf("�P�N");
			break;
		case'n':
		case'N':
			printf("���P�N");
			break;	
		default:
			printf("��J���~");
			break;
	}
	return 0;
}
