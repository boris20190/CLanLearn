#include "stdio.h"
//打印数字三角形。暂时还不会空格缩进
void printNumbers(int num) {
    if (num > 1) {
        printNumbers(num - 1);
    }
    int n = num;
    while (n) {
        printf("%d ", num);
        n--;
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    printNumbers(num);
    return 0;
}