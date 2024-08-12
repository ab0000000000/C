#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch='A';
	int n=1,m;
	do{
		m=n;
		do{
			printf("%c",ch);
			ch++;
			m--;
		}while(m>0);
			printf("\n");
			n=n+2;
		
	}while(ch<'Z');
	
	
	return 0;
}
