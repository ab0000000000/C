#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i,n;
	scanf("%d",&i);
	int a[4][i];
	int s,d;
	for(n=0;n<i;n++){
		scanf("%d %d %d %d",&a[0][n],&a[1][n],&a[2][n],&a[3][n]);
		}
	for(n=0;n<i;n++){
		if(a[1][n]-a[0][n]==a[3][n]-a[2][n]){
			d=a[3][n]-a[2][n];
			s=a[3][n]+d;
			printf("%d %d %d %d %d\n",a[0][n],a[1][n],a[2][n],a[3][n],s);
		}else if(a[1][n]/a[0][n]==a[3][n]/a[2][n]){
			d=a[1][n]/a[0][n];
			s=a[3][n]*d;
			printf("%d %d %d %d %d\n",a[0][n],a[1][n],a[2][n],a[3][n],s);
		}else if(sqrt(a[0][n])+1==sqrt(a[1][n])&&sqrt(a[2][n])+1==sqrt(a[3][n])){
			d=sqrt(a[3][n])+1;
			s=d*d;
			printf("%d %d %d %d %d\n",a[0][n],a[1][n],a[2][n],a[3][n],s);
		}
	
	}
	return 0;
}
