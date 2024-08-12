#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,j,p,h;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	h=0;
	for(i=0;i<n
	;i++){
		if(a[i]>a[i+1]){
			b[h]++;
		}else{
			h++;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				p=b[i];
				b[i]=b[j];
				b[j]=p;
			}
		}
	}
	printf("%d\n",b[n-1]);
	return 0;
} 
