#include<stdio.h>
#include<stdlib.h>
int main(){
	int count=0;
	char pw[8]="5487548",pwkeyin[8];
	int ispass;
	do{
		count++;
		printf("\n�п�J�K�X:");
		scanf("%s",pwkeyin);
		if(strcmp(pwkeyin,pw)==0){
			printf("�K�X���T\n");
			ispass=1;
			break;
		}else{
			printf("��%d����\n",count); 
		}
	}while(count<3);
	if(ispass!=1){
		printf("��J�T�����~\n");
	}
	return 0;
}
