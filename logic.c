#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k;
	int x=8,y=3;
	i=(y==3)&&(x<3);//�]��x=8>3,&&(and)�ҥH==>0 
	j=(x+y==11)||(y>8);//�]��x+y=11,11=11||(or)�ҥH==>1
	k=!((x<=y)&&(x>y)||('A'>'c'));//!(not),^(xor)
	printf("i=%d\tj=%d\tk=%d\n\n",i,j,k);
	return 0;
}
