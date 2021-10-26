#include "stdio.h"

int main() {
    int arr[10];
    printf("Put in 10 numbers\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&arr[i]);
    }
    int *p;
    p = arr;
    for (int i = 1; i < 10; ++i) {
        if(*p<arr[i]) {
            *p = arr[i];
        }
    }
    printf("max=%d",*p);
    return 0;
}