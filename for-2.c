#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	double y;
	
	printf("x \t y \t x*y \n");
	printf("=====================================\n");
	for(x=5,y=-1.0;x>-10,y<2.0;x-=2,y+=0.5){
		printf("%2d \t %4.1f \t %4.1f\n",x,y,x*y);
	}
	printf("\n");
	return 0;
}
