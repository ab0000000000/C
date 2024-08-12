#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int c(char s[11]){
	int a=0;
	int i=0;
	while(s[i]!='\n'&&s[i]!='\0'){
		
		switch(s[i]){
			case'I':{
				if(s[i+1]=='V'){
					a=a+4;
					i=i+2;
				}else if(s[i+1]=='X'){
					a=a+9;
					i=i+2;
				}else{
					a=a+1;
					i++;
				}
				break;
			}
			case'V':{
				a=a+5;
				i++;
				break;
			}
			case'X':{
				if(s[i+1]=='L'){
					a=a+40;
					i=i+2;
				}else if(s[i+1]=='C'){
					a=a+90;
					i=i+2;
				}else{
					a=a+10;
					i++;
				}
				break;
			}
			case'L':{
				a=a+50;
				i++;
				break;
			}
			case'C':{
				if(s[i+1]=='D'){
					a=a+400;
					i=i+2;
				}else if(s[i+1]=='M'){
					a=a+900;
					i=i+2;
				}else{
					a=a+100;
					i++;
				}
				break;
			}
			case'D':{
				a=a+500;
				i++;
				break;
			}
			case'M':{
				a=a+1000;
				i++;
				break;
			}
		} 
 	}
	return a;
}
void p(int a){
	int i=0,j=0;
	char s1[15]={},s2[11]={};
	while(a>=1000){
		s1[i]='M';
		a=a-1000;
		i++;
	}
	while(a>=500){
		s1[i]='D';
		a=a-500;
		i++;
		
	}
	while(a>=100){
		s1[i]='C';
		a=a-100;
		i++;
		
	}
	while(a>=50){
		s1[i]='L';
		a=a-50;
		i++;
		
	}
	while(a>=10){
		s1[i]='X';
		a=a-10;
		i++;
		
	}
	while(a>=5){
		s1[i]='V';
		a=a-5;
		i++;
		
	}
	while(a>=1){
		s1[i]='I';
		a=a-1;
		i++;
		
	}
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]==s1[i+1]==s1[i+2]==s1[i+3]){
			  switch(s1[i]){
			  	case'C':{
				  	if(s1[i-1]=='D'){
				  		s2[j-1]='C';
				  		s2[j]='M';
					  }else{
					  	s2[j]='C';
					  	s2[j+1]='D';
						j++;
					  }
					break;
				  }
				  case'X':{
				  	if(s1[i-1]=='L'){
				  		s2[j-1]='X';
				  		s2[j]='C';
					  }else{
					  	s2[j]='X';
					  	s2[j+1]='L';
					  	j++;
					  }
					break;
				  }
				  
				  case'I':{
			  		if(s1[i-1]=='V'){
			  			s2[j-1]=='I';
			  			s2[j]=='X';
					  }else{
					  	s2[j]='I';
					  	s2[j+1]='V';
					  	j++;
					  }
					break;
				  }
			  }
			  i=i+3;
		}else{
			s2[j]=s1[i];
			j++;
		}
		
	}
	printf("%s \n",s2);
}
int main(){
	while(1){
		char n[11];
		char s1[11],s2[11];
		scanf("%s",n);
		if(n[0]=='#'){
			break;
		}else{
			strcpy(s1,n);
		scanf("%s",s2);
		int i1,i2;
		 i1=c(s1);i2=c(s2);
		if(i1==i2){
			printf("ZERO \n");
		}else{
			int a1=abs(i1-i2);
			p(a1);
		}
		}
	}
	return 0;
}
