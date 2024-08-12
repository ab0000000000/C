#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	for(n=1;n<=50;n++){
		if(n%2==0||n%3==0||n%5==0){
			continue;
		}
		printf("%3d",n);
	}
	return 0;
	
} 
