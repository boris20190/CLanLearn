#include "stdio.h"

#define N 10

void insertion_sort(int *p, int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = *(p + i);
        j = i - 1;
        while ((j >= 0) && (*(p + j) > key)) {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = key;
    }
}

int main() {
    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, N);
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}