#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,b,c,x1,x2,S,l;
	scanf("%d %d %d",&a,&b,&c);
	S=b*b-4*a*c;
	x1=(-b-sqrt(S))/(2*a);
	x2=(-b+sqrt(S))/(2*a);
	//printf("%d %d %d %d",x1 ,x2,c1,c2);
	if(x1<x2){
		l=x2;
		x2=x1;
		x1=l;
	}
	if(S<0){
		printf("No real root");
		return 0;
	}
	if(x1==x2){
		printf("Two same roots x=%d",x1);
	}else {
		printf("Two different roots x1=%d x2=%d",x1,x2);
	}
	
	
	return 0;
}
