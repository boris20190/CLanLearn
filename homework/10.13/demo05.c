#include<stdio.h>

int main() {
    long fac = 1;
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        fac *= i;
    }
    if(fac<=0) {
        printf("Error! Overflow!\n");
    }else {
        printf("%ld\n",fac);
    }
    return 0;
}
