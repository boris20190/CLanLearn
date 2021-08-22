#include "stdio.h"

void odd() {
    int num;
    scanf("%d",&num);
    if(num==0) {
        return;
    }
    if(num%2) {
        printf("%d ",num);
    }
    return odd();
}

int main() {
    odd();
    return 0;
}