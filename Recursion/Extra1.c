#include "stdio.h"
//限定输入只能是2的正整数次幂
//作用：统计到底是2的多少次幂
int numbers(int n) {
    if(n==1) {
        return 0;
    }
    return numbers(n/2)+1;//这个+1是每次return递归时计数1，最后返回总和。
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d", numbers(n));
    return 0;
}