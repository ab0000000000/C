#include<stdio.h>
#include<stdlib.h>
int main(){
	int count=0,num,sum=0;
	char ans;
	do{
		count++;
		printf("��J��%d�Ӿ��",count);
		scanf("%d",&num);
		sum+=num;
		printf("�O�_�~��Y/N?");
		ans=getche();
		printf("\n\n");
	}while(ans=='y'||ans=='Y');
	printf("�@��J%d�Ӿ�ơA�`�X��%d\n\n",count,sum);
	return 0; 
}
