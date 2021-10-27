#include "stdio.h"

#define N 10

void change_sign(int *p) {
    for (int i = 0; i < N; ++i) {
        if (*(p + i) < 0) {
            *(p + i) *= -1;
        }
    }
}

int main() {
    int X[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &X[i]);
    }
    change_sign(X);
    for (int i = 0; i < N; ++i) {
        printf("%d ", X[i]);
    }
    return 0;
}