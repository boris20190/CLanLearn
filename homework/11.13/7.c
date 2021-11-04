#include "stdio.h"
#define N 10000

void f1() {
    double res = 0;
    int sgn = 1;
    for (int i = 1; i <= N; ++i) {
        res += (double)sgn * 1 / i;
        sgn = -sgn;
    }
    printf("%lf",res);
}

void f2() {
    double res = 0;
    int sgn = -1;
    for (int i = N; i >= 1; --i) {
        res += (double)sgn*1/i;
        sgn = -sgn;
    }
    printf("%lf",res);
}

void f3() {
    double res1 = 0;
    double res2 = 0;
    for (int i = 1; i <= N; i+=2) {
        res1 += (double)1/i;
    }
    for (int i = 2; i <= N; i+=2) {
        res2 += (double)1/i;
    }
    printf("%lf",res1-res2);
}

void f4() {
    double res1 = 0;
    double res2 = 0;
    for (int i = N-1; i >= 1; i-=2) {
        res1 += (double)1/i;
    }
    for (int i = N; i >= 2; i-=2) {
        res2 += (double)1/i;
    }
    printf("%lf",res1-res2);
}
int main() {
    f1();
    printf("\n");
    f2();
    printf("\n");
    f3();
    printf("\n");
    f4();
    printf("\n");
    return 0;
}