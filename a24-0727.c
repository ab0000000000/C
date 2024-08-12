#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main(){
	int i,n,c;
	double a,b;
	scanf("%d",&n);
	a=PI;
	b=PI;
	for(i=0;i<n;i++){
		a=a*10;
	}
	for(i=0;i<n-1;i++){
		b=b*10;
	}
	n=(int)a;
	c=(int)b;
	c=c*10;
	n=n-c;
	printf("%d",n);
	return 0;
} 
