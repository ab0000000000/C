#include <stdio.h>
#include <math.h>
int main() {
    //�ŧi��Ū���ܼ�a�Bb�Bc�A�N��@���G����{�����T�ӫY��
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //�ŧi�ܼ�D�A�N��@���G����{�����P�O��
    int D = b*b-4*a*c;
    //�Y�P�O���p��s�A�N��L��ڦs�b
    if(D < 0)
        printf("No real root\n");
    //�Y�P�O���j�󵥩�s�A�N����ڦs�b
    else {
        int x1 = (-b+sqrt(D))/(2*a);
        int x2 = (-b-sqrt(D))/(2*a);
        //�Y�P�O���j��s�A�N����۲����
        if(D > 0)
            printf("Two different roots x1=%d , x2=%d", x1, x2);
        //�Y�P�O������s�A�N���ۦP���
        else if(D == 0)
            printf("Two same roots x=%d", x1);
    }
    return 0;
}
