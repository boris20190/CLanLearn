#include "stdio.h"

void print_num(int num) {
    if (num >= 2) {
        print_num(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    print_num(num);
    return 0;
}