#include<stdio.h>
#include<stdlib.h>
int main(){
	int count=0;
	char pw[8]="5487548",pwkeyin[8];
	int ispass;
	do{
		count++;
		printf("\n請輸入密碼:");
		scanf("%s",pwkeyin);
		if(strcmp(pwkeyin,pw)==0){
			printf("密碼正確\n");
			ispass=1;
			break;
		}else{
			printf("第%d次錯\n",count); 
		}
	}while(count<3);
	if(ispass!=1){
		printf("輸入三次錯誤\n");
	}
	return 0;
}
