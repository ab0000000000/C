#include<stdio.h>
#include<stdlib.h>
int main(){
	int age;
	int price;
	scanf("%d",&age);
	if(age<10||age>=65){
		 price=150;
	}else {
		 price=300;
	}
	printf("%d",price);
	return 0;
}
