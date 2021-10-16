#include "stdio.h"

int main() {
    printf("Put in n:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Even index:\n");
    for (int i = 0; i < n; i+=2) {
        printf("%d ",arr[i]);
    }
    printf("\nOdd index:\n");
    for (int i = 1; i < n; i+=2) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
