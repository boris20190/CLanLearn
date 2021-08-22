#include "stdio.h"

int sum_digits(int num) {
    if (num == 0) {
        return 0;
    }
    //return 递归函数名+函数所用数据是把所有压入栈的数据求和，最后输出总和
    return sum_digits(num / 10) + num % 10;//这个+num%10的作用是把压入栈的数据经过取个位值的变换后相加，通过前面的return返回
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sum_digits(num));
    return 0;
}