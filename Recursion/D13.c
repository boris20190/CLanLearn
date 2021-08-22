#include "stdio.h"
//作为循环来使用
void prime_factor(int num, int temp) {
    if (num < temp) {
        return;
    }
    while (num % temp == 0) {
        printf("%d ", temp);
        num /= temp;
    }
    return prime_factor(num, ++temp);
}

int main() {
    int num;
    scanf("%d", &num);
    prime_factor(num, 2);
    return 0;
}