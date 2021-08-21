#include "stdio.h"

int sum_num(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num + sum_num(num - 1);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sum_num(num));
    return 0;
}