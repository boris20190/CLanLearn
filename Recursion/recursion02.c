#include "stdio.h"

int numeric_characters_sum(int a) {
    if(a<=0) {
        return a;
    }
    return numeric_characters_sum(a/10) + a%10;
}

int main() {
    int a;
    scanf("%d",&a);
    printf("%d", numeric_characters_sum(a));
    return 0;
}
