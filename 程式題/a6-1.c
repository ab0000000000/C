#include <stdio.h>
#include <math.h>
int main() {
    //宣告並讀取變數a、b、c，代表一元二次方程式的三個係數
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //宣告變數D，代表一元二次方程式的判別式
    int D = b*b-4*a*c;
    //若判別式小於零，代表無實根存在
    if(D < 0)
        printf("No real root\n");
    //若判別式大於等於零，代表有實根存在
    else {
        int x1 = (-b+sqrt(D))/(2*a);
        int x2 = (-b-sqrt(D))/(2*a);
        //若判別式大於零，代表有兩相異實根
        if(D > 0)
            printf("Two different roots x1=%d , x2=%d", x1, x2);
        //若判別式等於零，代表有相同實根
        else if(D == 0)
            printf("Two same roots x=%d", x1);
    }
    return 0;
}
