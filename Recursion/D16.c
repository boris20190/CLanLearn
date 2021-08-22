#include "stdio.h"

/*直接用int中最大的2的整数次幂来除以n判断是否整除。能整除则n也是2的整数次幂
 * 当然，这个不是递归，很取巧，但能把题做出来。嘿嘿嘿
 * int is2pow(int n) {
    return (1073741824 % n);
}*/

int is2pow(int n) {
    if(n==1) {
        return 0;
    }
    if(n%2==0) {
        return is2pow(n/2);
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    is2pow(n) ? printf("NO") : printf("YES");
    return 0;
}