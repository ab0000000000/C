#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	printf("  |  1  2  3  4  5  6  7  8  9\n");
	printf("--------------------------------\n");
	for(i=1;i<9;i++){
		printf(" %d |",i);
		int j=1;
		while(j<=9){
			printf(" %2d",j*i);
			j++;
		}
		printf("\n");
	}
	return 0;
}
