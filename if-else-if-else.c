#include<stdio.h>
#include<stdlib.h>
int main(){
	int score;
	printf("�п�J��ߪ����N����:");
	scanf("%d",&score);
	if(score>=90&&score<=100){
		printf("\n\'�u");
	}else if(score>=80&&score<90){
		printf("\'��");
	}else if(score>=70&&score<80){
		printf("\'�A");
	}else if(score>=60&&score<70){
		printf("\'��");
	}else if(score>=0&&score<60){
		printf("\'�B");
	}else{
		printf("��J���~");
	}
	
	return 0;
}
