#include <stdio.h>
#include <string.h>
//�ŧi�^�ǭȬ�int���A���禡roman_to_arabic�A�Nù���Ʀr�ର���ԧB�Ʀr
int roman_to_arabic(char roman[11]) {
    int i = 0, arabic = 0;
    while(roman[i] != '\0' && roman[i] != '\n') {
        switch(roman[i]) {
            //�YŪ����I�A�i�ରI�BIV��IX
            case 'I': {
                //�YI�᭱��V�A�h��IV�A�N��4
                if(roman[i+1] == 'V') {
                    arabic += 4;
                    i += 2;
                }
                //�YI�᭱��X�A�h��IX�A�N��9
                else if(roman[i+1] == 'X') {
                    arabic += 9;
                    i += 2;
                }
                //�YI�᭱�J�DV�]�DX�A�h��I�A�N��1
                else {
                    arabic += 1;
                    i++;
                }
                break;
            }
            //�YŪ����V�A�]IV�|��Ū����I�A�u�i�ରV�A�N��5
            case 'V': {
                arabic += 5;
                i++;
                break;
            }
            //�YŪ����X�A�]IX�|��Ū����I�A�u�i�ରX�BXL��XC
            case 'X': {
                //�YX�᭱��L�A�h��XL�A�N��40
                if(roman[i+1] == 'L') {
                    arabic += 40;
                    i += 2;
                }
                //�YX�᭱��C�A�h��XC�A�N��90
                else if(roman[i+1] == 'C') {
                    arabic += 90;
                    i += 2;
                }
                //�YX�᭱�J�DL�]�DC�A�h��X�A�N��10
                else {
                    arabic += 10;
                    i++;
                }
                break;
            }
            //�YŪ����L�A�]XL�|��Ū����X�A�u�i�ରL�A�N��50
            case 'L': {
                arabic += 50;
                i++;
                break;
            }
            //�YŪ����C�A�]XC�|��Ū����X�A�u�i�ରC�BCD��CM
            case 'C': {
                //�YC�᭱��D�A�h��CD�A�N��400
                if(roman[i+1] == 'D') {
                    arabic += 400;
                    i += 2;
                }
                //�YC�᭱��M�A�h��CM�A�N��900
                else if(roman[i+1] == 'M') {
                    arabic += 900;
                    i += 2;
                }
                //�YC�᭱�J�DD�]�DM�A�h��C�A�N��100
                else {
                    arabic += 100;
                    i++;
                }
                break;
            }
            //�YŪ����D�A�]CD�|��Ū����C�A�u�i�ରD�A�N��500
            case 'D': {
                arabic += 500;
                i++;
                break;
            }
            //�YŪ����M�A�]CM�|��Ū����C�A�u�i�ରM�A�N��1000
            case 'M': {
                arabic += 1000;
                i++;
                break;
            }
        }
    }
    //�^���ഫ�᪺���ԧB�Ʀr
    return arabic;
}
//�ŧi�^�ǭȬ�void���A�]���^�ǡ^���禡arabic_to_roman�A�N���ԧB�Ʀr�ରù���Ʀr�ÿ�X
void arabic_to_roman(int arabic) {
    int i = 0;
    char roman_temp[15] = {}, roman[11] = {};
    //�Y�Ʀr�j�󵥩�1000�A�N��1000�����@��M
    while(arabic >= 1000) {
        roman_temp[i] = 'M';
        arabic -=1000;
        i++;
    }
    //�Y�Ʀr�j�󵥩�500�A�N��500�����@��D
    while(arabic >= 500) {
        roman_temp[i] = 'D';
        arabic -= 500;
        i++;
    }
    //�Y�Ʀr�j�󵥩�100�A�N��100�����@��C
    while(arabic >= 100) {
        roman_temp[i] = 'C';
        arabic -= 100;
        i++;
    }
    //�Y�Ʀr�j�󵥩�50�A�N��50�����@��L
    while(arabic >= 50) {
        roman_temp[i] = 'L';
        arabic -=50;
        i++;
    }
    //�Y�Ʀr�j�󵥩�10�A�N��10�����@��X
    while(arabic >= 10) {
        roman_temp[i] = 'X';
        arabic -= 10;
        i++;
    }
    //�Y�Ʀr�j�󵥩�5�A�N��5�����@��V
    while(arabic >= 5) {
        roman_temp[i] = 'V';
        arabic -=5;
        i++;
    }
    //�Y�Ʀr�j�󵥩�1�A�N��1�����@��I
    while(arabic >= 1) {
        roman_temp[i] = 'I';
        arabic -= 1;
        i++;
    }
    printf("%s\n",roman_temp);
    //�ˬd�G�bù���Ʀr����ܪk���A���|��4�ӬۦP�Ÿ��æC�A�Y��4��Ÿ��æC�ݥδ�k��������s�O���A��p4�bù���Ʀr����ܪk���O�O��XI�Ӥ��OIIII
    int j=0;
    for(i=0 ; roman_temp[i] != '\0' ; i++) {
        //�Y��4�ӬۦP�Ÿ��æC�A���ˬd�O����Ÿ��A�A�M�w�p���ഫ
        if(roman_temp[i] == roman_temp[i+1] && roman_temp[i+1] == roman_temp[i+2] && roman_temp[i+2] == roman_temp[i+3]) {
            switch(roman_temp[i]) {
                //�Y��4��C�A�i�ରDCCCC��CCCC
                case 'C': {
                    //�YC�e����D�A�h��DCCCC�A���s�O��CM
                    if(roman_temp[i-1] == 'D') {
                        roman[j-1] = 'C';
                        roman[j] = 'M';
                    }
                    //�YC�e���DD�A�h��CCCC�A���s�O��CD
                    else {
                        roman[j] = 'C';
                        roman[j+1] = 'D';
                        j++;
                    }
                    break;
                }
                //�Y��4��X�A�i�ରLXXXX��XXXX
                case 'X': {
                    //�YX�e����L�A�h��LXXXX�A���s�O��XC
                    if(roman_temp[i-1] == 'L') {
                        roman[j-1] = 'X';
                        roman[j] = 'C';
                    }
                    //�YX�e���DL�A�h��XXXX�A���s�O��XL
                    else {
                        roman[j] = 'X';
                        roman[j+1] = 'L';
                        j++;
                    }
                    break;
                }
                //�Y��4��I�A�i�ରVIIII��IIII
                case 'I': {
                    //�YI�e����V�A�h��VIIII�A���s�O��IX
                    if(roman_temp[i-1] == 'V') {
                        roman[j-1] = 'I';
                        roman[j] = 'X';
                    }
                    //�YI�e���DV�A�h��IIII�A���s�O��IV
                    else {
                        roman[j] = 'I';
                        roman[j+1] = 'V';
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
            roman[j] = roman_temp[i];
        //
        j++;
    }
    //��X�ഫ�᪺ù���Ʀr
    printf("%s\n", roman);
}
//�D�禡
int main() {
    while(1) {
        //��Ū���Ĥ@�Ӧr��A�Y��#�h�פ��J�A�Y�_�h�N���r��ƻs��roman_1
        char test[10];
        scanf("%s", test);
        if(test[0] == '#')
            break;
        char roman_1[11] = {}, roman_2[11] = {};
        strcpy(roman_1, test);
        //�AŪ���ĤG�Ӧr��A�N���r��s��roman_2
        scanf("%s", roman_2);
        //�]�q���L�k�����i��ù���Ʀr���p��A�ݥ��Nù���Ʀr�ର���ԧB�Ʀr
        int arabic_1 = roman_to_arabic(roman_1), arabic_2 = roman_to_arabic(roman_2);
        int arabic_difference = abs(arabic_1-arabic_2);
        //�Y�۴�᪺�t���s�A�h��X�uZERO�v*/
        if(arabic_difference == 0)
            printf("ZERO\n");
        //�Y�t����0�A�ھ��D�N�A�ݥ��N���ԧB�Ʀr�ରù���Ʀr�A��X
        else
            arabic_to_roman(arabic_difference);
    }
    return 0;
}
