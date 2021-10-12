#include<stdio.h>

int main() {
    int m,x;
    scanf("%d %d",&m,&x);
    long res = 1;
    for(int i = 0; i < m; i++) {
        res *= 1+x;
    }
    printf("%ld\n",res);
    return 0;
}
