#include <stdio.h>
int main() {
    //宣告並讀取變數num，代表要進行因數分解的整數
    int num,factor;
    scanf("%d", &num);
    //用for迴圈跑2到自己本身的所有數字，檢查是否為因數
    for(factor = 2 ; factor <= num ; factor++) {
        //若可以整除，代表此數是因數，將其分解至得出質因數為止
        if(num%factor == 0) {
            int power = 0;
            while(num%factor == 0) {
                num /= factor;
                power++;
            }
            //若此質因數只有一次，直接輸出數字即可
            if(power == 1){
            	printf("%d", factor);
			}
                
            //若此質因數不只一次，需輸出共幾次方
            else{
            	printf("%d^%d", factor, power);
			}
                
            //除了最後一位以外，每個質因數輸出後皆須加上*
            if(num != 1){
				printf(" * ");
			}
                
        }
    }
    return 0;
}
