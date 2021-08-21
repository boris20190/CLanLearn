#include "stdio.h"

void reverse_string() {
    char ch;
    if ((ch = getchar()) != '.') {
        reverse_string();
    }
    if (ch != '.') {
        putchar(ch);
    }
}

int main() {
    reverse_string();
    return 0;
}