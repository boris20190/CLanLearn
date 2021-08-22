#include "stdio.h"

void print_even_digits(int n) {
    int end = n % 10;
    if (n == 0) {
        return;
    }
    if (end % 2 == 0) {
        print_even_digits(n / 10);
    } else {
        return print_even_digits(n / 10);
    }
    printf("%d ", n % 10);
}

int main() {
    int num;
    scanf("%d", &num);
    print_even_digits(num);
    return 0;
}