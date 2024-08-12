#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n=rand();
    int arr[n];
    int target = rand();  // 目標值
    int reps = 0;  // 次數
    int left = 0;  // 左邊
    int right = n-1;  // 右邊
    int middle;  // 中間
    int result = -1;  // 結果
	int i;
    // 初始化陣列
    for (i = 0; i < 50; i++) {
        arr[i] = rand();
    }

    // 進行二分搜尋
    while (left <= right) {
        middle = left + (right - left) / 2;

        // 檢查中間元素是否等於目標值
        if (arr[middle] == target) {
            result = middle;
            break;
        }

        // 如果中間元素大於目標值，則在左半邊繼續搜尋
        if (arr[middle] > target)
            right = middle - 1;

        // 如果中間元素小於目標值，則在右半邊繼續搜尋
        else
            left = middle + 1;

        reps++;
    }

    printf("搜尋次數：%d\n", reps);

    if (result == -1)
        printf("目標值 %d 不存在於陣列中\n", target);
    else
        printf("目標值 %d 在陣列中的索引位置為 %d\n", target, result);

    return 0;
}

