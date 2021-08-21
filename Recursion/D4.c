#include "stdio.h"

void print_num(int num) {
    if (num >= 10) {
        print_num(num / 10);
    }
    printf("%d ", num % 10);
}

int main() {
    int number;
    scanf("%d", &number);
    print_num(number);
    return 0;
}