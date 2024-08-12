#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n=5,p;
	int b[5]={2,0,1};
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				p=b[i];
				b[i]=b[j];
				b[j]=p;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d  %d\n",i,b[i]);
	}
}
	
