#include<stdio.h>
int main(){
   int M,D,S;
   scanf("%d %d",&M,&D);
   S=(M*2+D)%3;
   switch(S){
   	case 0:
   		printf("´¶³q");
   		break;
   	case 1:
   		printf("¦N");
   		break;
   	case 2:
   		printf("¤j¦N");
   		break;
   	
   }
   return 0;
}
