#include "stdio.h"

int recurs_power(int n, int p) {
    if (p == 0) {
        return 1;
    }
    return recurs_power(n, p - 1) * n;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", recurs_power(n, p));
    return 0;
}