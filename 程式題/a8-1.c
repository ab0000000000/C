#include <stdio.h>
int main() {
    //�ŧi��Ū���ܼ�num�A�N��n�i��]�Ƥ��Ѫ����
    int num,factor;
    scanf("%d", &num);
    //��for�j��]2��ۤv�������Ҧ��Ʀr�A�ˬd�O�_���]��
    for(factor = 2 ; factor <= num ; factor++) {
        //�Y�i�H�㰣�A�N���ƬO�]�ơA�N����Ѧܱo�X��]�Ƭ���
        if(num%factor == 0) {
            int power = 0;
            while(num%factor == 0) {
                num /= factor;
                power++;
            }
            //�Y����]�ƥu���@���A������X�Ʀr�Y�i
            if(power == 1){
            	printf("%d", factor);
			}
                
            //�Y����]�Ƥ��u�@���A�ݿ�X�@�X����
            else{
            	printf("%d^%d", factor, power);
			}
                
            //���F�̫�@��H�~�A�C�ӽ�]�ƿ�X��Ҷ��[�W*
            if(num != 1){
				printf(" * ");
			}
                
        }
    }
    return 0;
}
