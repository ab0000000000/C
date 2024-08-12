#include<stdio.h>
#include<stdlib.h>
int main(){
	int score;
	printf("請輸入研習的成就分數:");
	scanf("%d",&score);
	if(score>=90&&score<=100){
		printf("\n\'優");
	}else if(score>=80&&score<90){
		printf("\'甲");
	}else if(score>=70&&score<80){
		printf("\'乙");
	}else if(score>=60&&score<70){
		printf("\'丙");
	}else if(score>=0&&score<60){
		printf("\'丁");
	}else{
		printf("輸入錯誤");
	}
	
	return 0;
}
