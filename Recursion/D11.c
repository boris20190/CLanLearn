#include "stdio.h"

//默认输入为自然数
int addNumber(int num) {
    if (num >= 2) {
        return addNumber(num / 2) + num % 2;
    } else {
        return num;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", addNumber(num));
    return 0;
}