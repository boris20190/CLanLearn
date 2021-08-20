#include "stdio.h"

#define N 10

void bubbleSort(int arr[]);

void printOut(int arr[]);

int main() {
    printf("从小到大排列\n");
    printf("输入%d个数：\n", N);
    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr);
    printOut(arr);
    return 0;
}

void bubbleSort(int arr[]) {
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printOut(int arr[]) {
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
