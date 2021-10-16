#include "stdio.h"

int main() {
    int n;
    printf("Put in n:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }

    printf("\nCyclic shift:\n");
    int temp=arr[0];
    for (int i = n-1; i >= 1; --i) {
        arr[(i+1)%n] = arr[i];
    }
    arr[1] = temp;

    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }

    printf("\n");
    return 0;
}
