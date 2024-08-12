#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n=rand();
    int arr[n];
    int target = rand();  // �ؼЭ�
    int reps = 0;  // ����
    int left = 0;  // ����
    int right = n-1;  // �k��
    int middle;  // ����
    int result = -1;  // ���G
	int i;
    // ��l�ư}�C
    for (i = 0; i < 50; i++) {
        arr[i] = rand();
    }

    // �i��G���j�M
    while (left <= right) {
        middle = left + (right - left) / 2;

        // �ˬd���������O�_����ؼЭ�
        if (arr[middle] == target) {
            result = middle;
            break;
        }

        // �p�G���������j��ؼЭȡA�h�b���b���~��j�M
        if (arr[middle] > target)
            right = middle - 1;

        // �p�G���������p��ؼЭȡA�h�b�k�b���~��j�M
        else
            left = middle + 1;

        reps++;
    }

    printf("�j�M���ơG%d\n", reps);

    if (result == -1)
        printf("�ؼЭ� %d ���s�b��}�C��\n", target);
    else
        printf("�ؼЭ� %d �b�}�C�������ަ�m�� %d\n", target, result);

    return 0;
}

