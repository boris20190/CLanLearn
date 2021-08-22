#include "stdio.h"

void fromTo(int from, int to) {
    if (from == to) {
        printf("%d", from);
        return;
    }
    if (from > to) {
        printf("%d ", from);
        fromTo(from - 1, to);
    } else {
        printf("%d ", from);
        fromTo(from + 1, to);
    }
}

int main() {
    int from, to;
    scanf("%d", &from);
    scanf("%d", &to);
    fromTo(from, to);
    return 0;
}