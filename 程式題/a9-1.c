#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str1[11],str2[11];
int p(char str[]){
	int a,i=0;
	while(str[i]!='\0'&&str[i]!='\n'){ //'\0�S���r�� 
		switch(str[i]){
			case'M':{
				a=a+1000;
				i++;
				break;
			}
			case'D':{
				if(str[i+1]=='M'){
					a=a+500;
					i=i+2;
				}else{
					a=a+500;
					i++;
				}
				break;
			}
			case'C':{
				if(str[i+1]=='D'){
					a=a+400;
					i=i+2;
				}else if(str[i+1]=='M'){
					a=a+900;
					i=i+2;
				}else{
					a=a+100;
					i++;
				}
				break;
			}
			case'L':{
				a=a+50;
				i++;
				break;
			}
			case'X':{
				if(str[i+1]=='L'){
					a=a+40;
					i=i+2;
				}else if(str[i+1]=='C'){
					a=a+90;
					i+=2;
				}else{
					a=a+10;
					i++;
				}
				break;
			}
			case'V':{
				a=a+5;
				i++;
				break;
			}
			case'I':{
				if(str[i+1]=='V'){
					a=a+4;
					i=i+2;
				}else if(str[i+1]=='X'){
					a=a+9;
					i=i+2;
				}else {
					a=a+1;
					i++;
				}
				break;
			}
		}
	}
	return a;
}
void D(int a){
	char c1[15],c2[11];
	int i=0;
	while(a>=1000){
		a=a-1000;
		c1[i]='M';
		i++;
	}
	while(a>=500){
		a=a-500;
		c1[i]='D';
		i++;
	}
	while(a>=100){
		a=a-100;
		c1[i]='C';
		i++;
	}
	while(a>=50){
		a=a+50;
		c1[i]='L';
		i++;
	}
	while(a>=10){
		a=a-10;
		c1[i]='X';
		i++;
	}
	while(a>=5){
		a=a-5;
		i++;
		c1[i]='V';
	}
	while(a>=1){
		a--;
		i++;
		c1[i]='I';
	}
	int j=0;
    for(i=0 ; c1[i] != '\0' ; i++) {
        //�Y��4�ӬۦP�Ÿ��æC�A���ˬd�O����Ÿ��A�A�M�w�p���ഫ
        if(c1[i] == c1[i+1] && c1[i+1] == c1[i+2] && c1[i+2] == c1[i+3]) {
            switch(c1[i]) {
                //�Y��4��C�A�i�ରDCCCC��CCCC
                case 'C': {
                    //�YC�e����D�A�h��DCCCC�A���s�O��CM
                    if(c1[i-1] == 'D') {
                        c2[j-1] = 'C';
                        c2[j] = 'M';
                    }
                    //�YC�e���DD�A�h��CCCC�A���s�O��CD
                    else {
                        c2[j] = 'C';
                        c2[j+1] = 'D';
                        j++;
                    }
                    break;
                }
                //�Y��4��X�A�i�ରLXXXX��XXXX
                case 'X': {
                    //�YX�e����L�A�h��LXXXX�A���s�O��XC
                    if(c1[i-1] == 'L') {
                        c2[j-1] = 'X';
                        c2[j] = 'C';
                    }
                    //�YX�e���DL�A�h��XXXX�A���s�O��XL
                    else {
                        c2[j] = 'X';
                        c2[j+1] = 'L';
                        j++;
                    }
                    break;
                }
                //�Y��4��I�A�i�ରVIIII��IIII
                case 'I': {
                    //�YI�e����V�A�h��VIIII�A���s�O��IX
                    if(c1[i-1] == 'V') {
                        c2[j-1] = 'I';
                        c2[j] = 'X';
                    }
                    //�YI�e���DV�A�h��IIII�A���s�O��IV
                    else {
                        c2[j] = 'I';
                        c2[j+1] = 'V';
                        j++;
                    }
                    break;
                }
            }
            //�]���O4�ӬۦP���Ÿ��A�ˬd�@�ӫ�A�᭱�T�ӥi�������L
            i += 3;
        }
        //�Y�L4�ӬۦP�Ÿ��æC�A�����ӰO�Y�i
        else
            c2[j] = c1[i];
        //
        j++;
    }
    //��X�ഫ�᪺ù���Ʀr
    printf("%s\n", c2);
}
int main(){
	char n[11];
	while(1){
		int i=0;
		scanf(" %s ",n);
		if(n[0]=='#'){
			break;
		}
		for(i=0;i<11;i++){
			str1[i]=n[i];
		}
		scanf(" %s ",str2);
		int a1=p(str1),a2=p(str2);
		
		if(a1==a2){
			printf("ZERO");
		}else{
		
		int d=abs(a1-a2);
		D(d);
		}
		
	}
	
	return 0; 
}
