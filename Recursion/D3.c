#include "stdio.h"

void revers_digits(int num) {
    if (num >= 10) {
        printf("%d ", num % 10);
        revers_digits(num / 10);//递归执行一次，就压一次栈
    } else {
        printf("%d ", num);//递归结束后会弹栈，如果没有else限定，每次弹栈也会经过else内的语句
    }
}

int main() {
    int num;
    scanf("%d", &num);
    revers_digits(num);
    return 0;
}