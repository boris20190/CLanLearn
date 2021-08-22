#include <stdio.h>
//我实在想不到什么好方法了，只能把以前的代码粘过来了。
//有更好的代码一定修改！！！
void print_num(int n, int i, int j) {
    for (int k = 0; k < j; ++k) {
        i++;
        if (i <= n) {
            printf("%d ", j);
        }
    }
    if (i <= n) {
        return print_num(n, i, ++j);
    }
}

int main() {
    int n, i = 0, j = 1;
    scanf("%d", &n);
    print_num(n, i, j);
    return 0;
}

