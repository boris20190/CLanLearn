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
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[1] && arr[i] < arr[n - 1]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
