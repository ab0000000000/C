#include <stdio.h>
#include <string.h>
//宣告回傳值為int型態的函式roman_to_arabic，將羅馬數字轉為阿拉伯數字
int roman_to_arabic(char roman[11]) {
    int i = 0, arabic = 0;
    while(roman[i] != '\0' && roman[i] != '\n') {
        switch(roman[i]) {
            //若讀取到I，可能為I、IV或IX
            case 'I': {
                //若I後面有V，則為IV，代表4
                if(roman[i+1] == 'V') {
                    arabic += 4;
                    i += 2;
                }
                //若I後面有X，則為IX，代表9
                else if(roman[i+1] == 'X') {
                    arabic += 9;
                    i += 2;
                }
                //若I後面既非V也非X，則為I，代表1
                else {
                    arabic += 1;
                    i++;
                }
                break;
            }
            //若讀取到V，因IV會先讀取到I，只可能為V，代表5
            case 'V': {
                arabic += 5;
                i++;
                break;
            }
            //若讀取到X，因IX會先讀取到I，只可能為X、XL或XC
            case 'X': {
                //若X後面有L，則為XL，代表40
                if(roman[i+1] == 'L') {
                    arabic += 40;
                    i += 2;
                }
                //若X後面有C，則為XC，代表90
                else if(roman[i+1] == 'C') {
                    arabic += 90;
                    i += 2;
                }
                //若X後面既非L也非C，則為X，代表10
                else {
                    arabic += 10;
                    i++;
                }
                break;
            }
            //若讀取到L，因XL會先讀取到X，只可能為L，代表50
            case 'L': {
                arabic += 50;
                i++;
                break;
            }
            //若讀取到C，因XC會先讀取到X，只可能為C、CD或CM
            case 'C': {
                //若C後面有D，則為CD，代表400
                if(roman[i+1] == 'D') {
                    arabic += 400;
                    i += 2;
                }
                //若C後面有M，則為CM，代表900
                else if(roman[i+1] == 'M') {
                    arabic += 900;
                    i += 2;
                }
                //若C後面既非D也非M，則為C，代表100
                else {
                    arabic += 100;
                    i++;
                }
                break;
            }
            //若讀取到D，因CD會先讀取到C，只可能為D，代表500
            case 'D': {
                arabic += 500;
                i++;
                break;
            }
            //若讀取到M，因CM會先讀取到C，只可能為M，代表1000
            case 'M': {
                arabic += 1000;
                i++;
                break;
            }
        }
    }
    //回傳轉換後的阿拉伯數字
    return arabic;
}
//宣告回傳值為void型態（不回傳）的函式arabic_to_roman，將阿拉伯數字轉為羅馬數字並輸出
void arabic_to_roman(int arabic) {
    int i = 0;
    char roman_temp[15] = {}, roman[11] = {};
    //若數字大於等於1000，就用1000換成一個M
    while(arabic >= 1000) {
        roman_temp[i] = 'M';
        arabic -=1000;
        i++;
    }
    //若數字大於等於500，就用500換成一個D
    while(arabic >= 500) {
        roman_temp[i] = 'D';
        arabic -= 500;
        i++;
    }
    //若數字大於等於100，就用100換成一個C
    while(arabic >= 100) {
        roman_temp[i] = 'C';
        arabic -= 100;
        i++;
    }
    //若數字大於等於50，就用50換成一個L
    while(arabic >= 50) {
        roman_temp[i] = 'L';
        arabic -=50;
        i++;
    }
    //若數字大於等於10，就用10換成一個X
    while(arabic >= 10) {
        roman_temp[i] = 'X';
        arabic -= 10;
        i++;
    }
    //若數字大於等於5，就用5換成一個V
    while(arabic >= 5) {
        roman_temp[i] = 'V';
        arabic -=5;
        i++;
    }
    //若數字大於等於1，就用1換成一個I
    while(arabic >= 1) {
        roman_temp[i] = 'I';
        arabic -= 1;
        i++;
    }
    printf("%s\n",roman_temp);
    //檢查：在羅馬數字的表示法中，不會有4個相同符號並列，若有4格符號並列需用減法的思維重新記錄，比如4在羅馬數字的表示法中是記成XI而不是IIII
    int j=0;
    for(i=0 ; roman_temp[i] != '\0' ; i++) {
        //若有4個相同符號並列，先檢查是什麼符號，再決定如何轉換
        if(roman_temp[i] == roman_temp[i+1] && roman_temp[i+1] == roman_temp[i+2] && roman_temp[i+2] == roman_temp[i+3]) {
            switch(roman_temp[i]) {
                //若為4個C，可能為DCCCC或CCCC
                case 'C': {
                    //若C前面為D，則為DCCCC，重新記為CM
                    if(roman_temp[i-1] == 'D') {
                        roman[j-1] = 'C';
                        roman[j] = 'M';
                    }
                    //若C前面非D，則為CCCC，重新記為CD
                    else {
                        roman[j] = 'C';
                        roman[j+1] = 'D';
                        j++;
                    }
                    break;
                }
                //若為4個X，可能為LXXXX或XXXX
                case 'X': {
                    //若X前面為L，則為LXXXX，重新記為XC
                    if(roman_temp[i-1] == 'L') {
                        roman[j-1] = 'X';
                        roman[j] = 'C';
                    }
                    //若X前面非L，則為XXXX，重新記為XL
                    else {
                        roman[j] = 'X';
                        roman[j+1] = 'L';
                        j++;
                    }
                    break;
                }
                //若為4個I，可能為VIIII或IIII
                case 'I': {
                    //若I前面為V，則為VIIII，重新記為IX
                    if(roman_temp[i-1] == 'V') {
                        roman[j-1] = 'I';
                        roman[j] = 'X';
                    }
                    //若I前面非V，則為IIII，重新記為IV
                    else {
                        roman[j] = 'I';
                        roman[j+1] = 'V';
                        j++;
                    }
                    break;
                }
            }
            //因為是4個相同的符號，檢查一個後，後面三個可直接略過
            i += 3;
        }
        //若無4個相同符號並列，直接照記即可
        else
            roman[j] = roman_temp[i];
        //
        j++;
    }
    //輸出轉換後的羅馬數字
    printf("%s\n", roman);
}
//主函式
int main() {
    while(1) {
        //先讀取第一個字串，若為#則終止輸入，若否則將此字串複製給roman_1
        char test[10];
        scanf("%s", test);
        if(test[0] == '#')
            break;
        char roman_1[11] = {}, roman_2[11] = {};
        strcpy(roman_1, test);
        //再讀取第二個字串，將此字串存到roman_2
        scanf("%s", roman_2);
        //因電腦無法直接進行羅馬數字的計算，需先將羅馬數字轉為阿拉伯數字
        int arabic_1 = roman_to_arabic(roman_1), arabic_2 = roman_to_arabic(roman_2);
        int arabic_difference = abs(arabic_1-arabic_2);
        //若相減後的差為零，則輸出「ZERO」*/
        if(arabic_difference == 0)
            printf("ZERO\n");
        //若差不為0，根據題意，需先將阿拉伯數字轉為羅馬數字再輸出
        else
            arabic_to_roman(arabic_difference);
    }
    return 0;
}
