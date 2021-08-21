#include "stdio.h"

void print_num(int num) {
    if (num >= 1) {
        printf("%d ", num);
        return print_num(--num);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    print_num(num);
    return 0;
}
