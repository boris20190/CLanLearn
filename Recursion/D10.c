#include "stdio.h"

int is_prime(int n,int delitel) {
    if(n<2) {
        return 0;
    }
    if(delitel*delitel<=n) {
        if(n%delitel==0) {
            return 0;
        }
        return is_prime(n,++delitel);
    }
    return 1;
}

int main() {
    int num;
    int delitel = 2;
    scanf("%d", &num);
    if (is_prime(num, delitel)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
