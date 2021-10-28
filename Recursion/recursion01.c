#include "stdio.h"

int sum(int a, int b) {
    if (a >= b) {
        return a;
    }
    return sum(a + 1, b) + a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}